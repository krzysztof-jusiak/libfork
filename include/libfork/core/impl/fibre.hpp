#ifndef F7577AB3_0439_404D_9D98_072AB84FBCD0
#define F7577AB3_0439_404D_9D98_072AB84FBCD0

#include <algorithm>
#include <bit>
#include <cstdlib>
#include <memory>
#include <type_traits>
#include <utility>

#include "libfork/core/impl/utility.hpp"

namespace lf {

inline namespace ext {

class fibre {

  static constexpr std::size_t k_init_size = 256;

 public:
  /**
   * @brief A fibril is a fibre fragment that contains a segment of the stack.
   *
   * A chain of fibrils looks like `R <- F1 <- F2 <- F3 <- ... <- Fn` where `R` is the root fibril.
   * Each fibril has a pointer to the root fibril and the root fibril has a pointer to the top
   * fibril, `Fn`.
   *
   */
  class fibril : impl::immovable<fibril> {

   public:
    /**
     * @brief Get the top fibril in the chain.
     */
    [[nodiscard]] auto top() const noexcept -> fibril * { return m_root->m_top; }

   private:
    friend class fibre;

    struct deleter {
      void operator()(fibril *ptr) const noexcept {
        while (ptr != nullptr) {
          std::free(std::exchange(ptr, ptr->m_prev)); // NOLINT
        }
      }
    };

    /**
     * @brief A unique pointer to a fibril with a custom deleter.
     */
    using unique_ptr = std::unique_ptr<fibril, deleter>;

    /**
     * @brief Allocate a new fibril with a stack of size `size` and attach it to the given fibril chain.
     */
    [[nodiscard]] static auto next_fibril(std::size_t size, unique_ptr &&prev) -> unique_ptr {

      void *ptr = std::malloc(sizeof(fibril) + size); // NOLINT

      if (ptr == nullptr) {
        throw std::bad_alloc();
      }

      unique_ptr frag{static_cast<fibril *>(ptr)};

      frag->m_lo = impl::byte_cast(ptr) + sizeof(fibril);
      frag->m_sp = frag->m_lo;
      frag->m_hi = impl::byte_cast(ptr) + sizeof(fibril) + size;

      frag->m_root = prev ? prev->m_root : frag.get();
      frag->m_prev = prev.release();
      frag->m_root->m_top = frag.get(); // Set root to point at new top.

      return frag;
    }

    std::byte *m_lo; ///< This fibril's stack.
    std::byte *m_sp; ///< The current position of the stack pointer in the stack.
    std::byte *m_hi; ///< The one-past-the-end address of the stack.

    fibril *m_top;  ///< A non-owning pointer to top fibril if this is the root fibril.
    fibril *m_root; ///< A non-owning pointer to the root fibril.
    fibril *m_prev; ///< A linked list of fibrils.
  };

  // Keep stack aligned.
  static_assert(sizeof(fibril) >= impl::k_new_align && sizeof(fibril) % impl::k_new_align == 0);
  // Implicit lifetime
  static_assert(std::is_trivially_default_constructible_v<fibril>);
  static_assert(std::is_trivially_destructible_v<fibril>);

  /**
   * @brief Construct a fibre with a small stack.
   */
  fibre()
      : m_top(fibril::next_fibril(k_init_size, nullptr)),
        m_lo(m_top->m_lo),
        m_sp(m_top->m_sp),
        m_hi(m_top->m_hi) {
    LF_LOG("Constructing fibre");
  }

  /**
   * @brief Construct a new fibre object taking ownership of the fibre that `frag` is a part of.
   *
   * This requires that `frag` is part of a fibre chain that has called `release()`.
   */
  explicit fibre(fibril *frag) : m_top(frag->top()), m_lo(m_top->m_lo), m_sp(m_top->m_sp), m_hi(m_top->m_hi) {
    LF_LOG("Constructing fibre from fibril");
  }

  fibre(fibre const &) = delete;

  auto operator=(fibre const &) -> fibre & = delete;

  fibre(fibre &&other) noexcept : fibre() { swap(*this, other); }

  auto operator=(fibre &&other) noexcept -> fibre & {
    swap(*this, other);
    return *this;
  }

  inline friend void swap(fibre &lhs, fibre &rhs) noexcept {
    using std::swap;
    swap(lhs.m_top, rhs.m_top);
    swap(lhs.m_lo, rhs.m_lo);
    swap(lhs.m_sp, rhs.m_sp);
    swap(lhs.m_hi, rhs.m_hi);
  }

  ~fibre() noexcept = default;

  /**
   * @brief Size of the current fibre's stack.
   */
  [[nodiscard]] auto capacity() const noexcept -> std::size_t { return m_hi - m_lo; }

  /**
   * @brief Release unused/unusable underlying storage.
   *
   * This does not reduce the capacity of the fibre. It requires that all allocations on
   * the current fibre have been deallocated.
   */
  void squash() {

    LF_LOG("Squashing fibre");

    LF_ASSERT(m_top);
    LF_ASSERT(m_sp == m_lo);

    fibril::unique_ptr prev{m_top->m_prev}; // Takes ownership

    m_top->m_root = m_top.get();
    m_top->m_prev = nullptr;
    m_top->m_top = m_top.get();
  }

  /**
   * @brief Release the underlying storage of the current fibre and re-initialize this one.
   *
   * A new fibre can be constructed from the fibril to continue the released fibre.
   */
  [[nodiscard]] auto release() -> fibril * {

    LF_LOG("Releasing fibre");

    LF_ASSERT(m_top);

    m_top->m_sp = m_sp; // Cache the stack pointer for future resumption.

    fibril *top = std::exchange(m_top, fibril::next_fibril(k_init_size, nullptr)).release();

    m_lo = m_top->m_lo;
    m_sp = m_top->m_sp;
    m_hi = m_top->m_hi;

    return top;
  }

  /**
   * @brief Allocate `count` bytes of memory on a fibril in the bundle.
   *
   * The memory will be aligned to a multiple of `__STDCPP_DEFAULT_NEW_ALIGNMENT__`.
   *
   * Deallocate the memory with `deallocate` in a FILO manor.
   */
  [[nodiscard]] auto allocate(std::size_t size) -> void * {
    //
    LF_ASSERT(m_top);

    // Round up to the next multiple of the alignment.
    std::size_t ext_size = (size + impl::k_new_align - 1) & ~(impl::k_new_align - 1);

    if (m_hi - m_sp < ext_size) [[unlikely]] {
      grow(size);
    }

    LF_LOG("Allocating {} bytes {}-{}", size, (void *)m_sp, (void *)(m_sp + ext_size));

    return std::exchange(m_sp, m_sp + ext_size);
  }

  /**
   * @brief Deallocate `count` bytes of memory from the current fibre.
   *
   * This must be called in FILO order with `allocate`.
   */
  constexpr void deallocate(void *ptr) noexcept {
    // Should compile to a conditional move.

    LF_LOG("Deallocating {} skipped={}", ptr, m_sp == m_lo);

    m_sp = m_sp == m_lo ? m_sp : static_cast<std::byte *>(ptr);
  }

  /**
   * @brief Get the fibril that the last allocation was on, this is non-null.
   */
  [[nodiscard]] constexpr auto top() -> fibril * { return m_top.get(); }

 private:
  // A null state occurs when m_control = nullptr, in this case m_lo == m_sp == m_hi == nullptr.

  fibril::unique_ptr m_top; ///< The heap-allocated object that manages the fibre.

  std::byte *m_lo; ///< Mirror of the top fibril's `m_lo` member.
  std::byte *m_sp; ///< Position of stack pointer in the top fibril.
  std::byte *m_hi; ///< Mirror of the top fibril's `m_sp` member.

  /**
   * @brief Allocate a new fibril and attach it to the current fibre.
   */
  void grow(std::size_t space) {

    LF_LOG("Growing fibre");

    // Round size to a power of 2 greater than `space`, min size and double the prev capacity.
    m_top = fibril::next_fibril(std::max(2 * capacity(), space), std::move(m_top));

    // Update mirrors.
    m_lo = m_top->m_lo;
    m_sp = m_top->m_sp;
    m_hi = m_top->m_hi;
  }
};

} // namespace ext

} // namespace lf

#endif /* F7577AB3_0439_404D_9D98_072AB84FBCD0 */