#ifndef A896798B_7E3B_4854_9997_89EA5AE765EB
#define A896798B_7E3B_4854_9997_89EA5AE765EB

#include <concepts>
#include <type_traits>

#include "libfork/core/invocable.hpp"

#include "libfork/core/impl/utility.hpp"

namespace lf::impl {

template <quasi_pointer I>
class return_result_base {
 public:
  void set_return(I ret) noexcept { this->m_ret = std::move(ret); }

 protected:
  [[no_unique_address]] I m_ret;
};

/**
 * @brief General case for non-void, non-reference
 */
template <returnable R, return_address_for<R> I>
struct return_result : return_result_base<I> {

  /**
   * @brief Convert and assign `value` to the return address.
   *
   * If the return address is directly assignable from `value` this will not construct the intermediate `T`.
   */
  template <std::convertible_to<R> U>
  void return_value(U &&value) {
    if constexpr (std::indirectly_writable<I, U>) {
      *(this->m_ret) = std::forward<U>(value);
    } else {
      *(this->m_ret) = static_cast<R>(std::forward<U>(value));
    }
  }

  /**
   * @brief For use with `co_return {expr}`
   */
  void return_value(R &&value) { *(this->m_ret) = std::move(value); }
};

/**
 * @brief Case for reference types.
 */
template <returnable R, return_address_for<R> I>
  requires std::is_reference_v<R>
struct return_result<R, I> : return_result_base<I> {
  /**
   * @brief Assign `value` to the return address.
   */
  template <safe_ref_bind_to<R> U>
  void return_value(U &&ref) {
    *(this->m_ret) = std::forward<U>(ref);
  }
};

/**
 * @brief Case for void return.
 */
template <>
struct return_result<void, discard_t> {
  static constexpr void return_void() noexcept {};
};

} // namespace lf::impl

#endif /* A896798B_7E3B_4854_9997_89EA5AE765EB */