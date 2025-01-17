
//---------------------------------------------------------------//
//        This is a machine generated file DO NOT EDIT IT        //
//---------------------------------------------------------------//

#ifndef EDCA974A_808F_4B62_95D5_4D84E31B8911
#define EDCA974A_808F_4B62_95D5_4D84E31B8911

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef A6BE090F_9077_40E8_9B57_9BAFD9620469
#define A6BE090F_9077_40E8_9B57_9BAFD9620469

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef A951FB73_0FCF_4B7C_A997_42B7E87D21CB
#define A951FB73_0FCF_4B7C_A997_42B7E87D21CB
// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <array>       // for tuple_element, tuple_size
#include <concepts>    // for default_initializable
#include <cstddef>     // for size_t
#include <memory>      // for destroy
#include <span>        // for span
#include <type_traits> // for integral_constant, type_identity

#ifndef CF97E524_27A6_4CD9_8967_39F1B1BE97B6
#define CF97E524_27A6_4CD9_8967_39F1B1BE97B6

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <stdexcept> // for runtime_error
#include <utility>   // for move

#ifndef D66BBECE_E467_4EB6_B74A_AAA2E7256E02
#define D66BBECE_E467_4EB6_B74A_AAA2E7256E02

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <functional> // for function
#include <utility>    // for move
#include <version>    // for __cpp_lib_move_only_function

#ifndef C9703881_3D9C_41A5_A7A2_44615C4CFA6A
#define C9703881_3D9C_41A5_A7A2_44615C4CFA6A

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <algorithm>   // for max
#include <atomic>      // for atomic, atomic_thread_fence, memory_order, memo...
#include <bit>         // for has_single_bit
#include <concepts>    // for convertible_to, invocable, default_initializable
#include <cstddef>     // for ptrdiff_t, size_t
#include <functional>  // for invoke
#include <memory>      // for unique_ptr, make_unique
#include <optional>    // for optional
#include <type_traits> // for invoke_result_t
#include <utility>     // for addressof, forward, exchange
#include <vector>      // for vector
#include <version>     // for ptrdiff_t

#ifndef DF63D333_F8C0_4BBA_97E1_32A78466B8B7
#define DF63D333_F8C0_4BBA_97E1_32A78466B8B7

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <bit>             // for bit_cast, has_single_bit
#include <concepts>        // for same_as, integral, convertible_to
#include <cstddef>         // for byte, size_t
#include <cstdint>         // for uint16_t
#include <cstdio>          // for fprintf, stderr
#include <exception>       // for terminate
#include <functional>      // for invoke
#include <limits>          // for numeric_limits
#include <new>             // for std::hardware_destructive_interference_size
#include <source_location> // for source_location
#include <stdexcept>
#include <type_traits> // for invoke_result_t, remove_cvref_t, type_identity, condit...
#include <utility>     // for cmp_greater, cmp_less, forward
#include <vector>      // for vector
#include <version>     // for __cpp_lib_hardware_interference_size

#ifndef C5DCA647_8269_46C2_B76F_5FA68738AEDA
#define C5DCA647_8269_46C2_B76F_5FA68738AEDA

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <cassert> // for assert
#include <version> // for __cpp_lib_unreachable, ...

/**
 * @file macro.hpp
 *
 * @brief A collection of internal/public macros.
 *
 * These are exhaustively documented due to macros nasty visibility rules however, only
 * macros that are marked as __[public]__ should be consumed.
 */

// NOLINTBEGIN Sometime macros are the only way to do things...

/**
 * @brief __[public]__ The major version of libfork.
 *
 * Increments with incompatible API changes.
 */
#define LF_VERSION_MAJOR 3
/**
 * @brief __[public]__ The minor version of libfork.
 *
 * Increments when functionality is added in an API backward compatible manner.
 */
#define LF_VERSION_MINOR 7
/**
 * @brief __[public]__ The patch version of libfork.
 *
 * Increments when bug fixes are made in an API backward compatible manner.
 */
#define LF_VERSION_PATCH 1

/**
 * @brief Use to conditionally decorate lambdas and ``operator()`` (alongside ``LF_STATIC_CONST``) with
 * ``static``.
 */
#ifdef __cpp_static_call_operator
  #define LF_STATIC_CALL static
#else
  #define LF_STATIC_CALL
#endif

/**
 * @brief Use with ``LF_STATIC_CALL`` to conditionally decorate ``operator()`` with ``const``.
 */
#ifdef __cpp_static_call_operator
  #define LF_STATIC_CONST
#else
  #define LF_STATIC_CONST const
#endif

// clang-format off

/**
 * @brief Use like `BOOST_HOF_RETURNS` to define a function/lambda with all the noexcept/requires/decltype specifiers.
 * 
 * This macro is not truly variadic but the ``...`` allows commas in the macro argument.
 */
#define LF_HOF_RETURNS(...) noexcept(noexcept(__VA_ARGS__)) -> decltype(__VA_ARGS__) requires requires { __VA_ARGS__; } { return __VA_ARGS__;}

// clang-format on

/**
 * @brief __[public]__ Detects if the compiler has exceptions enabled.
 *
 * Overridable by defining ``LF_COMPILER_EXCEPTIONS``.
 */
#ifndef LF_COMPILER_EXCEPTIONS
  #if defined(__cpp_exceptions) || (defined(_MSC_VER) && defined(_CPPUNWIND)) || defined(__EXCEPTIONS)
    #define LF_COMPILER_EXCEPTIONS 1
  #else
    #define LF_COMPILER_EXCEPTIONS 0
  #endif
#endif

#if LF_COMPILER_EXCEPTIONS || defined(LF_DOXYGEN_SHOULD_SKIP_THIS)
  /**
   * @brief Expands to ``try`` if exceptions are enabled, otherwise expands to ``if constexpr (true)``.
   */
  #define LF_TRY try
  /**
   * @brief Expands to ``catch (...)`` if exceptions are enabled, otherwise expands to ``if constexpr
   * (false)``.
   */
  #define LF_CATCH_ALL catch (...)
  /**
   * @brief Expands to ``throw X`` if exceptions are enabled, otherwise terminates the program.
   */
  #define LF_THROW(X) throw X
  /**
   * @brief Expands to ``throw`` if exceptions are enabled, otherwise terminates the program.
   */
  #define LF_RETHROW throw
#else

  #include <exception>

  #define LF_TRY if constexpr (true)
  #define LF_CATCH_ALL if constexpr (false)
  #ifndef NDEBUG
    #define LF_THROW(X) assert(false && "Tried to throw: " #X)
  #else
    #define LF_THROW(X) std::terminate()
  #endif
  #ifndef NDEBUG
    #define LF_RETHROW assert(false && "Tried to rethrow without compiler exceptions")
  #else
    #define LF_RETHROW std::terminate()
  #endif
#endif

#ifdef __cpp_lib_unreachable
  #include <utility>
#endif

namespace lf::impl {

#ifdef __cpp_lib_unreachable
using std::unreachable;
#else
/**
 * @brief A homebrew version of `std::unreachable`, see https://en.cppreference.com/w/cpp/utility/unreachable
 */
[[noreturn]] inline void unreachable() {
  // Uses compiler specific extensions if possible.
  #if defined(_MSC_VER) && !defined(__clang__) // MSVC
  __assume(false);
  #else                                        // GCC, Clang
  __builtin_unreachable();
  #endif
  // Even if no extension is used, undefined behavior is still raised by infinite loop.
  for (;;) {
  }
}
#endif

} // namespace lf::impl

/**
 * @brief Invokes undefined behavior if ``expr`` evaluates to `false`.
 *
 * \rst
 *
 *  .. warning::
 *
 *    This has different semantics than ``[[assume(expr)]]`` as it WILL evaluate the
 *    expression at runtime. Hence you should conservatively only use this macro
 *    if ``expr`` is side-effect free and cheap to evaluate.
 *
 * \endrst
 */

#define LF_ASSUME(expr)                                                                                      \
  do {                                                                                                       \
    if (!(expr)) {                                                                                           \
      ::lf::impl::unreachable();                                                                             \
    }                                                                                                        \
  } while (false)

/**
 * @brief If ``NDEBUG`` is defined then ``LF_ASSERT(expr)`` is  `` `` otherwise ``assert(expr)``.
 *
 * This is for expressions with side-effects.
 */
#ifndef NDEBUG
  #define LF_ASSERT_NO_ASSUME(expr) assert(expr)
#else
  #define LF_ASSERT_NO_ASSUME(expr)                                                                          \
    do {                                                                                                     \
    } while (false)
#endif

/**
 * @brief If ``NDEBUG`` is defined then ``LF_ASSERT(expr)`` is  ``LF_ASSUME(expr)`` otherwise
 * ``assert(expr)``.
 */
#ifndef NDEBUG
  #define LF_ASSERT(expr) assert(expr)
#else
  #define LF_ASSERT(expr) LF_ASSUME(expr)
#endif

/**
 * @brief Macro to prevent a function to be inlined.
 */
#if !defined(LF_NOINLINE)
  #if defined(_MSC_VER) && !defined(__clang__)
    #define LF_NOINLINE __declspec(noinline)
  #elif defined(__GNUC__) && __GNUC__ > 3
  // Clang also defines __GNUC__ (as 4)
    #if defined(__CUDACC__)
  // nvcc doesn't always parse __noinline__, see: https://svn.boost.org/trac/boost/ticket/9392
      #define LF_NOINLINE __attribute__((noinline))
    #elif defined(__HIP__)
  // See https://github.com/boostorg/config/issues/392
      #define LF_NOINLINE __attribute__((noinline))
    #else
      #define LF_NOINLINE __attribute__((__noinline__))
    #endif
  #else
    #define LF_NOINLINE
  #endif
#endif

/**
 * @brief Force no-inline for clang, works-around https://github.com/llvm/llvm-project/issues/63022.
 *
 * TODO: Check __apple_build_version__ when xcode 16 is released.
 */
#if defined(__clang__)
  #if defined(__apple_build_version__) || __clang_major__ <= 16
    #define LF_CLANG_TLS_NOINLINE LF_NOINLINE
  #else
    #define LF_CLANG_TLS_NOINLINE
  #endif
#else
  #define LF_CLANG_TLS_NOINLINE
#endif

/**
 * @brief Macro to use next to 'inline' to force a function to be inlined.
 *
 * \rst
 *
 * .. note::
 *
 *    This does not imply the c++'s `inline` keyword which also has an effect on linkage.
 *
 * \endrst
 */
#if !defined(LF_FORCEINLINE)
  #if defined(_MSC_VER) && !defined(__clang__)
    #define LF_FORCEINLINE __forceinline
  #elif defined(__GNUC__) && __GNUC__ > 3
  // Clang also defines __GNUC__ (as 4)
    #define LF_FORCEINLINE __attribute__((__always_inline__))
  #else
    #define LF_FORCEINLINE
  #endif
#endif

#if defined(__clang__) && defined(__has_attribute)
  /**
   * @brief Compiler specific attribute.
   */
  #if __has_attribute(coro_return_type)
    #define LF_CORO_RETURN_TYPE [[clang::coro_return_type]]
  #else
    #define LF_CORO_RETURN_TYPE
  #endif
  /**
   * @brief Compiler specific attribute.
   */
  #if __has_attribute(coro_only_destroy_when_complete)
    #define LF_CORO_ONLY_DESTROY_WHEN_COMPLETE [[clang::coro_only_destroy_when_complete]]
  #else
    #define LF_CORO_ONLY_DESTROY_WHEN_COMPLETE
  #endif

  /**
   * @brief Compiler specific attributes libfork uses for its coroutine types.
   */
  #define LF_CORO_ATTRIBUTES LF_CORO_RETURN_TYPE LF_CORO_ONLY_DESTROY_WHEN_COMPLETE

#else
  /**
   * @brief Compiler specific attributes libfork uses for its coroutine types.
   */
  #define LF_CORO_ATTRIBUTES
#endif

/**
 * @brief Compiler specific attributes libfork uses for its coroutine types.
 */
#if defined(__clang__) && defined(__has_attribute)
  #if __has_attribute(coro_wrapper)
    #define LF_CORO_WRAPPER [[clang::coro_wrapper]]
  #else
    #define LF_CORO_WRAPPER
  #endif
#else
  #define LF_CORO_WRAPPER
#endif

/**
 * @brief __[public]__ A customizable logging macro.
 *
 * By default this is a no-op. Defining ``LF_DEFAULT_LOGGING`` will enable a default
 * logging implementation which prints to ``std::cout``. Overridable by defining your
 * own ``LF_LOG`` macro with an API like ``std::format()``.
 */
#ifndef LF_LOG
  #ifdef LF_DEFAULT_LOGGING
    #include <iostream>
    #include <thread>
    #include <type_traits>

    #ifdef __cpp_lib_format
      #include <format>

      #define LF_FORMAT(message, ...) std::format((message)__VA_OPT__(, ) __VA_ARGS__)
    #else
      #define LF_FORMAT(message, ...) (message)
    #endif

    #ifdef __cpp_lib_syncbuf
      #include <syncstream>

      #define LF_SYNC_COUT std::osyncstream(std::cout) << std::this_thread::get_id()
    #else
      #define LF_SYNC_COUT std::cout << std::this_thread::get_id()
    #endif

    #define LF_LOG(message, ...)                                                                             \
      do {                                                                                                   \
        if (!std::is_constant_evaluated()) {                                                                 \
          LF_SYNC_COUT << ": " << LF_FORMAT(message __VA_OPT__(, ) __VA_ARGS__) << '\n';                     \
        }                                                                                                    \
      } while (false)
  #else
    #define LF_LOG(head, ...)
  #endif
#endif

/**
 * @brief Concatenation macro
 */
#define LF_CONCAT_OUTER(a, b) LF_CONCAT_INNER(a, b)
/**
 * @brief Internal concatenation macro (use LF_CONCAT_OUTER)
 */
#define LF_CONCAT_INNER(a, b) a##b

/**
 * @brief Depreciate operator() in favor of operator[] if multidimensional subscript is available.
 */
#if defined(__cpp_multidimensional_subscript) && __cpp_multidimensional_subscript >= 202211L
  #define LF_DEPRECATE_CALL [[deprecated("Use operator[] instead of operator()")]]
#else
  #define LF_DEPRECATE_CALL
#endif

/**
 * @brief Expands to ``_Pragma(#x)``.
 */
#define LF_AS_PRAGMA(x) _Pragma(#x)

/**
 * @brief Expands to `#pragma unroll n` or equivalent if the compiler supports it.
 */
#ifdef __clang__
  #define LF_PRAGMA_UNROLL(n) LF_AS_PRAGMA(unroll n)
#elif defined(__GNUC__)
  #define LF_PRAGMA_UNROLL(n) LF_AS_PRAGMA(GCC unroll n)
#else
  #define LF_PRAGMA_UNROLL(n)
#endif

// NOLINTEND

#endif /* C5DCA647_8269_46C2_B76F_5FA68738AEDA */

 // for LF_ASSERT, LF_HOF_RETURNS

/**
 * @file utility.hpp
 *
 * @brief A collection of internal utilities.
 */

/**
 * @brief The ``libfork`` namespace.
 *
 * Everything in ``libfork`` is contained within this namespace.
 */
namespace lf {

/**
 * @brief An inline namespace that wraps core functionality.
 *
 * This is the namespace that contains the minimal user-facing API of ``libfork``, notably
 * this excludes schedulers and algorithms.
 */
inline namespace core {}

/**
 * @brief An inline namespace that wraps extension functionality.
 *
 * This namespace is part of ``libfork``s public API but is intended for advanced users
 * writing schedulers, It exposes the scheduler/context API's alongside some implementation
 * details (such as lock-free dequeues, a `hwloc` abstraction, and synchronization primitives)
 * that could be useful when implementing custom schedulers.
 */
inline namespace ext {}

/**
 * @brief An internal namespace that wraps implementation details.
 *
 * \rst
 *
 * .. warning::
 *
 *    This is exposed as internal documentation only it is not part of the public facing API.
 *
 * \endrst
 */
namespace impl {}

} // namespace lf

namespace lf::impl {

// ---------------- Constants ---------------- //

/**
 * @brief The cache line size (bytes) of the current architecture.
 */
#ifdef __cpp_lib_hardware_interference_size
inline constexpr std::size_t k_cache_line = std::hardware_destructive_interference_size;
#else
inline constexpr std::size_t k_cache_line = 64;
#endif

/**
 * @brief The default alignment of `operator new`, a power of two.
 */
inline constexpr std::size_t k_new_align = __STDCPP_DEFAULT_NEW_ALIGNMENT__;

static_assert(std::has_single_bit(k_new_align));

/**
 * @brief Shorthand for `std::numeric_limits<std::unt32_t>::max()`.
 */
static constexpr std::uint16_t k_u16_max = std::numeric_limits<std::uint16_t>::max();

/**
 * @brief A dependent value to emulate `static_assert(false)` pre c++26.
 */
template <typename...>
inline constexpr bool always_false = false;

// ---------------- Utility classes ---------------- //

/**
 * @brief An empty type.
 */
template <std::size_t = 0>
struct empty_t {};

/**
 * If `Cond` is `true` then `T` otherwise an empty type.
 */
template <bool Cond, typename T, std::size_t N = 0>
using else_empty_t = std::conditional_t<Cond, T, empty_t<N>>;

// -------------------------------- //

/**
 * @brief An empty base class that is not copyable or movable.
 *
 * The template parameter prevents multiple empty bases when inheriting multiple classes.
 */
template <typename CRTP>
struct immovable {
  immovable() = default;

  immovable(const immovable &) = delete;
  immovable(immovable &&) = delete;

  auto operator=(const immovable &) -> immovable & = delete;
  auto operator=(immovable &&) -> immovable & = delete;

  ~immovable() = default;
};

static_assert(std::is_empty_v<immovable<void>>);

// ---------------- Meta programming ---------------- //

/**
 * @brief Check is a type is not ``void``.
 */
template <typename T>
concept non_void = !std::is_void_v<T>;

namespace detail {

template <typename From, typename To>
struct forward_cv : std::type_identity<To> {};

template <typename From, typename To>
struct forward_cv<From const, To> : std::type_identity<To const> {};

template <typename From, typename To>
struct forward_cv<From volatile, To> : std::type_identity<To volatile> {};

template <typename From, typename To>
struct forward_cv<From const volatile, To> : std::type_identity<To const volatile> {};

} // namespace detail

/**
 * @brief Copy the ``const``/``volatile`` qualifiers from ``From`` to ``To``.
 */
template <typename From, typename To>
  requires (!std::is_reference_v<From> && std::same_as<std::remove_cvref_t<To>, To>)
using forward_cv_t = typename detail::forward_cv<From, To>::type;

/**
 * @brief Test if the `T` has no `const`, `volatile` or reference qualifiers.
 */
template <typename T>
concept unqualified = std::same_as<std::remove_cvref_t<T>, T>;

/**
 * @brief True if the unqualified ``T`` and ``U`` refer to different types.
 *
 * This is useful for preventing ''T &&'' constructor/assignment from replacing the defaults.
 */
template <typename T, typename U>
concept different_from = !std::same_as<std::remove_cvref_t<U>, std::remove_cvref_t<T>>;

// ---------------- Small functions ---------------- //

/**
 * @brief Safe integral cast, will terminate if the cast would overflow in debug.
 */
template <std::integral To, std::integral From>
auto checked_cast(From val) noexcept -> To {

  constexpr auto to_min = std::numeric_limits<To>::min();
  constexpr auto to_max = std::numeric_limits<To>::max();

  constexpr auto from_min = std::numeric_limits<From>::min();
  constexpr auto from_max = std::numeric_limits<From>::max();

  /**
   *    [   from    ]
   *     [   to   ]
   */

  if constexpr (std::cmp_greater(to_min, from_min)) {
    LF_ASSERT(val >= static_cast<From>(to_min) && "Underflow");
  }

  if constexpr (std::cmp_less(to_max, from_max)) {
    LF_ASSERT(val <= static_cast<From>(to_max) && "Overflow");
  }

  return static_cast<To>(val);
}

/**
 * @brief Transform `[a, b, c] -> [f(a), f(b), f(c)]`.
 */
template <typename T, typename F>
auto map(std::vector<T> const &from, F &&func) -> std::vector<std::invoke_result_t<F &, T const &>> {

  std::vector<std::invoke_result_t<F &, T const &>> out;

  out.reserve(from.size());

  for (auto &&item : from) {
    out.emplace_back(std::invoke(func, item));
  }

  return out;
}

/**
 * @brief Transform `[a, b, c] -> [f(a), f(b), f(c)]`.
 */
template <typename T, typename F>
auto map(std::vector<T> &&from, F &&func) -> std::vector<std::invoke_result_t<F &, T>> {

  std::vector<std::invoke_result_t<F &, T>> out;

  out.reserve(from.size());

  for (auto &&item : from) {
    out.emplace_back(std::invoke(func, std::move(item)));
  }

  return out;
}

// -------------------------------- //

/**
 * @brief Returns ``ptr`` and asserts it is non-null in debug builds.
 */
template <typename T>
  requires requires (T &&ptr) {
    { ptr == nullptr } -> std::convertible_to<bool>;
  }
constexpr auto
non_null(T &&val, [[maybe_unused]] std::source_location loc = std::source_location::current()) noexcept
    -> T && {
#ifndef NDEBUG
  if (val == nullptr) {
    // NOLINTNEXTLINE
    std::fprintf(stderr,
                 "%s:%u: Null check failed: %s\n",
                 loc.file_name(),
                 checked_cast<unsigned>(loc.line()),
                 loc.function_name());
    std::terminate();
  }
#endif
  return std::forward<T>(val);
}

// -------------------------------- //

/**
 * @brief Cast a pointer to a byte pointer.
 */
template <typename T>
auto byte_cast(T *ptr) LF_HOF_RETURNS(std::bit_cast<forward_cv_t<T, std::byte> *>(ptr))

} // namespace lf::impl

#endif /* DF63D333_F8C0_4BBA_97E1_32A78466B8B7 */

 // for k_cache_line, immovable        // for LF_ASSERT, LF_STATIC_CALL, LF_STATIC_CONST

/**
 * @file deque.hpp
 *
 * @brief A stand-alone, production-quality implementation of the Chase-Lev lock-free
 * single-producer multiple-consumer deque.
 */

/**
 * This is a workaround for clang generating bad codegen for ``std::atomic_thread_fence``.
 */

#if defined(LF_USE_BOOST_ATOMIC) && defined(__clang__) && defined(__has_include)
  #if __has_include(<boost/atomic.hpp>)
    #include <boost/atomic.hpp>

    #define LF_ATOMIC_THREAD_FENCE_SEQ_CST boost::atomic_thread_fence(boost::memory_order_seq_cst)
  #else
    #warning "Boost.Atomic not found, falling back to std::atomic_thread_fence"
    #define LF_ATOMIC_THREAD_FENCE_SEQ_CST std::atomic_thread_fence(std::memory_order_seq_cst)
  #endif
#else
  #define LF_ATOMIC_THREAD_FENCE_SEQ_CST std::atomic_thread_fence(std::memory_order_seq_cst)
#endif

namespace lf {

inline namespace ext {

/**
 * @brief Verify a type is suitable for use with `std::atomic`
 *
 * This requires a `TriviallyCopyable` type satisfying both `CopyConstructible` and `CopyAssignable`.
 */
template <typename T>
concept atomicable = std::is_trivially_copyable_v<T> && //
                     std::is_copy_constructible_v<T> && //
                     std::is_move_constructible_v<T> && //
                     std::is_copy_assignable_v<T> &&    //
                     std::is_move_assignable_v<T>;      //

/**
 * @brief A concept that verifies a type is lock-free when used with `std::atomic`.
 */
template <typename T>
concept lock_free = atomicable<T> && std::atomic<T>::is_always_lock_free;

/**
 * @brief Test is a type is suitable for use with `lf::deque`.
 *
 * This requires it to be `lf::ext::lock_free` and `std::default_initializable`.
 */
template <typename T>
concept dequeable = lock_free<T> && std::default_initializable<T>;

} // namespace ext

namespace impl {

/**
 * @brief A basic wrapper around a c-style array that provides modulo load/stores.
 *
 * This class is designed for internal use only. It provides a c-style API that is
 * used efficiently by deque for low level atomic operations.
 *
 * @tparam T The type of the elements in the array.
 */
template <dequeable T>
struct atomic_ring_buf {
  /**
   * @brief Construct a new ring buff object
   *
   * @param cap The capacity of the buffer, MUST be a power of 2.
   */
  constexpr explicit atomic_ring_buf(std::ptrdiff_t cap) : m_cap{cap}, m_mask{cap - 1} {
    LF_ASSERT(cap > 0 && std::has_single_bit(static_cast<std::size_t>(cap)));
  }
  /**
   * @brief Get the capacity of the buffer.
   */
  [[nodiscard]] constexpr auto capacity() const noexcept -> std::ptrdiff_t { return m_cap; }
  /**
   * @brief Store ``val`` at ``index % this->capacity()``.
   */
  constexpr auto store(std::ptrdiff_t index, T const &val) noexcept -> void {
    LF_ASSERT(index >= 0);
    (m_buf.get() + (index & m_mask))->store(val, std::memory_order_relaxed); // NOLINT Avoid cast.
  }
  /**
   * @brief Load value at ``index % this->capacity()``.
   */
  [[nodiscard]] constexpr auto load(std::ptrdiff_t index) const noexcept -> T {
    LF_ASSERT(index >= 0);
    return (m_buf.get() + (index & m_mask))->load(std::memory_order_relaxed); // NOLINT Avoid cast.
  }
  /**
   * @brief Copies elements in range ``[bottom, top)`` into a new ring buffer.
   *
   * This function allocates a new buffer and returns a pointer to it.
   * The caller is responsible for deallocating the memory.
   *
   * @param bot The bottom of the range to copy from (inclusive).
   * @param top The top of the range to copy from (exclusive).
   */
  [[nodiscard]] constexpr auto resize(std::ptrdiff_t bot, std::ptrdiff_t top) const -> atomic_ring_buf<T> * {

    auto *ptr = new atomic_ring_buf{2 * m_cap}; // NOLINT

    for (std::ptrdiff_t i = top; i != bot; ++i) {
      ptr->store(i, load(i));
    }

    return ptr;
  }

 private:
  /**
   * @brief An array of atomic elements.
   */
  using array_t = std::atomic<T>[]; // NOLINT
  /**
   * @brief Capacity of the buffer.
   */
  std::ptrdiff_t m_cap;
  /**
   * @brief Bit mask to perform modulo capacity operations.
   */
  std::ptrdiff_t m_mask;

#ifdef __cpp_lib_smart_ptr_for_overwrite
  std::unique_ptr<array_t> m_buf = std::make_unique_for_overwrite<array_t>(static_cast<std::size_t>(m_cap));
#else
  std::unique_ptr<array_t> m_buf = std::make_unique<array_t>(static_cast<std::size_t>(m_cap));
#endif
};

} // namespace impl

inline namespace ext {

/**
 * @brief Error codes for ``deque`` 's ``steal()`` operation.
 */
enum class err : int {
  /**
   * @brief The ``steal()`` operation succeeded.
   */
  none = 0,
  /**
   * @brief  Lost the ``steal()`` race hence, the ``steal()`` operation failed.
   */
  lost,
  /**
   * @brief The deque is empty and hence, the ``steal()`` operation failed.
   */
  empty,
};

/**
 * @brief The return type of a `lf::deque` `steal()` operation.
 *
 * This type is suitable for structured bindings. We return a custom type instead of a
 * `std::optional` to allow for more information to be returned as to why a steal may fail.
 */
template <typename T>
struct steal_t {
  /**
   * @brief Check if the operation succeeded.
   */
  [[nodiscard]] constexpr explicit operator bool() const noexcept { return code == err::none; }
  /**
   * @brief Get the value like ``std::optional``.
   *
   * Requires ``code == err::none`` .
   */
  [[nodiscard]] constexpr auto operator*() noexcept -> T & {
    LF_ASSERT(code == err::none);
    return val;
  }
  /**
   * @brief Get the value like ``std::optional``.
   *
   * Requires ``code == err::none`` .
   */
  [[nodiscard]] constexpr auto operator*() const noexcept -> T const & {
    LF_ASSERT(code == err::none);
    return val;
  }
  /**
   * @brief Get the value ``like std::optional``.
   *
   * Requires ``code == err::none`` .
   */
  [[nodiscard]] constexpr auto operator->() noexcept -> T * {
    LF_ASSERT(code == err::none);
    return std::addressof(val);
  }
  /**
   * @brief Get the value ``like std::optional``.
   *
   * Requires ``code == err::none`` .
   */
  [[nodiscard]] constexpr auto operator->() const noexcept -> T const * {
    LF_ASSERT(code == err::none);
    return std::addressof(val);
  }

  /**
   * @brief The error code of the ``steal()`` operation.
   */
  err code;
  /**
   * @brief The value stolen from the deque, Only valid if ``code == err::stolen``.
   */
  T val;
};

/**
 * @brief A functor that returns ``std::nullopt``.
 */
template <typename T>
struct return_nullopt {
  /**
   * @brief Returns ``std::nullopt``.
   */
  LF_STATIC_CALL constexpr auto operator()() LF_STATIC_CONST noexcept -> std::optional<T> { return {}; }
};

/**
 * @brief An unbounded lock-free single-producer multiple-consumer work-stealing deque.
 *
 * \rst
 *
 * Implements the "Chase-Lev" deque described in the papers, `"Dynamic Circular Work-Stealing deque"
 * <https://doi.org/10.1145/1073970.1073974>`_ and `"Correct and Efficient Work-Stealing for Weak
 * Memory Models" <https://doi.org/10.1145/2442516.2442524>`_.
 *
 * Only the deque owner can perform ``pop()`` and ``push()`` operations where the deque behaves
 * like a LIFO stack. Others can (only) ``steal()`` data from the deque, they see a FIFO deque.
 * All threads must have finished using the deque before it is destructed.
 *
 *
 * Example:
 *
 * .. include:: ../../../test/source/core/deque.cpp
 *    :code:
 *    :start-after: // !BEGIN-EXAMPLE
 *    :end-before: // !END-EXAMPLE
 *
 * \endrst
 *
 * @tparam T The type of the elements in the deque.
 */
template <dequeable T>
class deque : impl::immovable<deque<T>> {

  static constexpr std::ptrdiff_t k_default_capacity = 1024;
  static constexpr std::size_t k_garbage_reserve = 64;

 public:
  /**
   * @brief The type of the elements in the deque.
   */
  using value_type = T;
  /**
   * @brief Construct a new empty deque object.
   */
  constexpr deque() : deque(k_default_capacity) {}
  /**
   * @brief Construct a new empty deque object.
   *
   * @param cap The capacity of the deque (must be a power of 2).
   */
  constexpr explicit deque(std::ptrdiff_t cap);
  /**
   * @brief Get the number of elements in the deque.
   */
  [[nodiscard]] constexpr auto size() const noexcept -> std::size_t;
  /**
   * @brief Get the number of elements in the deque as a signed integer.
   */
  [[nodiscard]] constexpr auto ssize() const noexcept -> ptrdiff_t;
  /**
   * @brief Get the capacity of the deque.
   */
  [[nodiscard]] constexpr auto capacity() const noexcept -> ptrdiff_t;
  /**
   * @brief Check if the deque is empty.
   */
  [[nodiscard]] constexpr auto empty() const noexcept -> bool;
  /**
   * @brief Push an item into the deque.
   *
   * Only the owner thread can insert an item into the deque.
   * This operation can trigger the deque to resize if more space is required.
   * This may throw if an allocation is required and then fails.
   *
   * @param val Value to add to the deque.
   */
  constexpr void push(T const &val);
  /**
   * @brief Pop an item from the deque.
   *
   * Only the owner thread can pop out an item from the deque. If the buffer is empty calls `when_empty` and
   * returns the result. By default, `when_empty` is a no-op that returns a null `std::optional<T>`.
   */
  template <std::invocable F = return_nullopt<T>>
    requires std::convertible_to<T, std::invoke_result_t<F>>
  constexpr auto pop(F &&when_empty = {}) noexcept(std::is_nothrow_invocable_v<F>) -> std::invoke_result_t<F>;

  /**
   * @brief Steal an item from the deque.
   *
   * Any threads can try to steal an item from the deque. This operation can fail if the deque is
   * empty or if another thread simultaneously stole an item from the deque.
   */
  [[nodiscard]] constexpr auto steal() noexcept -> steal_t<T>;

  /**
   * @brief Destroy the deque object.
   *
   * All threads must have finished using the deque before it is destructed.
   */
  constexpr ~deque() noexcept;

 private:
  alignas(impl::k_cache_line) std::atomic<std::ptrdiff_t> m_top;
  alignas(impl::k_cache_line) std::atomic<std::ptrdiff_t> m_bottom;
  alignas(impl::k_cache_line) std::atomic<impl::atomic_ring_buf<T> *> m_buf;
  std::vector<std::unique_ptr<impl::atomic_ring_buf<T>>> m_garbage;

  // Convenience aliases.
  static constexpr std::memory_order relaxed = std::memory_order_relaxed;
  static constexpr std::memory_order consume = std::memory_order_consume;
  static constexpr std::memory_order acquire = std::memory_order_acquire;
  static constexpr std::memory_order release = std::memory_order_release;
  static constexpr std::memory_order seq_cst = std::memory_order_seq_cst;
};

template <dequeable T>
constexpr deque<T>::deque(std::ptrdiff_t cap)
    : m_top(0),
      m_bottom(0),
      m_buf(new impl::atomic_ring_buf<T>{cap}) {
  m_garbage.reserve(k_garbage_reserve);
}

template <dequeable T>
constexpr auto deque<T>::size() const noexcept -> std::size_t {
  return static_cast<std::size_t>(ssize());
}

template <dequeable T>
constexpr auto deque<T>::ssize() const noexcept -> std::ptrdiff_t {
  ptrdiff_t const bottom = m_bottom.load(relaxed);
  ptrdiff_t const top = m_top.load(relaxed);
  return std::max(bottom - top, ptrdiff_t{0});
}

template <dequeable T>
constexpr auto deque<T>::capacity() const noexcept -> ptrdiff_t {
  return m_buf.load(relaxed)->capacity();
}

template <dequeable T>
constexpr auto deque<T>::empty() const noexcept -> bool {
  ptrdiff_t const bottom = m_bottom.load(relaxed);
  ptrdiff_t const top = m_top.load(relaxed);
  return top >= bottom;
}

template <dequeable T>
constexpr auto deque<T>::push(T const &val) -> void {
  std::ptrdiff_t const bottom = m_bottom.load(relaxed);
  std::ptrdiff_t const top = m_top.load(acquire);
  impl::atomic_ring_buf<T> *buf = m_buf.load(relaxed);

  if (buf->capacity() < (bottom - top) + 1) {
    // Deque is full, build a new one.
    impl::atomic_ring_buf<T> *bigger = buf->resize(bottom, top);

    [&]() noexcept {
      // This should never throw as we reserve 64 slots.
      m_garbage.emplace_back(std::exchange(buf, bigger));
    }();
    m_buf.store(buf, relaxed);
  }

  // Construct new object, this does not have to be atomic as no one can steal this item until
  // after we store the new value of bottom, ordering is maintained by surrounding atomics.
  buf->store(bottom, val);

  std::atomic_thread_fence(release);
  m_bottom.store(bottom + 1, relaxed);
}

template <dequeable T>
template <std::invocable F>
  requires std::convertible_to<T, std::invoke_result_t<F>>
constexpr auto
deque<T>::pop(F &&when_empty) noexcept(std::is_nothrow_invocable_v<F>) -> std::invoke_result_t<F> {

  std::ptrdiff_t const bottom = m_bottom.load(relaxed) - 1; //
  impl::atomic_ring_buf<T> *buf = m_buf.load(relaxed);      //
  m_bottom.store(bottom, relaxed);                          // Stealers can no longer steal.

  LF_ATOMIC_THREAD_FENCE_SEQ_CST;

  std::ptrdiff_t top = m_top.load(relaxed);

  if (top <= bottom) {
    // Non-empty deque
    if (top == bottom) {
      // The last item could get stolen, by a stealer that loaded bottom before our write above.
      if (!m_top.compare_exchange_strong(top, top + 1, seq_cst, relaxed)) {
        // Failed race, thief got the last item.
        m_bottom.store(bottom + 1, relaxed);
        return std::invoke(std::forward<F>(when_empty));
      }
      m_bottom.store(bottom + 1, relaxed);
    }
    // Can delay load until after acquiring slot as only this thread can push(),
    // This load is not required to be atomic as we are the exclusive writer.
    return buf->load(bottom);
  }
  m_bottom.store(bottom + 1, relaxed);
  return std::invoke(std::forward<F>(when_empty));
}

template <dequeable T>
constexpr auto deque<T>::steal() noexcept -> steal_t<T> {
  std::ptrdiff_t top = m_top.load(acquire);
  LF_ATOMIC_THREAD_FENCE_SEQ_CST;
  std::ptrdiff_t const bottom = m_bottom.load(acquire);

  if (top < bottom) {
    // Must load *before* acquiring the slot as slot may be overwritten immediately after
    // acquiring. This load is NOT required to be atomic even-though it may race with an overwrite
    // as we only return the value if we win the race below guaranteeing we had no race during our
    // read. If we loose the race then 'x' could be corrupt due to read-during-write race but as T
    // is trivially destructible this does not matter.
    T tmp = m_buf.load(consume)->load(top);

    static_assert(std::is_trivially_destructible_v<T>, "concept 'atomicable' should guarantee this already");

    if (!m_top.compare_exchange_strong(top, top + 1, seq_cst, relaxed)) {
      return {.code = err::lost, .val = {}};
    }
    return {.code = err::none, .val = tmp};
  }
  return {.code = err::empty, .val = {}};
}

template <dequeable T>
constexpr deque<T>::~deque() noexcept {
  delete m_buf.load(); // NOLINT
}

} // namespace ext

} // namespace lf

#undef LF_ATOMIC_THREAD_FENCE_SEQ_CST

#endif /* C9703881_3D9C_41A5_A7A2_44615C4CFA6A */

    // for deque, steal_t
#ifndef ACB944D8_08B6_4600_9302_602E847753FD
#define ACB944D8_08B6_4600_9302_602E847753FD

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <type_traits> // for is_standard_layout_v
#include <version>     // for __cpp_lib_is_pointer_interconvertible_base_of

#ifndef BC7496D2_E762_43A4_92A3_F2AD10690569
#define BC7496D2_E762_43A4_92A3_F2AD10690569

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <atomic>     // for atomic, memory_order_consume, memory_order_relaxed
#include <concepts>   // for invocable
#include <functional> // for invoke
 // for immovable        // for LF_ASSERT

/**
 * @file list.hpp
 *
 * @brief Lock-free intrusive list for use when submitting tasks.
 */

namespace lf {

inline namespace ext {

/**
 * @brief A multi-producer, single-consumer intrusive list.
 *
 * This implementation is lock-free, allocates no memory and is optimized for weak memory models.
 */
template <typename T>
class intrusive_list : impl::immovable<intrusive_list<T>> {
 public:
  /**
   * @brief An intruded node in the list.
   */
  class node : impl::immovable<node> {
   public:
    /**
     * @brief Construct a node storing a copy of `data`.
     */
    explicit constexpr node(T const &data) noexcept(std::is_nothrow_copy_constructible_v<T>) : m_data(data) {}

    /**
     * @brief Access the value stored in a node of the list.
     */
    [[nodiscard]] friend constexpr auto unwrap(node *ptr) noexcept -> T & { return non_null(ptr)->m_data; }

    /**
     * @brief Call `func` on each unwrapped node linked in the list.
     *
     * This is a noop if `root` is `nullptr`.
     */
    template <std::invocable<T &> F>
    friend constexpr void for_each_elem(node *root, F &&func) noexcept(std::is_nothrow_invocable_v<F, T &>) {
      while (root) {
        // Have to be very careful here, we can't deference `root` after
        // we've called `func` as `func` could destroy the node so, we have
        // to cache the next pointer before the function call.
        auto next = root->m_next;
        std::invoke(func, root->m_data);
        root = next;
      }
    }

   private:
    friend class intrusive_list;

    [[no_unique_address]] T m_data;
    node *m_next = nullptr;
  };

  /**
   * @brief Push a new node, this can be called concurrently from any number of threads.
   *
   * `new_node` should be an unlinked node e.g. not part of a list.
   */
  constexpr void push(node *new_node) noexcept {

    LF_ASSERT(new_node && new_node->m_next == nullptr);

    node *stale_head = m_head.load(std::memory_order_relaxed);

    for (;;) {
      non_null(new_node)->m_next = stale_head;

      if (m_head.compare_exchange_weak(stale_head, new_node, std::memory_order_release)) {
        return;
      }
    }
  }

  /**
   * @brief Pop all the nodes from the list and return a pointer to the root (`nullptr` if empty).
   *
   * Only the owner (thread) of the list can call this function, this will reverse the direction of the list
   * such that `for_each_elem` will operate if FIFO order.
   */
  constexpr auto try_pop_all() noexcept -> node * {

    node *last = m_head.exchange(nullptr, std::memory_order_consume);
    node *first = nullptr;

    while (last) {
      node *tmp = last;
      last = last->m_next;
      tmp->m_next = first;
      first = tmp;
    }

    return first;
  }

 private:
  std::atomic<node *> m_head = nullptr;
};

} // namespace ext

} // namespace lf

#endif /* BC7496D2_E762_43A4_92A3_F2AD10690569 */

   // for intrusive_list
#ifndef DD6F6C5C_C146_4C02_99B9_7D2D132C0844
#define DD6F6C5C_C146_4C02_99B9_7D2D132C0844

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <atomic>      // for atomic_ref, memory_order, atomic_uint16_t
#include <coroutine>   // for coroutine_handle
#include <cstdint>     // for uint16_t
#include <exception>   // for exception_ptr, operator==, current_exce...
#include <memory>      // for construct_at
#include <semaphore>   // for binary_semaphore
#include <type_traits> // for is_standard_layout_v, is_trivially_dest...
#include <utility>     // for exchange
#include <version>     // for __cpp_lib_atomic_ref

#ifndef B4EE570B_F5CF_42CB_9AF3_7376F45FDACC
#define B4EE570B_F5CF_42CB_9AF3_7376F45FDACC

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <functional>  // for invoke
#include <type_traits> // for is_nothrow_invocable_v, is_nothrow_constructible_v
#include <utility>     // for forward
 // for immovable        // for LF_CONCAT_OUTER, LF_FORCEINLINE

/**
 * @file defer.hpp
 *
 * @brief A Golang-like defer implemented via destructor calls.
 */

namespace lf {

inline namespace core {

/**
 * @brief Basic implementation of a Golang-like defer.
 *
 * \rst
 *
 * Use like:
 *
 * .. code::
 *
 *    auto * ptr = c_api_init();
 *
 *    defer _ = [&ptr] () noexcept {
 *      c_api_clean_up(ptr);
 *    };
 *
 *    // Code that may throw
 *
 * \endrst
 *
 * You can also use the ``LF_DEFER`` macro to create an automatically named defer object.
 *
 */
template <class F>
  requires std::is_nothrow_invocable_v<F>
class [[nodiscard("Defer will execute unless bound to a name!")]] defer : impl::immovable<defer<F>> {
 public:
  /**
   * @brief Construct a new Defer object.
   *
   * @param f Nullary invocable forwarded into object and invoked by destructor.
   */
  constexpr defer(F &&f) noexcept(std::is_nothrow_constructible_v<F, F &&>) : m_f(std::forward<F>(f)) {}

  /**
   * @brief Calls the invocable.
   */
  LF_FORCEINLINE constexpr ~defer() noexcept { std::invoke(std::forward<F>(m_f)); }

 private:
  [[no_unique_address]] F m_f;
};

/**
 * @brief A macro to create an automatically named defer object.
 */
#define LF_DEFER ::lf::defer LF_CONCAT_OUTER(at_exit_, __LINE__) = [&]() noexcept

} // namespace core

} // namespace lf

#endif /* B4EE570B_F5CF_42CB_9AF3_7376F45FDACC */

                // for LF_DEFER
#ifndef F51F8998_9E69_458E_95E1_8592A49FA76C
#define F51F8998_9E69_458E_95E1_8592A49FA76C

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <array>    // for array
#include <concepts> // for constructible_from
#include <cstddef>  // for byte
#include <memory>   // for destroy_at
#include <new>      // for launder, operator new
#include <utility>  // for forward
 // for immovable

/**
 * @file manual_lifetime.hpp
 *
 * @brief A utility class for explicitly managing the lifetime of an object.
 */

namespace lf::impl {

/**
 * @brief Provides storage for a single object of type ``T``.
 *
 * Every instance of manual_lifetime is trivially constructible/destructible.
 */
template <typename T>
class manual_lifetime : immovable<manual_lifetime<T>> {
 public:
  /**
   * @brief Start lifetime of object.
   */
  template <typename... Args>
    requires std::constructible_from<T, Args...>
  auto construct(Args &&...args) noexcept(std::is_nothrow_constructible_v<T, Args...>) -> T * {
    return ::new (static_cast<void *>(m_buf.data())) T(std::forward<Args>(args)...);
  }

  /**
   * @brief Start lifetime of object at assignment.
   */
  template <typename U>
    requires std::constructible_from<T, U>
  void operator=(U &&expr) noexcept(std::is_nothrow_constructible_v<T, U>) {
    this->construct(std::forward<U>(expr));
  }

  /**
   * @brief Destroy the contained object, must have been constructed first.
   *
   * A noop if ``T`` is trivially destructible.
   */
  void destroy() noexcept(std::is_nothrow_destructible_v<T>)
    requires std::is_destructible_v<T>
  {
    if constexpr (!std::is_trivially_destructible_v<T>) {
      std::destroy_at(data());
    }
  }

  /**
   * @brief Get a pointer to the contained object, must have been constructed first.
   */
  [[nodiscard]] auto data() noexcept -> T * { return std::launder(reinterpret_cast<T *>(m_buf.data())); }

  /**
   * @brief Get a pointer to the contained object, must have been constructed first.
   */
  [[nodiscard]] auto data() const noexcept -> T * {
    return std::launder(reinterpret_cast<T const *>(m_buf.data()));
  }

  /**
   * @brief Access the contained object, must have been constructed first.
   */
  [[nodiscard]] auto operator->() noexcept -> T * { return data(); }

  /**
   * @brief Access the contained object, must have been constructed first.
   */
  [[nodiscard]] auto operator->() const noexcept -> T const * { return data(); }

  /**
   * @brief Access the contained object, must have been constructed first.
   */
  [[nodiscard]] auto operator*() & noexcept -> T & { return *data(); }

  /**
   * @brief Access the contained object, must have been constructed first.
   */
  [[nodiscard]] auto operator*() const & noexcept -> T const & { return *data(); }

  /**
   * @brief Access the contained object, must have been constructed first.
   */
  [[nodiscard]] auto operator*() && noexcept -> T && { return std::move(*data()); }

  /**
   * @brief Access the contained object, must have been constructed first.
   */
  [[nodiscard]] auto operator*() const && noexcept -> T const && { return std::move(*data()); }

 private:
  [[no_unique_address]] alignas(T) std::array<std::byte, sizeof(T)> m_buf;
};

} // namespace lf::impl

#endif /* F51F8998_9E69_458E_95E1_8592A49FA76C */

 // for manual_lifetime
#ifndef F7577AB3_0439_404D_9D98_072AB84FBCD0
#define F7577AB3_0439_404D_9D98_072AB84FBCD0

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <algorithm>   // for max
#include <bit>         // for has_single_bit
#include <cstddef>     // for size_t, byte, nullptr_t
#include <cstdlib>     // for free, malloc
#include <new>         // for bad_alloc
#include <type_traits> // for is_trivially_default_constructible_v, is_trivia...
#include <utility>     // for exchange, swap
 // for byte_cast, k_new_align, non_null, immovable        // for LF_ASSERT, LF_LOG, LF_FORCEINLINE, LF_NOINLINE

/**
 * @file stack.hpp
 *
 * @brief Implementation of libfork's geometric segmented stacks.
 */

#ifndef LF_FIBRE_INIT_SIZE
  /**
   * @brief The initial size for a stack (in bytes).
   *
   * All stacklets will be round up to a multiple of the page size.
   */
  #define LF_FIBRE_INIT_SIZE 1
#endif

static_assert(LF_FIBRE_INIT_SIZE > 0, "Stacks must have a positive size");

namespace lf::impl {

/**
 * @brief Round size close to a multiple of the page_size.
 */
[[nodiscard]] inline constexpr auto round_up_to_page_size(std::size_t size) noexcept -> std::size_t {

  // Want calculate req such that:

  // req + malloc_block_est is a multiple of the page size.
  // req > size + stacklet_size

  std::size_t constexpr page_size = 4096;                           // 4 KiB on most systems.
  std::size_t constexpr malloc_meta_data_size = 6 * sizeof(void *); // An (over)estimate.

  static_assert(std::has_single_bit(page_size));

  std::size_t minimum = size + malloc_meta_data_size;
  std::size_t rounded = (minimum + page_size - 1) & ~(page_size - 1);
  std::size_t request = rounded - malloc_meta_data_size;

  LF_ASSERT(minimum <= rounded);
  LF_ASSERT(rounded % page_size == 0);
  LF_ASSERT(request >= size);

  return request;
}

/**
 * @brief A stack is a user-space (geometric) segmented program stack.
 *
 * A stack stores the execution of a DAG from root (which may be a stolen task or true root) to suspend
 * point. A stack is composed of stacklets, each stacklet is a contiguous region of stack space stored in a
 * double-linked list. A stack tracks the top stacklet, the top stacklet contains the last allocation or the
 * stack is empty. The top stacklet may have zero or one cached stacklets "ahead" of it.
 */
class stack {

 public:
  /**
   * @brief A stacklet is a stack fragment that contains a segment of the stack.
   *
   * A chain of stacklets looks like `R <- F1 <- F2 <- F3 <- ... <- Fn` where `R` is the root stacklet.
   *
   * A stacklet is allocated as a contiguous chunk of memory, the first bytes of the chunk contain the
   * stacklet object. Semantically, a stacklet is a dynamically sized object.
   *
   * Each stacklet also contains an exception pointer and atomic flag which stores exceptions thrown by
   * children.
   */
  class alignas(impl::k_new_align) stacklet : impl::immovable<stacklet> {

    friend class stack;

    /**
     * @brief Capacity of the current stacklet's stack.
     */
    [[nodiscard]] auto capacity() const noexcept -> std::size_t {
      LF_ASSERT(m_hi - m_lo >= 0);
      return static_cast<std::size_t>(m_hi - m_lo);
    }
    /**
     * @brief Unused space on the current stacklet's stack.
     */
    [[nodiscard]] auto unused() const noexcept -> std::size_t {
      LF_ASSERT(m_hi - m_sp >= 0);
      return static_cast<std::size_t>(m_hi - m_sp);
    }
    /**
     * @brief Check if stacklet's stack is empty.
     */
    [[nodiscard]] auto empty() const noexcept -> bool { return m_sp == m_lo; }
    /**
     * @brief Check is this stacklet is the top of a stack.
     */
    [[nodiscard]] auto is_top() const noexcept -> bool {
      if (m_next != nullptr) {
        // Accept a single cached stacklet above the top.
        return m_next->empty() && m_next->m_next == nullptr;
      }
      return true;
    }
    /**
     * @brief Set the next stacklet in the chain to 'new_next'.
     *
     * This requires that this is the top stacklet. If there is a cached stacklet ahead of the top stacklet
     * then it will be freed before being replaced with 'new_next'.
     */
    void set_next(stacklet *new_next) noexcept {
      LF_ASSERT(is_top());
      std::free(std::exchange(m_next, new_next)); // NOLINT
    }
    /**
     * @brief Allocate a new stacklet with a stack of size of at least`size` and attach it to the given
     * stacklet chain.
     *
     * Requires that `prev` must be the top stacklet in a chain or `nullptr`. This will round size up to
     */
    [[nodiscard]] LF_NOINLINE static auto next_stacklet(std::size_t size, stacklet *prev) -> stacklet * {

      LF_LOG("allocating a new stacklet");

      LF_ASSERT(prev == nullptr || prev->is_top());

      std::size_t request = impl::round_up_to_page_size(size + sizeof(stacklet));

      LF_ASSERT(request >= sizeof(stacklet) + size);

      stacklet *next = static_cast<stacklet *>(std::malloc(request)); // NOLINT

      if (next == nullptr) {
        LF_THROW(std::bad_alloc());
      }

      if (prev != nullptr) {
        // Set next tidies up other next.
        prev->set_next(next);
      }

      next->m_lo = impl::byte_cast(next) + sizeof(stacklet);
      next->m_sp = next->m_lo;
      next->m_hi = impl::byte_cast(next) + request;

      next->m_prev = prev;
      next->m_next = nullptr;

      return next;
    }

    /**
     * @brief Allocate an initial stacklet.
     */
    [[nodiscard]] static auto next_stacklet() -> stacklet * {
      return stacklet::next_stacklet(LF_FIBRE_INIT_SIZE, nullptr);
    }

    /**
     * @brief This stacklet's stack.
     */
    std::byte *m_lo;
    /**
     * @brief The current position of the stack pointer in the stack.
     */
    std::byte *m_sp;
    /**
     * @brief The one-past-the-end address of the stack.
     */
    std::byte *m_hi;
    /**
     * @brief Doubly linked list (past).
     */
    stacklet *m_prev;
    /**
     * @brief Doubly linked list (future).
     */
    stacklet *m_next;
  };

  // Keep stack aligned.
  static_assert(sizeof(stacklet) >= impl::k_new_align);
  static_assert(sizeof(stacklet) % impl::k_new_align == 0);
  // Stacklet is implicit lifetime type
  static_assert(std::is_trivially_default_constructible_v<stacklet>);
  static_assert(std::is_trivially_destructible_v<stacklet>);

  /**
   * @brief Constructs a stack with a small empty stack.
   */
  stack() : m_fib(stacklet::next_stacklet()) { LF_LOG("Constructing a stack"); }

  /**
   * @brief Construct a new stack object taking ownership of the stack that `frag` is a top-of.
   */
  explicit stack(stacklet *frag) noexcept : m_fib(frag) {
    LF_LOG("Constructing stack from stacklet");
    LF_ASSERT(frag && frag->is_top());
  }

  stack(std::nullptr_t) = delete;

  stack(stack const &) = delete;

  auto operator=(stack const &) -> stack & = delete;

  /**
   * @brief Move-construct from `other` leaves `other` in the empty/default state.
   */
  stack(stack &&other) : stack() { swap(*this, other); }

  /**
   * @brief Swap this and `other`.
   */
  auto operator=(stack &&other) noexcept -> stack & {
    swap(*this, other);
    return *this;
  }

  /**
   * @brief Swap `lhs` with `rhs.
   */
  inline friend void swap(stack &lhs, stack &rhs) noexcept {
    using std::swap;
    swap(lhs.m_fib, rhs.m_fib);
  }

  /**
   * @brief Destroy the stack object.
   */
  ~stack() noexcept {
    LF_ASSERT(m_fib);
    LF_ASSERT(!m_fib->m_prev); // Should only be destructed at the root.
    m_fib->set_next(nullptr);  // Free a cached stacklet.
    std::free(m_fib);          // NOLINT
  }

  /**
   * @brief Test if the stack is empty (has no allocations).
   */
  [[nodiscard]] auto empty() -> bool {
    LF_ASSERT(m_fib && m_fib->is_top());
    return m_fib->empty() && m_fib->m_prev == nullptr;
  }

  /**
   * @brief Release the underlying storage of the current stack and re-initialize this one.
   *
   * A new stack can be constructed from the stacklet to continue the released stack.
   */
  [[nodiscard]] auto release() -> stacklet * {
    LF_LOG("Releasing stack");
    LF_ASSERT(m_fib);
    return std::exchange(m_fib, stacklet::next_stacklet());
  }

  /**
   * @brief Allocate `count` bytes of memory on a stacklet in the bundle.
   *
   * The memory will be aligned to a multiple of `__STDCPP_DEFAULT_NEW_ALIGNMENT__`.
   *
   * Deallocate the memory with `deallocate` in a FILO manor.
   */
  [[nodiscard]] LF_FORCEINLINE auto allocate(std::size_t size) -> void * {
    //
    LF_ASSERT(m_fib && m_fib->is_top());

    // Round up to the next multiple of the alignment.
    std::size_t ext_size = (size + impl::k_new_align - 1) & ~(impl::k_new_align - 1);

    if (m_fib->unused() < ext_size) {
      if (m_fib->m_next != nullptr && m_fib->m_next->capacity() >= ext_size) {
        m_fib = m_fib->m_next;
      } else {
        m_fib = stacklet::next_stacklet(std::max(2 * m_fib->capacity(), ext_size), m_fib);
      }
    }

    LF_ASSERT(m_fib && m_fib->is_top());

    LF_LOG("Allocating {} bytes {}-{}", size, (void *)m_fib->m_sp, (void *)(m_fib->m_sp + ext_size));

    return std::exchange(m_fib->m_sp, m_fib->m_sp + ext_size);
  }

  /**
   * @brief Deallocate `count` bytes of memory from the current stack.
   *
   * This must be called in FILO order with `allocate`.
   */
  LF_FORCEINLINE void deallocate(void *ptr) noexcept {

    LF_ASSERT(m_fib && m_fib->is_top());

    LF_LOG("Deallocating {}", ptr);

    m_fib->m_sp = static_cast<std::byte *>(ptr);

    if (m_fib->empty()) {

      if (m_fib->m_prev != nullptr) {
        // Always free a second order cached stacklet if it exists.
        m_fib->set_next(nullptr);
        // Move to prev stacklet.
        m_fib = m_fib->m_prev;
      }

      LF_ASSERT(m_fib);

      // Guard against over-caching.
      if (m_fib->m_next != nullptr) {
        if (m_fib->m_next->capacity() > 8 * m_fib->capacity()) {
          // Free oversized stacklet.
          m_fib->set_next(nullptr);
        }
      }
    }

    LF_ASSERT(m_fib && m_fib->is_top());
  }

  /**
   * @brief Get the stacklet that the last allocation was on, this is non-null.
   */
  [[nodiscard]] auto top() noexcept -> stacklet * {
    LF_ASSERT(m_fib && m_fib->is_top());
    return non_null(m_fib);
  }

 private:
  /**
   * @brief The allocation stacklet.
   */
  stacklet *m_fib;
};

} // namespace lf::impl

#endif /* F7577AB3_0439_404D_9D98_072AB84FBCD0 */

           // for stack         // for non_null, k_u16_max                // for LF_COMPILER_EXCEPTIONS, LF_ASSERT, LF_F...

/**
 * @file frame.hpp
 *
 * @brief A small bookkeeping struct which is a member of each task's promise.
 */

namespace lf::impl {

/**
 * @brief A small bookkeeping struct which is a member of each task's promise.
 */
class frame {

#if LF_COMPILER_EXCEPTIONS
  /**
   * @brief Maybe an exception pointer.
   */
  manual_lifetime<std::exception_ptr> m_eptr;
#endif

#ifndef LF_COROUTINE_OFFSET
  /**
   * @brief Handle to this coroutine, inferred from `this` if `LF_COROUTINE_OFFSET` is set.
   */
  std::coroutine_handle<> m_this_coro;
#endif
  /**
   * @brief This frames stacklet, needs to be in promise in case allocation elided (as does m_parent).
   */
  stack::stacklet *m_stacklet;

  union {
    /**
     * @brief Non-root tasks store a pointer to their parent.
     */
    frame *m_parent;
    /**
     * @brief Root tasks store a pointer to a semaphore to notify the caller.
     */
    std::binary_semaphore *m_sem;
  };

  /**
   * @brief  Number of children joined (with offset).
   */
  std::atomic_uint16_t m_join = k_u16_max;
  /**
   * @brief Number of times this frame has been stolen.
   */
  std::uint16_t m_steal = 0;

/**
 * @brief Flag to indicate if an exception has been set.
 */
#if LF_COMPILER_EXCEPTIONS
  #ifdef __cpp_lib_atomic_ref
  bool m_except = false;
  #else
  std::atomic_bool m_except = false;
  #endif
#endif

  /**
   * @brief Cold path in `unsafe_rethrow_if_exception` in its own non-inline function.
   */
  [[noreturn]] LF_NOINLINE void rethrow() {
#if LF_COMPILER_EXCEPTIONS

    LF_ASSERT(*m_eptr != nullptr);

    LF_DEFER {
      LF_ASSERT(*m_eptr == nullptr);
      m_eptr.destroy();
  #ifdef __cpp_lib_atomic_ref
      m_except = false;
  #else
      m_except.store(false, std::memory_order_relaxed);
  #endif
    };

    std::rethrow_exception(std::exchange(*m_eptr, nullptr));
#endif
  }

 public:
  /**
   * @brief Construct a frame block.
   *
   * Non-root tasks will need to call ``set_parent(...)``.
   */
#ifndef LF_COROUTINE_OFFSET
  frame(std::coroutine_handle<> coro, stack::stacklet *stacklet) noexcept
      : m_this_coro{coro},
        m_stacklet(non_null(stacklet)) {
    LF_ASSERT(coro);
  }
#else
  frame(std::coroutine_handle<>, stack::stacklet *stacklet) noexcept : m_stacklet(non_null(stacklet)) {}
#endif

  /**
   * @brief Set the pointer to the parent frame.
   */
  void set_parent(frame *parent) noexcept { m_parent = non_null(parent); }

  /**
   * @brief Set a root tasks parent.
   */
  void set_root_sem(std::binary_semaphore *sem) noexcept { m_sem = non_null(sem); }

  /**
   * @brief Set the stacklet object to point at a new stacklet.
   *
   * Returns the previous stacklet.
   */
  auto reset_stacklet(stack::stacklet *stacklet) noexcept -> stack::stacklet * {
    return std::exchange(m_stacklet, non_null(stacklet));
  }

  /**
   * @brief Get a pointer to the parent frame.
   *
   * Only valid if this is not a root frame.
   */
  [[nodiscard]] auto parent() const noexcept -> frame * { return m_parent; }

  /**
   * @brief Get a pointer to the semaphore for this root frame.
   *
   * Only valid if this is not a root frame.
   */
  [[nodiscard]] auto semaphore() const noexcept -> std::binary_semaphore * { return m_sem; }

  /**
   * @brief Get a pointer to the top of the top of the stack-stack this frame was allocated on.
   */
  [[nodiscard]] auto stacklet() const noexcept -> stack::stacklet * { return non_null(m_stacklet); }

  /**
   * @brief Get the coroutine handle for this frames coroutine.
   */
  [[nodiscard]] auto self() noexcept -> std::coroutine_handle<> {
#ifndef LF_COROUTINE_OFFSET
    return m_this_coro;
#else
    return std::coroutine_handle<>::from_address(byte_cast(this) - LF_COROUTINE_OFFSET);
#endif
  }

  /**
   * @brief Perform a `.load(order)` on the atomic join counter.
   */
  [[nodiscard]] auto load_joins(std::memory_order order) const noexcept -> std::uint16_t {
    return m_join.load(order);
  }

  /**
   * @brief Perform a `.fetch_sub(val, order)` on the atomic join counter.
   */
  auto fetch_sub_joins(std::uint16_t val, std::memory_order order) noexcept -> std::uint16_t {
    return m_join.fetch_sub(val, order);
  }

  /**
   * @brief Get the number of times this frame has been stolen.
   */
  [[nodiscard]] auto load_steals() const noexcept -> std::uint16_t { return m_steal; }

  /**
   * @brief Increase the steal counter by one and return the previous value.
   */
  auto fetch_add_steal() noexcept -> std::uint16_t { return m_steal++; }

  /**
   * @brief Reset the join and steal counters, must be outside a fork-join region.
   */
  void reset() noexcept {

    m_steal = 0;

    static_assert(std::is_trivially_destructible_v<decltype(m_join)>);
    // Use construct_at(...) to set non-atomically as we know we are the
    // only thread who can touch this control block until a steal which
    // would provide the required memory synchronization.
    std::construct_at(&m_join, k_u16_max);
  }

  /**
   * @brief Capture the exception currently being thrown.
   *
   * Safe to call concurrently, first exception is saved.
   */
  void capture_exception() noexcept {
#if LF_COMPILER_EXCEPTIONS
  #ifdef __cpp_lib_atomic_ref
    bool prev = std::atomic_ref{m_except}.exchange(true, std::memory_order_acq_rel);
  #else
    bool prev = m_except.exchange(true, std::memory_order_acq_rel);
  #endif

    if (!prev) {
      m_eptr.construct(std::current_exception());
    }
#endif
  }

  /**
   * @brief Test if the exception flag is set.
   *
   * Safe to call concurrently.
   */
  auto atomic_has_exception() const noexcept -> bool {
#if LF_COMPILER_EXCEPTIONS
  #ifdef __cpp_lib_atomic_ref
    return std::atomic_ref{m_except}.load(std::memory_order_acquire);
  #else
    return m_except.load(std::memory_order_acquire);
  #endif
#else
    return false;
#endif
  }

  /**
   * @brief If this contains an exception then it will be rethrown and this this object reset to the OK state.
   *
   * This can __only__ be called when the caller has exclusive ownership over this object.
   */
  LF_FORCEINLINE void unsafe_rethrow_if_exception() {
#if LF_COMPILER_EXCEPTIONS
  #ifdef __cpp_lib_atomic_ref
    if (m_except) {
  #else
    if (m_except.load(std::memory_order_relaxed)) {
  #endif
      rethrow();
    }
#endif
  }

  /**
   * @brief Check if this contains an exception.
   *
   * This can __only__ be called when the caller has exclusive ownership over this object.
   */
  [[nodiscard]] auto unsafe_has_exception() const noexcept -> bool {
#if LF_COMPILER_EXCEPTIONS
  #ifdef __cpp_lib_atomic_ref
    return m_except;
  #else
    return m_except.load(std::memory_order_relaxed);
  #endif
#else
    return false;
#endif
  }
};

static_assert(std::is_standard_layout_v<frame>);

} // namespace lf::impl

#endif /* DD6F6C5C_C146_4C02_99B9_7D2D132C0844 */

 // for frame

/**
 * @file handles.hpp
 *
 * @brief Definitions of `libfork`'s handle types.
 */

namespace lf {

namespace impl {

/**
 * @brief A type safe wrapper around a handle to a coroutine that is at a submission point.
 *
 * \rst
 *
 * .. note::
 *
 *    A pointer to an ``submit_h`` should never be deferenced, only passed to ``lf::ext::resume()``.
 *
 * \endrst
 */
class submit_t : impl::frame {};

/**
 * @brief A linked-list node containing a pointer to a `submit_t`.
 */
using submit_node_t = typename intrusive_list<impl::submit_t *>::node;

static_assert(std::is_standard_layout_v<submit_t>);

#ifdef __cpp_lib_is_pointer_interconvertible
static_assert(std::is_pointer_interconvertible_base_of_v<impl::frame, submit_t>);
#endif

/**
 * @brief A type safe wrapper around a handle to a stealable coroutine.
 *
 * \rst
 *
 * .. note::
 *
 *    A pointer to an ``task_h`` should never be deferenced, only passed to ``lf::ext::resume()``.
 *
 * \endrst
 */
class task_t : impl::frame {};

static_assert(std::is_standard_layout_v<task_t>);

#ifdef __cpp_lib_is_pointer_interconvertible
static_assert(std::is_pointer_interconvertible_base_of_v<impl::frame, task_t>);
#endif

} // namespace impl

inline namespace ext {

/**
 * @brief An alias for a pointer to a `submit_t` wrapped in an intruded list.
 */
using submit_handle = impl::submit_node_t *;

/**
 * @brief An alias for a pointer to a `task_t`.
 */
using task_handle = impl::task_t *;

} // namespace ext

} // namespace lf

#endif /* ACB944D8_08B6_4600_9302_602E847753FD */

  // for task_handle, submit_handle, submit_t     // for intrusive_list // for non_null, immovable        // for LF_ASSERT

/**
 * @file context.hpp
 *
 * @brief Provides the hierarchy of worker thread contexts.
 */

namespace lf {

// ------------------ Context ------------------- //

inline namespace ext {

class context;        // Semi-User facing, (for submitting tasks).
class worker_context; // API for worker threads.

} // namespace ext

namespace impl {

class full_context; // Internal API

} // namespace impl

inline namespace ext {

/**
 * @brief A type-erased function object that takes no arguments.
 */
#ifdef __cpp_lib_move_only_function
using nullary_function_t = std::move_only_function<void()>;
#else
using nullary_function_t = std::function<void()>;
#endif

/**
 * @brief  Context for (extension) schedulers to interact with.
 *
 * Each worker thread stores a context object, this is managed by the library. Internally a context
 * manages the work stealing queue and the submission queue. Submissions to the submission queue
 * trigger a user-supplied notification.
 */
class worker_context : impl::immovable<context> {
 public:
  /**
   * @brief schedule suspended tasks to the context, supports concurrent submission.
   *
   * This will trigger the notification function.
   */
  void schedule(submit_handle jobs) {

    m_submit.push(non_null(jobs));

    // Once we have pushed if this throws we cannot uphold the strong exception guarantee.
    [&]() noexcept {
      m_notify();
    }();
  }

  /**
   * @brief Fetch a linked-list of the submitted tasks, for use __only by the owning worker thread__.
   *
   * If there are no submitted tasks, then returned pointer will be null.
   */
  [[nodiscard]] auto try_pop_all() noexcept -> submit_handle { return m_submit.try_pop_all(); }

  /**
   * @brief Attempt a steal operation from this contexts task deque, supports concurrent stealing.
   */
  [[nodiscard]] auto try_steal() noexcept -> steal_t<task_handle> { return m_tasks.steal(); }

 private:
  friend class impl::full_context;

  /**
   * @brief Construct a context for a worker thread.
   *
   * Notify is a function that may be called concurrently by other workers to signal to the
   * worker owning this context that a task has been submitted to a private queue.
   */
  explicit worker_context(nullary_function_t notify) noexcept : m_notify(std::move(notify)) {
    LF_ASSERT(m_notify);
  }

  /**
   * @brief All non-null.
   */
  deque<task_handle> m_tasks;
  /**
   * @brief All non-null.
   */
  intrusive_list<impl::submit_t *> m_submit;
  /**
   * @brief The user supplied notification function.
   */
  nullary_function_t m_notify;
};

} // namespace ext

namespace impl {

/**
 * @brief Context for internal use, contains full-API for push/pop.
 */
class full_context : public worker_context {
 public:
  /**
   * @brief Construct a new full context object, store a copy of the user provided notification function.
   */
  explicit full_context(nullary_function_t notify) noexcept : worker_context(std::move(notify)) {}

  /**
   * @brief Add a task to the work queue.
   */
  void push(task_handle task) { m_tasks.push(non_null(task)); }

  /**
   * @brief Remove a task from the work queue
   */
  [[nodiscard]] auto pop() noexcept -> task_handle {
    return m_tasks.pop([]() -> task_handle {
      return nullptr;
    });
  }

  /**
   * @brief Test if the work queue is empty.
   */
  [[nodiscard]] auto empty() const noexcept -> bool { return m_tasks.empty(); }
};

} // namespace impl

} // namespace lf

#endif /* D66BBECE_E467_4EB6_B74A_AAA2E7256E02 */

          // for full_context, worker_context, nullary_f... // for manual_lifetime           // for stack                // for LF_CLANG_TLS_NOINLINE, LF_THROW, LF_ASSERT

/**
 * @file tls.hpp
 *
 * @brief The thread local variables used by libfork.
 */

namespace lf {

namespace impl::tls {

/**
 * @brief Set when `impl::tls::thread_stack` is alive.
 */
inline thread_local bool has_stack = false;
/**
 * @brief A workers stack.
 *
 * This is wrapped in an `manual_lifetime` to make it trivially destructible/constructible such that it
 * requires no construction checks to access.
 *
 * TODO: Find out why this is not constinit on MSVC.
 */
#if !defined(_MSC_VER) || defined(__clang__)
constinit
#endif
    inline thread_local manual_lifetime<stack>
        thread_stack = {};
/**
 * @brief Set when `impl::tls::thread_stack` is alive.
 */
constinit inline thread_local bool has_context = false;
/**
 * @brief A workers context.
 *
 * This is wrapped in an `manual_lifetime` to make it trivially destructible/constructible such that it
 * requires no construction checks to access.
 */
#if !defined(_MSC_VER) || defined(__clang__)
constinit
#endif
    inline thread_local manual_lifetime<full_context>
        thread_context = {};

/**
 * @brief Checked access to a workers stack.
 */
[[nodiscard]] LF_CLANG_TLS_NOINLINE inline auto stack() noexcept -> stack * {
  LF_ASSERT(has_stack);
  return thread_stack.data();
}

/**
 * @brief Checked access to a workers context.
 */
[[nodiscard]] LF_CLANG_TLS_NOINLINE inline auto context() noexcept -> full_context * {
  LF_ASSERT(has_context);
  return thread_context.data();
}

} // namespace impl::tls

inline namespace ext {

/**
 * @brief Initialize thread-local variables for a worker.
 *
 * Returns a handle to the library-managed context for the worker, this context is associated exclusively with
 * the thread that called this function.
 *
 * @param notify Called when a task is submitted to a worker, this may be called concurrently.
 *
 * \rst
 *
 * .. warning::
 *    This return value should be cleaned up with ``lf::ext::finalize()``.
 *
 * \endrst
 */
[[nodiscard]] inline LF_CLANG_TLS_NOINLINE auto worker_init(nullary_function_t notify) -> worker_context * {

  LF_LOG("Initializing worker");

  if (impl::tls::has_context && impl::tls::has_stack) {
    LF_THROW(std::runtime_error("Worker already initialized"));
  }

  worker_context *context = impl::tls::thread_context.construct(std::move(notify));

  // clang-format off

  LF_TRY {
    impl::tls::thread_stack.construct();
  } LF_CATCH_ALL {
    impl::tls::thread_context.destroy();
  }

  impl::tls::has_stack = true;
  impl::tls::has_context = true;

  // clang-format on

  return context;
}

/**
 * @brief Clean-up thread-local variable before destructing a worker's context.
 *
 * This must be called by the same worker (thread) which called ``lf::ext::worker_init()``.
 *
 * \rst
 *
 * .. warning::
 *    These must have been initialized with ``worker_init(...)``.
 *
 * \endrst
 */
inline LF_CLANG_TLS_NOINLINE void finalize(worker_context *worker) {

  LF_LOG("Finalizing worker");

  if (worker != impl::tls::thread_context.data()) {
    LF_THROW(std::runtime_error("Finalize called on wrong thread"));
  }

  if (!impl::tls::has_context || !impl::tls::has_stack) {
    LF_THROW(std::runtime_error("Finalize called before initialization or after finalization"));
  }

  impl::tls::thread_context.destroy();
  impl::tls::thread_stack.destroy();

  impl::tls::has_stack = false;
  impl::tls::has_context = false;
}

} // namespace ext

} // namespace lf

#endif /* CF97E524_27A6_4CD9_8967_39F1B1BE97B6 */

      // for stack   // for frame   // for stack // for immovable, k_new_align

/**
 * @file co_alloc.hpp
 *
 * @brief Expert-only utilities to interact with a coroutines stack.
 */

namespace lf {

inline namespace core {

/**
 * @brief Check is a type is suitable for allocation on libfork's stacks.
 *
 * This requires the type to be `std::default_initializable<T>` and have non-new-extended alignment.
 */
template <typename T>
concept co_allocable = std::default_initializable<T> && alignof(T) <= impl::k_new_align;

} // namespace core

namespace impl {

/**
 * @brief An awaitable (in the context of an ``lf::task``) which triggers stack allocation.
 */
template <co_allocable T>
struct [[nodiscard("This object should be co_awaited")]] co_new_t {
  /**
   * @brief The number of elements to allocate.
   */
  std::size_t count;
};

} // namespace impl

inline namespace core {

/**
 * @brief The result of `co_await`ing the result of ``lf::core::co_new``.
 *
 * A raii wrapper around a ``std::span`` pointing to the memory allocated on the stack.
 * This type can be destructured into a ``std::span`` to the allocated memory.
 */
template <co_allocable T>
class stack_allocated : impl::immovable<stack_allocated<T>> {
 public:
  /**
   * @brief Construct a new co allocated object.
   */
  stack_allocated(impl::frame *frame, std::span<T> span) noexcept : m_frame{frame}, m_span{span} {}

  /**
   * @brief Get a span over the allocated memory.
   */
  template <std::size_t I>
    requires (I == 0)
  [[nodiscard]] auto get() noexcept -> std::span<T> {
    return m_span;
  }

  /**
   * @brief Get a span over the allocated memory.
   */
  template <std::size_t I>
    requires (I == 0)
  [[nodiscard]] auto get() const noexcept -> std::span<T const> {
    return m_span;
  }

  /**
   * @brief Destroys objects and releases the memory.
   */
  ~stack_allocated() noexcept {
    std::ranges::destroy(m_span);
    auto *stack = impl::tls::stack();
    stack->deallocate(m_span.data());
    m_frame->reset_stacklet(stack->top());
  }

 private:
  impl::frame *m_frame;
  std::span<T> m_span;
};

} // namespace core

} // namespace lf

#ifndef LF_DOXYGEN_SHOULD_SKIP_THIS

template <lf::co_allocable T>
struct std::tuple_size<lf::stack_allocated<T>> : std::integral_constant<std::size_t, 1> {};

template <lf::co_allocable T>
struct std::tuple_size<lf::stack_allocated<T> const> : std::integral_constant<std::size_t, 1> {};

template <lf::co_allocable T>
struct std::tuple_element<0, lf::stack_allocated<T>> : std::type_identity<std::span<T>> {};

template <lf::co_allocable T>
struct std::tuple_element<0, lf::stack_allocated<T> const> : std::type_identity<std::span<T const>> {};

#endif

namespace lf {

inline namespace core {

/**
 * @brief A function which returns an awaitable which triggers allocation on a worker's stack.
 *
 * Upon ``co_await``ing the result of this function an ``lf::stack_allocated`` object is returned.
 *
 * \rst
 *
 * .. warning::
 *    This must be called __outside__ of a fork-join scope and is an expert only feature!
 *
 * \endrst
 *
 */
template <co_allocable T>
[[nodiscard]] auto co_new(std::size_t count) -> impl::co_new_t<T> {
  return impl::co_new_t<T>{count};
}

} // namespace core

} // namespace lf

#endif /* A951FB73_0FCF_4B7C_A997_42B7E87D21CB */



#ifndef E8D38B49_7170_41BC_90E9_6D6389714304
#define E8D38B49_7170_41BC_90E9_6D6389714304

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <utility> // for forward
#include <version> // for __cpp_multidimensional_subscript

#ifndef DD0B4328_55BD_452B_A4A5_5A4670A6217B
#define DD0B4328_55BD_452B_A4A5_5A4670A6217B

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for invocable, constructible_from, convertible_to
#include <functional>  // for invoke
#include <type_traits> // for invoke_result_t, remove_cvref_t, false_type
#include <utility>     // for forward
  // for worker_context, full_context      // for context   // for frame // for unqualified, different_from        // for LF_COMPILER_EXCEPTIONS, LF_FORCEINLINE
#ifndef A75DC3F0_D0C3_4669_A901_0B22556C873C
#define A75DC3F0_D0C3_4669_A901_0B22556C873C

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <type_traits> // for true_type, false_type


/**
 * @file tag.hpp
 *
 * @brief Libfork's dispatch tags.
 */

namespace lf {

inline namespace core {

/**
 * @brief An enumeration that determines the behavior of a coroutine's promise.
 *
 * You can inspect the first argument of an async function to determine the tag.
 */
enum class tag {
  /**
   * @brief This coroutine is a root task from an ``lf::sync_wait``.
   */
  root,
  /**
   * @brief Non root task from an ``lf::call``, completes synchronously.
   */
  call,
  /**
   * @brief Non root task from an ``lf::fork``, completes asynchronously.
   */
  fork,
};

/**
 * @brief Modifier's for the dispatch tag, these do not effect the child's promise, only the awaitable.
 *
 * See `lf::core::dispatch` for more information and uses, these are low-level and most users should not need
 * to use them. We use a namespace + types rather than an enumeration to allow for type-concepts.
 */
namespace modifier {
/**
 * @brief No modification to the dispatch category.
 */
struct none {};
/**
 * @brief The dispatch is `fork`, reports if the fork completed synchronously.
 */
struct sync {};
/**
 * @brief The dispatch is a `fork` outside a fork-join scope, reports if the fork completed synchronously.
 */
struct sync_outside {};
/**
 * @brief The dispatch is a `call`, the awaitable will throw eagerly.
 */
struct eager_throw {};
/**
 * @brief The dispatch is a `call` outside a fork-join scope, the awaitable will throw eagerly.
 */
struct eager_throw_outside {};

} // namespace modifier

} // namespace core

namespace impl::detail {

template <typename Mod, tag T>
struct valid_modifier_impl : std::false_type {
  static_assert(impl::always_false<Mod>, "Mod is not a valid modifier for tag T!");
};

template <tag T>
struct valid_modifier_impl<modifier::none, T> : std::true_type {};

template <>
struct valid_modifier_impl<modifier::sync, tag::fork> : std::true_type {};

template <>
struct valid_modifier_impl<modifier::sync_outside, tag::fork> : std::true_type {};

// TODO: in theory it is possible to extend eager to fork but you may as well just use sync[_outside]?

template <>
struct valid_modifier_impl<modifier::eager_throw, tag::call> : std::true_type {};

template <>
struct valid_modifier_impl<modifier::eager_throw_outside, tag::call> : std::true_type {};

} // namespace impl::detail

inline namespace core {

/**
 * @brief Test if a type is a valid modifier for a tag.
 */
template <typename T, tag Tag>
concept modifier_for = impl::detail::valid_modifier_impl<T, Tag>::value;

} // namespace core

namespace impl {

/**
 * @brief An enumerator describing a statement's location wrt to a fork-join scope.
 */
enum class region {
  /**
   * @brief Unknown location wrt to a fork-join scope.
   */
  unknown,
  /**
   * @brief Outside a fork-join scope.
   */
  outside,
  /**
   * @brief Inside a fork-join scope
   */
  inside,
  /**
   * @brief First fork statement in a fork-join scope.
   */
  opening_fork,
};

} // namespace impl

} // namespace lf

#endif /* A75DC3F0_D0C3_4669_A901_0B22556C873C */

          // for tag

/**
 * @file first_arg.hpp
 *
 * @brief Machinery for the (library-generated) first argument of async functions.
 */

namespace lf {

inline namespace core {

/**
 * @brief Verify a forwarding reference is storable as a value type after removing `cvref` qualifiers.
 */
template <typename T>
concept storable = std::constructible_from<std::remove_cvref_t<T>, T>;

/**
 * @brief Test if we can form a reference to an instance of type `T`.
 */
template <typename T>
concept referenceable = requires () { typename std::type_identity_t<T &>; };

/**
 * @brief Test if the expression `*std::declval<T&>()` is valid and is `lf::core::referenceable`.
 */
template <typename I>
concept dereferenceable = requires (I val) {
  { *val } -> referenceable;
};

} // namespace core

namespace impl::detail {

/**
 * @brief Test if a type could be a quasi-pointer.
 *
 * @tparam I The unqualified type.
 * @tparam Qual The Qualified version of `I`.
 */
template <typename I, typename Qual>
concept quasi_pointer_impl =                                //
    std::default_initializable<I> &&                        //
    std::movable<I> &&                                      //
    dereferenceable<I> && std::constructible_from<I, Qual>; //

} // namespace impl::detail

inline namespace core {

/**
 * @brief A quasi-pointer if a movable type that can be dereferenced to a `lf::core::referenceable`.
 *
 * A quasi-pointer is assumed to be cheap-to-move like an iterator/legacy-pointer.
 */
template <typename I>
concept quasi_pointer = impl::detail::quasi_pointer_impl<std::remove_cvref_t<I>, I>;

} // namespace core

namespace impl::detail {

/**
 * @brief Test if a type could be an async function object.
 *
 * @tparam F The unqualified type.
 * @tparam Qual The Qualified version of `F`.
 */
template <typename F, typename Qual>
concept async_function_object_impl =             //
    unqualified<F> &&                            // We store the unqualified type.
    (std::is_union_v<F> || std::is_class_v<F>)&& // Only classes/unions can have templated `operator()`.
    std::move_constructible<F> &&                // Must be able to move a value.
    std::copy_constructible<F>;                  // Must be able to copy a value.

} // namespace impl::detail

inline namespace core {

/**
 * @brief A concept that requires a type be a copyable [function
 * object](https://en.cppreference.com/w/cpp/named_req/FunctionObject).
 *
 * An async function object is a function object that returns an `lf::task` when `operator()` is called.
 * with appropriate arguments. The call to `operator()` must create a libfork coroutine. The first argument
 * of an async function must accept a deduced templated-type that satisfies the `lf::core::first_arg` concept.
 * The return type and invocability of an async function must be independent of the first argument except
 * for its tag value.
 *
 * An async function may be copied, its copies must be equivalent to the original and support concurrent
 * invocation from multiple threads. It is assumed that an async function is cheap-to-copy like
 * an iterator/legacy-pointer.
 */
template <typename F>
concept async_function_object =
    storable<F> && impl::detail::async_function_object_impl<std::remove_cvref_t<F>, F>;

/**
 * @brief This describes the public-API of the first argument passed to an async function.
 *
 * An async functions' invocability and return type must be independent of their first argument except for
 * its tag value. A user may query the first argument's static member `tagged` to obtain this value.
 * Additionally, a user may query the first argument's static member function `context()` to obtain a
 * pointer to the current workers context. Finally a user may cache an exception in-flight by calling
 * `.stash_exception()`.
 */
template <typename T>
concept first_arg = impl::unqualified<T> && async_function_object<T> && requires (T arg) {
  { T::tagged } -> std::convertible_to<tag>;
  typename T::async_function;
  requires async_function_object<typename T::async_function>;
  { T::context() } -> std::same_as<worker_context *>;
  { arg.stash_exception() } noexcept;
};

} // namespace core

namespace impl {

/**
 * @brief The type passed as the first argument to async functions.
 *
 * Its functions are:
 *
 * - Act as a y-combinator (expose same invocability as F).
 * - Provide a handle to the coroutine frame for exception handling.
 * - Statically inform the return pointer type.
 * - Statically provide the tag.
 * - Statically provide the calling argument types.
 *
 * Hence, a first argument is also an async function object.
 */
template <quasi_pointer I, tag Tag, async_function_object F, typename... CallArgs>
  requires unqualified<F> && (std::is_reference_v<CallArgs> && ...)
class first_arg_t {
 public:
  /**
   * @brief Tag indicating how the async function was called.
   */
  static constexpr tag tagged = Tag;
  /**
   * @brief The underlying async function type.
   */
  using async_function = F;
  /**
   * @brief Get the current workers context.
   */
  [[nodiscard]] static auto context() -> worker_context * { return tls::context(); }
  /**
   * @brief Stash an exception that will be rethrown at the end of the next join.
   */
  void stash_exception() const noexcept {
#if LF_COMPILER_EXCEPTIONS
    m_frame->capture_exception();
#endif
  }

  /**
   * @brief Construct a first_arg_t from an async function object.
   */
  template <different_from<first_arg_t> T = F>
    requires std::constructible_from<F, T>
  explicit first_arg_t(T &&expr) noexcept(std::is_nothrow_constructible_v<F, T>)
      : m_fun(std::forward<T>(expr)) {}

  /**
   * @brief Forward call to the underlying async function object.
   */
  template <typename... Args>
    requires std::invocable<F &, Args...>
  auto operator()(Args &&...args) & noexcept(std::is_nothrow_invocable_v<F &, Args...>)
      -> std::invoke_result_t<F &, Args...> {
    return std::invoke(m_fun, std::forward<Args>(args)...);
  }

  /**
   * @brief Forward call to the underlying async function object.
   */
  template <typename... Args>
    requires std::invocable<F const &, Args...>
  auto operator()(Args &&...args) const & noexcept(std::is_nothrow_invocable_v<F &, Args...>)
      -> std::invoke_result_t<F const &, Args...> {
    return std::invoke(m_fun, std::forward<Args>(args)...);
  }

  /**
   * @brief Forward call to the underlying async function object.
   */
  template <typename... Args>
    requires std::invocable<F &&, Args...>
  auto operator()(Args &&...args) && noexcept(std::is_nothrow_invocable_v<F &, Args...>)
      -> std::invoke_result_t<F &&, Args...> {
    return std::invoke(std::move(m_fun), std::forward<Args>(args)...);
  }

  /**
   * @brief Forward call to the underlying async function object.
   */
  template <typename... Args>
    requires std::invocable<F const &&, Args...>
  auto operator()(Args &&...args) const && noexcept(std::is_nothrow_invocable_v<F &, Args...>)
      -> std::invoke_result_t<F const &&, Args...> {
    return std::invoke(std::move(m_fun), std::forward<Args>(args)...);
  }

 private:
  /**
   * @brief Hidden friend reduces discoverability, this is an implementation detail.
   */
  [[nodiscard]] friend auto unwrap(first_arg_t const &arg) noexcept -> F const & {
    return std::move(arg.m_fun);
  }

  /**
   * @brief Hidden friend reduces discoverability, this is an implementation detail.
   */
  [[nodiscard]] friend auto unwrap(first_arg_t &&arg) noexcept -> F && { return std::move(arg.m_fun); }

  /**
   * @brief Hidden friend reduces discoverability, this is an implementation detail.
   */
  LF_FORCEINLINE friend auto unsafe_set_frame(first_arg_t const &arg, frame *frame) noexcept {
#if LF_COMPILER_EXCEPTIONS
    // Const cast is ok here, a user may want to declare the first argument as `auto const arg` but we
    // still need to set the frame pointer before the user can touch the then-const object.
    const_cast<first_arg_t &>(arg).m_frame = frame;
#endif
  }

  /**
   * @brief The stored async function object.
   */
  [[no_unique_address]] F m_fun;

#if LF_COMPILER_EXCEPTIONS
  /**
   * @brief To allow access to the frame for exception handling.
   */
  frame *m_frame;
#endif
};

namespace detail {

template <typename T>
struct is_first_arg_specialization : std::false_type {};

template <tag Tag, quasi_pointer I, async_function_object F, typename... CallArgs>
struct is_first_arg_specialization<first_arg_t<I, Tag, F, CallArgs...>> : std::true_type {};

} // namespace detail

template <typename T>
concept first_arg_specialization = detail::is_first_arg_specialization<std::remove_cvref_t<T>>::value;

} // namespace impl

} // namespace lf

#endif /* DD0B4328_55BD_452B_A4A5_5A4670A6217B */

      // for async_function_object, quasi_pointer
#ifndef AD9A2908_3043_4CEC_9A2A_A57DE168DF19
#define AD9A2908_3043_4CEC_9A2A_A57DE168DF19

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for same_as
#include <type_traits> // for remove_cvref_t
#include <utility>     // for forward, as_const
         // for async_function_object, quasi_pointer, firs...
#ifndef A7699F23_E799_46AB_B1E0_7EA36053AD41
#define A7699F23_E799_46AB_B1E0_7EA36053AD41

#include <coroutine> // for coroutine_handle
#include <memory>    // for unique_ptr
   // for frame // for non_null        // for LF_STATIC_CALL

/**
 * @file unique_frame.hpp
 *
 * @brief A unique pointer that owns a coroutine frame.
 */

namespace lf::impl {

namespace detail {

struct frame_deleter {
  LF_STATIC_CALL void operator()(frame *frame) noexcept { non_null(frame)->self().destroy(); }
};

} // namespace detail

/**
 * @brief A unique pointer (with a custom deleter) that owns a coroutine frame.
 */
using unique_frame = std::unique_ptr<frame, detail::frame_deleter>;

} // namespace lf::impl

#endif /* A7699F23_E799_46AB_B1E0_7EA36053AD41 */

 // for unique_frame      // for unqualified, immovable
#ifndef A5349E86_5BAA_48EF_94E9_F0EBF630DE04
#define A5349E86_5BAA_48EF_94E9_F0EBF630DE04

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for invocable, same_as
#include <iterator>    // for indirectly_writable
#include <type_traits> // for remove_cvref_t, true_type, type_identity, invoke_...

#ifndef B7972761_4CBF_4B86_B195_F754295372BF
#define B7972761_4CBF_4B86_B195_F754295372BF

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for constructible_from
#include <exception>   // for exception_ptr, current_exception
#include <memory>      // for destroy_at, construct_at
#include <type_traits> // for add_lvalue_reference_t, add_pointer_t, type_id...
#include <utility>     // for addressof, forward

#ifndef C258EF4A_BC44_487A_96BC_6E72746DAAFD
#define C258EF4A_BC44_487A_96BC_6E72746DAAFD

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for same_as
#include <type_traits> // for true_type, false_type
 // for referenceable

/**
 * @file safe_ref.hpp
 *
 * @brief A meta-function that verifies that a reference binding is safe.
 */

namespace lf::impl {

// Ban constructs like (T && -> T const &) which would dangle.

namespace detail {

template <typename To, typename From>
struct safe_ref_bind_impl : std::false_type {};

// All reference types can bind to a non-dangling reference of the same kind without dangling.

template <typename T>
struct safe_ref_bind_impl<T, T> : std::true_type {};

// `T const X` can additionally bind to `T X` without dangling//

template <typename To, typename From>
  requires (!std::same_as<To const &, From &>)
struct safe_ref_bind_impl<To const &, From &> : std::true_type {};

template <typename To, typename From>
  requires (!std::same_as<To const &&, From &&>)
struct safe_ref_bind_impl<To const &&, From &&> : std::true_type {};

} // namespace detail

/**
 * @brief Verify that ``To expr = From`` is valid and does not dangle.
 *
 * This requires that ``To`` and ``From`` are both the same reference type or that ``To`` is a
 * const qualified version of ``From``. This explicitly bans conversions like ``T && -> T const &``
 * which would dangle.
 */
template <typename From, typename To>
concept safe_ref_bind_to =                          //
    std::is_reference_v<To> &&                      //
    referenceable<From> &&                          //
    detail::safe_ref_bind_impl<To, From &&>::value; //

} // namespace lf::impl

#endif /* C258EF4A_BC44_487A_96BC_6E72746DAAFD */

 // for safe_ref_bind_to  // for empty_t, else_empty_t, immovable, non_void         // for LF_ASSERT, unreachable, LF_COMPILER_EXCEPTIONS
#ifndef AB8DC4EC_1EB3_4FFB_9A05_4D8A99CFF172
#define AB8DC4EC_1EB3_4FFB_9A05_4D8A99CFF172

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for movable
#include <type_traits> // for type_identity
 // for unique_frame      // for immovable             // for LF_CORO_ATTRIBUTES

/**
 * @file task.hpp
 *
 * @brief Implementation of the core ``lf::task`` type.
 */

namespace lf {

inline namespace core {

// --------------------------------- Task --------------------------------- //

/**
 * @brief A type returnable from libfork's async functions/coroutines.
 *
 * This requires that `T` is `void` a reference or a `std::movable` type.
 */
template <typename T>
concept returnable = std::is_void_v<T> || std::is_reference_v<T> || std::movable<T>;

/**
 * @brief The return type for libfork's async functions/coroutines.
 *
 * This predominantly exists to disambiguate `libfork`s coroutines from other coroutines and specify `T` the
 * async function's return type which is required to be `void`, a reference, or a `std::movable` type.
 *
 * \rst
 *
 * .. note::
 *
 *    No consumer of this library should ever touch an instance of this type, it is used for specifying the
 *    return type of an `async` function only.
 *
 * .. warning::
 *    The value type ``T`` of a coroutine should be independent of the coroutines first-argument.
 *
 * \endrst
 */
template <returnable T = void>
struct LF_CORO_ATTRIBUTES task : std::type_identity<T>, impl::unique_frame {};

} // namespace core

} // namespace lf

#endif /* AB8DC4EC_1EB3_4FFB_9A05_4D8A99CFF172 */

          // for returnable

/**
 * @file eventually.hpp
 *
 * @brief Classes for delaying construction of an object.
 */

namespace lf {

namespace impl {

namespace detail {

/**
 * @brief Base case -> T
 */
template <returnable T>
struct eventually_value : std::type_identity<T> {};

/**
 * @brief void specialization -> empty
 */
template <>
struct eventually_value<void> : std::type_identity<empty_t<0>> {};

/**
 * @brief Reference specialization -> remove_reference<T> *
 */
template <returnable T>
  requires std::is_reference_v<T>
struct eventually_value<T> : std::add_pointer<T> {};

} // namespace detail

/**
 * @brief Return the appropriate type to store in an eventually.
 *
 * If `T` is `void` then we store an empty object.
 * If `T` is a reference then we store a pointer to the referenced type.
 * Otherwise we store the type directly.
 */
template <returnable T>
using eventually_value_t = typename detail::eventually_value<T>::type;

} // namespace impl

inline namespace core {

// ------------------------------------------------------------------------ //

/**
 * @brief A wrapper to delay construction of an object.
 *
 * An eventually is either empty, contains an object of type `T` or, (if `Exception` is true) contains an
 * exception. Assignment to an empty eventually will construct an object of type `T` inside the eventually.
 */
template <returnable T, bool Exception>
  requires impl::non_void<T> || Exception
class basic_eventually : impl::immovable<basic_eventually<T, Exception>> {

  /**
   *         | void                 | ref                        | val
   * eptr    | empty or exception * | ref or empty or exception  | val or empty or exception
   * no eptr | invalid              | ref or empty *             | val or empty
   *
   *
   * If two-states (*) then we can omit the state member.
   */

  static constexpr bool is_void = std::is_void_v<T>;
  static constexpr bool is_ref_value = !is_void && std::is_reference_v<T>;
  static constexpr bool is_val_value = !is_void && !std::is_reference_v<T>;

  /**
   * @brief If implicit_state is true then we store state bit in exception_ptr or reference ptr.
   */
  static constexpr bool implicit_state = (is_ref_value && !Exception) || (is_void && Exception);

  enum class state : char {
    /**
     * @brief No object has been constructed.
     */
    empty,
    /**
     * @brief An object has been constructed.
     */
    value,
    /**
     * @brief An exception has been thrown during and is stored.
     */
    exception,
  };

  union {
    impl::eventually_value_t<T> m_value;                           //
    impl::empty_t<> m_empty;                                       //
    impl::else_empty_t<Exception, std::exception_ptr> m_exception; //
  };

  // This empty type needs to be different from the empty types in the union
  // to allow [[no_unique_address]] to work, hence the 1.
  [[no_unique_address]] impl::else_empty_t<!implicit_state, state, 1> m_flag;

  // ----------------------- Hidden friends ----------------------- //

  /**
   * @brief Store the current exception, ``dest.empty()`` must be true.
   *
   * After this function is called, ``has_exception()`` will be true.
   */
  friend auto stash_exception(basic_eventually &dest) noexcept -> void
    requires Exception
  {
    LF_ASSERT(dest.empty());

    std::construct_at(std::addressof(dest.m_exception), std::current_exception());

    if constexpr (!implicit_state) {
      dest.m_flag = state::exception;
    }
  }

 public:
  // ------------------------- Helper ------------------------- //

  /**
   * @brief The type of the object stored in the eventually.
   */
  using value_type = T;

  // ------------------------ Construct ------------------------ //

  /**
   * @brief Construct an empty eventually.
   */
  basic_eventually() noexcept
    requires (implicit_state && Exception)
      : m_exception{nullptr} {}

  /**
   * @brief Construct an empty eventually.
   */
  basic_eventually() noexcept
    requires (implicit_state && !Exception)
      : m_value{nullptr} {}

  /**
   * @brief Construct an empty eventually.
   */
  basic_eventually() noexcept
    requires (!implicit_state)
      : m_empty{},
        m_flag{state::empty} {}

  // ------------------------ Destruct ------------------------ //

  /**
   * @brief Destroy the eventually object and the contained object.
   */
  ~basic_eventually() noexcept {
    if constexpr (implicit_state) {
      if constexpr (Exception) {
        std::destroy_at(std::addressof(m_exception));
      } else {
        // T* is trivially destructible.
      }
    } else {
      switch (m_flag) {
        case state::empty:
          return;
        case state::value:
          if constexpr (!is_void) {
            std::destroy_at(std::addressof(m_value));
            return;
          } else {
            lf::impl::unreachable();
          }
        case state::exception:
          if constexpr (Exception) {
            std::destroy_at(std::addressof(m_exception));
            return;
          } else {
            lf::impl::unreachable();
          }
        default:
          lf::impl::unreachable();
      }
    }
  }
  // ----------------------- Check state ----------------------- //

  /**
   * @brief Check if the eventually is empty.
   */
  [[nodiscard]] auto empty() const noexcept -> bool {
    if constexpr (implicit_state) {
      if constexpr (Exception) {
        return m_exception == nullptr;
      } else {
        return m_value == nullptr;
      }
    } else {
      return m_flag == state::empty;
    }
  }

  /**
   * @brief Check if there is a value stored in the eventually.
   */
  [[nodiscard]] auto has_value() const noexcept -> bool
    requires (is_val_value || is_ref_value)
  {
    if constexpr (implicit_state) {
      return m_value != nullptr;
    } else {
      return m_flag == state::value;
    }
  }

  /**
   * @brief Test is there is an exception stored in the eventually.
   */
  [[nodiscard]] auto has_exception() const noexcept -> bool
    requires Exception
  {
#if LF_COMPILER_EXCEPTIONS
    if constexpr (implicit_state) {
      return m_exception != nullptr;
    } else {
      return m_flag == state::exception;
    }

#else
    return false;
#endif
  }

  // ------------------------ Assignment ------------------------ //

  /**
   * @brief Store a value in the eventually, requires that ``empty()`` is true.
   *
   * After this function is called, ``has_value()`` will be true.
   */
  template <typename U>
    requires (is_val_value && std::constructible_from<T, U>)
  auto operator=(U &&expr) noexcept(std::is_nothrow_constructible_v<T, U>) -> basic_eventually & {
    LF_ASSERT(empty());
    std::construct_at(std::addressof(m_value), std::forward<U>(expr));
    m_flag = state::value;
    return *this;
  }

  // -----------

  /**
   * @brief Store a value in the eventually, requires that ``empty()`` is true.
   *
   * After this function is called, ``has_value()`` will be true.
   */
  template <impl::safe_ref_bind_to<T> U>
    requires (is_ref_value)
  auto operator=(U &&expr) noexcept -> basic_eventually & {

    LF_ASSERT(empty());
    m_value = std::addressof(expr);

    if constexpr (!implicit_state) {
      m_flag = state::value;
    }

    return *this;
  }

  // -------------------- Exception handling -------------------- //

  /**
   * @brief Access the stored exception, ``has_exception()`` must be true.
   */
  [[nodiscard]] auto exception() & noexcept -> std::exception_ptr &
    requires Exception
  {
    LF_ASSERT(has_exception());
    return m_exception;
  }

  /**
   * @brief Access the stored exception, ``has_exception()`` must be true.
   */
  [[nodiscard]] auto exception() const & noexcept -> std::exception_ptr const &
    requires Exception
  {
    LF_ASSERT(has_exception());
    return m_exception;
  }

  /**
   * @brief Access the stored exception, ``has_exception()`` must be true.
   */
  [[nodiscard]] auto exception() && noexcept -> std::exception_ptr &&
    requires Exception
  {
    LF_ASSERT(has_exception());
    return std::move(m_exception);
  }

  /**
   * @brief Access the stored exception, ``has_exception()`` must be true.
   */
  [[nodiscard]] auto exception() const && noexcept -> std::exception_ptr const &&
    requires Exception
  {
    LF_ASSERT(has_exception());
    return std::move(m_exception);
  }

  // ------------------------ Operator -> ------------------------ //

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   */
  [[nodiscard]] auto operator->() noexcept -> std::add_pointer_t<T>
    requires is_val_value
  {
    LF_ASSERT(has_value());
    return std::addressof(m_value);
  }

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   */
  [[nodiscard]] auto operator->() const noexcept -> std::add_pointer_t<T const>
    requires is_val_value
  {
    LF_ASSERT(has_value());
    return std::addressof(m_value);
  }

  // -----------

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   */
  [[nodiscard]] auto operator->() const noexcept -> std::add_pointer_t<T>
    requires is_ref_value
  {
    LF_ASSERT(has_value());
    return m_value;
  }

  // ------------------------ Operator * ------------------------ //

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   */
  [[nodiscard]] auto operator*() & noexcept -> std::add_lvalue_reference_t<T>
    requires is_val_value
  {
    LF_ASSERT(has_value());
    return m_value;
  }

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   */
  [[nodiscard]] auto operator*() const & noexcept -> std::add_lvalue_reference_t<T const>
    requires is_val_value
  {
    LF_ASSERT(has_value());
    return m_value;
  }

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   */
  [[nodiscard]] auto operator*() && noexcept -> std::add_rvalue_reference_t<T>
    requires is_val_value
  {
    LF_ASSERT(has_value());
    return std::move(m_value);
  }

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   */
  [[nodiscard]] auto operator*() const && noexcept -> std::add_rvalue_reference_t<T const>
    requires is_val_value
  {
    LF_ASSERT(has_value());
    return std::move(m_value);
  }

  // -----------

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   *
   * This will decay `T&&` to `T&` just like using a `T &&` reference would.
   */
  [[nodiscard]] auto operator*() const & noexcept -> std::add_lvalue_reference_t<std::remove_reference_t<T>>
    requires is_ref_value
  {
    LF_ASSERT(has_value());
    return *m_value;
  }

  /**
   * @brief Access the stored value, ``has_value()`` must be true.
   *
   * This will not decay T&& to T&, nor will it promote T& to T&&.
   */
  [[nodiscard]] auto operator*() const && noexcept -> T
    requires is_ref_value
  {

    LF_ASSERT(has_value());

    if constexpr (std::is_rvalue_reference_v<T>) {
      return std::move(*m_value);
    } else {
      return *m_value;
    }
  }
};

/**
 * @brief An alias for `lf::core::basic_eventually<T, false>`.
 */
template <returnable T>
using eventually = basic_eventually<T, false>;

/**
 * @brief An alias for `lf::core::basic_eventually<T, true>`.
 */
template <returnable T>
using try_eventually = basic_eventually<T, true>;

} // namespace core

} // namespace lf

#endif /* B7972761_4CBF_4B86_B195_F754295372BF */

 // for basic_eventually
#ifndef A090B92E_A266_42C9_BFB0_10681B6BD425
#define A090B92E_A266_42C9_BFB0_10681B6BD425

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <exception> // for exception
 // for quasi_pointer

/**
 * @file exceptions.hpp
 *
 * @brief Interface for individual exception handling.
 */

namespace lf {

inline namespace core {

/**
 * @brief A concept that checks if a quasi-pointer can be used to stash an exception.
 *
 * If the expression `stash_exception(*ptr)` is well-formed and `noexcept` and `ptr` is
 * used as the return address of an async function, then if that function terminates
 * with an exception, the exception will be stored in the quasi-pointer via a call to
 * `stash_exception`.
 */
template <typename I>
concept stash_exception_in_return = quasi_pointer<I> && requires (I ptr) {
  { stash_exception(*ptr) } noexcept;
};

/**
 * @brief Thrown when a parent knows a child threw an exception but before a join point has been reached.
 *
 * This exception __must__ be caught and then __join must be called__, which will rethrow the child's
 * exception.
 */
struct exception_before_join : std::exception {
  /**
   * @brief A diagnostic message.
   */
  auto what() const noexcept -> char const * override { return "A child threw an exception!"; }
};

} // namespace core

} // namespace lf

#endif /* A090B92E_A266_42C9_BFB0_10681B6BD425 */

 // for stash_exception_in_return  // for first_arg_t, quasi_pointer, async_function_object        // for tag       // for task, returnable

/**
 * @file invocable.hpp
 *
 * @brief A collection concepts that extend ``std::invocable`` to async functions.
 */

namespace lf {

namespace impl {

/**
 * @brief A type which can be assigned any value as a noop.
 *
 * Useful to ignore a value tagged with ``[[no_discard]]``.
 */
struct ignore_t {
  /**
   * @brief A no-op assignment operator.
   */
  constexpr auto operator=(auto const & /* unused */) const noexcept -> ignore_t const & { return *this; }
};

/**
 * @brief A tag type to indicate an async function's return value will be discarded by the caller.
 *
 * This type is indirectly writable from any value.
 */
struct discard_t {
  /**
   * @brief Return a proxy object that can be assigned any value.
   */
  constexpr auto operator*() -> ignore_t { return {}; }
};

// ------------ Bare-bones inconsistent invocable ------------ //

namespace detail {

// Base case: invalid
template <typename I, typename Task>
struct valid_return : std::false_type {};

// Special case: discard_t is valid for void
template <>
struct valid_return<discard_t, task<void>> : std::true_type {};

// Special case: stash_exception_in_return + void
template <stash_exception_in_return I>
struct valid_return<I, task<void>> : std::true_type {};

// Anything indirectly_writable
template <returnable R, std::indirectly_writable<R> I>
struct valid_return<I, task<R>> : std::true_type {};

} // namespace detail

/**
 * @brief Verify that `Task` is an lf::task and that the result can be returned by `I`.
 *
 * This requires that `I` is `std::indirectly_writable` or that `I` is `discard_t` and the task returns void.
 */
template <typename I, typename Task>
inline constexpr bool valid_return_v = quasi_pointer<I> && detail::valid_return<I, Task>::value;

/**
 * @brief Verify that `R` returned via `I`.
 *
 * This requires that `I` is `std::indirectly_writable` or that `I` is `discard_t` and the `R` is void.
 */
template <typename I, typename R>
concept return_address_for = quasi_pointer<I> && returnable<R> && valid_return_v<I, task<R>>;

/**
 * @brief Verify `F` is async `Tag` invocable with `Args...` and returns a task who's result type is
 * returnable via I.
 */
template <typename I, tag Tag, typename F, typename... Args>
concept async_invocable_to_task =
    quasi_pointer<I> &&                                                                             //
    async_function_object<F> &&                                                                     //
    std::invocable<std::remove_cvref_t<F> &&,                                                       //
                   impl::first_arg_t<I, Tag, std::remove_cvref_t<F>, Args &&...>,                   //
                   Args...> &&                                                                      //
    valid_return_v<                                                                                 //
        I,                                                                                          //
        std::invoke_result_t<std::remove_cvref_t<F> &&,                                             //
                             impl::first_arg_t<discard_t, Tag, std::remove_cvref_t<F>, Args &&...>, //
                             Args...>>;                                                             //

/**
 * @brief Fetch the underlying result type of an async invocation.
 *
 * Unsafe in the sense that it does not check that F is `async_tag_invocable`.
 */
template <typename I, tag Tag, typename F, typename... Args>
  requires async_invocable_to_task<I, Tag, F, Args...>
struct unsafe_result {
  /**
   * @brief Let `F(Args...) -> task<R>` then this is 'R'.
   */
  using type = typename std::invoke_result_t<                        //
      std::remove_cvref_t<F> &&,                                     //
      impl::first_arg_t<I, Tag, std::remove_cvref_t<F>, Args &&...>, //
      Args...                                                        //
      >::type;
};

/**
 * @brief Let `F(Args...) -> task<R>` then this returns 'R'.
 *
 * Unsafe in the sense that it does not check that F is `async_tag_invocable`.
 */
template <typename I, tag Tag, typename F, typename... Args>
  requires async_invocable_to_task<I, Tag, F, Args...>
using unsafe_result_t = typename unsafe_result<I, Tag, F, Args...>::type;

// --------------------- //

/**
 * @brief Check that F can be 'Tag'-invoked to produce `task<R>`.
 */
template <typename R, typename I, tag T, typename F, typename... Args>
concept return_exactly =                                //
    async_invocable_to_task<I, T, F, Args...> &&        //
    std::same_as<R, unsafe_result_t<I, T, F, Args...>>; //

/**
 * @brief Check that `F` can be `T`-invoked and called with `Args...`.
 */
template <typename R, typename I, tag T, typename F, typename... Args>
concept call_consistent =                        //
    return_exactly<R, I, T, F, Args...> &&       //
    return_exactly<R, I, tag::call, F, Args...>; //

namespace detail {

template <typename R, bool Exception>
struct as_eventually : std::type_identity<basic_eventually<R, Exception> *> {};

template <>
struct as_eventually<void, false> : std::type_identity<discard_t> {};

} // namespace detail

/**
 * @brief Wrap R in an basic_eventually if it is not void.
 */
template <typename R, bool Exception>
using as_eventually_t = typename detail::as_eventually<R, Exception>::type;

/**
 * @brief Check that `Tag`-invoking and calling `F` with `Args...` produces task<R>.
 *
 * This also checks the results is consistent when it is discarded and returned
 * by `basic_eventually<...> *`.
 */
template <typename R, typename I, tag T, typename F, typename... Args>
concept self_consistent =                                          //
    call_consistent<R, I, T, F, Args...> &&                        //
    call_consistent<R, discard_t, T, F, Args...> &&                //
    call_consistent<R, as_eventually_t<R, true>, T, F, Args...> && //
    call_consistent<R, as_eventually_t<R, false>, T, F, Args...>;  //

// --------------------- //

/**
 * @brief Check `F` is async invocable to a task with `I`,` discard_t` and the appropriate `eventually`s.
 */
template <typename I, tag Tag, typename F, typename... Args>
concept consistent_invocable =                                                //
    async_invocable_to_task<I, Tag, F, Args...> &&                            //
    self_consistent<unsafe_result_t<I, Tag, F, Args...>, I, Tag, F, Args...>; //

// --------------------- //

} // namespace impl

inline namespace core {

/**
 * @brief Check `F` is `Tag`-invocable with `Args...` and returns an `lf::task` who's result is returnable via
 * `I`.
 *
 * In the following description "invoking" or "async invoking" means to call `F` with `Args...` via the
 * appropriate libfork function i.e. `fork` corresponds to `lf::fork[r, f](args...)` and the library will
 * generate the appropriate (opaque) first-argument.
 *
 * This requires:
 *  - `F` is an async function object.
 *  - `F` is 'Tag'/call invocable with `Args...` when writing the result to `I` or discarding it.
 *  - The result of all of these calls has the same type.
 *  - The result of all of these calls is an instance of type `lf::task<R>`.
 *  - `I` is movable and dereferenceable.
 *  - `I` is indirectly writable from `R` or `R` is `void` while `I` is `discard_t`.
 *  - If `R` is non-void then `F` is `lf::core::async_tag_invocable` when `I` is `lf::eventually<R> *`.
 *  - `F` is `lf::core::async_tag_invocable` when `I` is `lf::try_eventually<R> *`.
 *
 * This concept is provided as a building block for higher-level concepts.
 */
template <typename I, tag Tag, typename F, typename... Args>
concept async_tag_invocable = impl::consistent_invocable<I, Tag, F, Args...>;

// --------- //

/**
 * @brief Alias for `lf::core::async_tag_invocable<lf::impl::discard_t, lf::core::tag::call, F, Args...>`.
 */
template <typename F, typename... Args>
concept callable = async_tag_invocable<impl::discard_t, tag::call, F, Args...>;

/**
 * @brief Test if an async function is root-invocable and call-invocable, subsumes `lf::core::callable`.
 */
template <typename F, typename... Args>
concept rootable = callable<F, Args...> && async_tag_invocable<impl::discard_t, tag::root, F, Args...>;

/**
 * @brief Test if an async function is fork-invocable and call-invocable, subsumes `lf::core::callable`.
 */
template <typename F, typename... Args>
concept forkable = callable<F, Args...> && async_tag_invocable<impl::discard_t, tag::fork, F, Args...>;

/**
 * @brief Test if an async function is `lf::core::forkable` and `lf::core::rootable`, subsumes both.
 */
template <typename F, typename... Args>
concept async_invocable = forkable<F, Args...> && rootable<F, Args...>;

/**
 * @brief Test if an async function is `lf::core::forkable` and `lf::core::rootable`, subsumes both.
 *
 * The `async_regular_invocable` concept adds to the `async_invocable` concept by requiring the invoke
 * expression to be equality-preserving and not modify either the function object or the arguments.
 */
template <typename F, typename... Args>
concept async_regular_invocable = forkable<F, Args...> && rootable<F, Args...>;

// --------- //

/**
 * @brief Fetch `R` when the async function `F` returns `lf::task<R>`.
 */
template <typename F, typename... Args>
  requires callable<F, Args...>
struct async_result : impl::unsafe_result<impl::discard_t, tag::call, F, Args...> {};

/**
 * @brief Fetch `R` when the async function `F` returns `lf::task<R>`.
 */
template <typename F, typename... Args>
  requires callable<F, Args...>
using async_result_t = typename async_result<F, Args...>::type;

} // namespace core

} // namespace lf

#endif /* A5349E86_5BAA_48EF_94E9_F0EBF630DE04 */

         // for async_result_t, return_address_for, async_...               // for tag, modifier_for              // for returnable, task

/**
 * @file combinate.hpp
 *
 * @brief Utility for building a coroutine's first argument and invoking it.
 */

namespace lf::impl {

// ---------------------------- //

template <returnable R, return_address_for<R> I, tag Tag>
struct promise;

// -------------------------------------------------------- //

/**
 * @brief Awaitable in the context of an `lf::task` coroutine.
 *
 * This will be transformed by an `await_transform` and trigger a fork or call.
 *
 * This is really just a `task<T>` with a bit more static information.
 *
 * NOTE: This is created by `y_combinate`, the parent/semaphore needs to be set by the caller!
 */
template <returnable R, return_address_for<R> I, tag Tag, modifier_for<Tag> Mod>
struct [[nodiscard]] quasi_awaitable : immovable<quasi_awaitable<R, I, Tag, Mod>>, unique_frame {};

// ---------------------------- //

// TODO fixup the forwarding of types here.

/**
 * @brief Call an async function with a synthesized first argument.
 *
 * The first argument will contain a copy of the function hence, this is a fixed-point combinator.
 */
template <quasi_pointer I, tag Tag, modifier_for<Tag> Mod, async_function_object F>
  requires unqualified<I> && unqualified<F>
struct [[nodiscard("A bound function SHOULD be immediately invoked!")]] y_combinate {

  /**
   * @brief The return address.
   */
  [[no_unique_address]] I ret;
  /**
   * @brief The asynchronous function.
   */
  [[no_unique_address]] F fun;

  /**
   * @brief Invoke the coroutine, set's the return pointer.
   */
  template <typename... Args>
    requires async_tag_invocable<I, Tag, F, Args...>
  auto operator()(Args &&...args) && -> quasi_awaitable<async_result_t<F, Args...>, I, Tag, Mod> {

    task task = std::move(fun)(                                 //
        first_arg_t<I, Tag, F, Args &&...>(std::as_const(fun)), // Makes a copy of fun
        std::forward<Args>(args)...                             //
    );

    using promise = promise<async_result_t<F, Args...>, I, Tag>;

    if constexpr (!std::same_as<I, discard_t>) {
      // This upcast is safe as we know the real promise type.
      static_cast<promise *>(task.get())->set_return(std::move(ret));
    }

    return {{}, {std::move(task)}}; // This move just moves the base class.
  }
};

// ---------------------------- //

/**
 * @brief Build a combinator for `ret` and `fun`.
 */
template <tag Tag, modifier_for<Tag> Mod, quasi_pointer I, async_function_object F>
auto combinate(I &&ret, F &&fun) {

  using II = std::remove_cvref_t<I>;
  using FF = std::remove_cvref_t<F>;

  if constexpr (first_arg_specialization<F>) {
    // Must unwrap to prevent infinite type recursion.
    return y_combinate<II, Tag, Mod, typename FF::async_function>{
        std::forward<I>(ret),
        unwrap(std::forward<F>(fun)),
    };
  } else {
    return y_combinate<II, Tag, Mod, FF>{std::forward<I>(ret), std::forward<F>(fun)};
  }
}

} // namespace lf::impl

#endif /* AD9A2908_3043_4CEC_9A2A_A57DE168DF19 */

 // for combinate      // for discard_t          // for LF_STATIC_CALL, LF_STATIC_CONST, LF_DEPRECATE...            // for tag, modifier_for, none

/**
 * @file control_flow.hpp
 *
 * @brief Meta header which includes ``lf::fork``, ``lf::call``, ``lf::join`` machinery.
 */

namespace lf {

namespace impl {

/**
 * @brief A empty tag type used to disambiguate a join.
 */
struct join_type {};

} // namespace impl

inline namespace core {

/**
 * @brief An awaitable (in a `lf::task`) that triggers a join.
 *
 * After a join is resumed it is guaranteed that all forked child tasks will have completed.
 *
 * \rst
 *
 * .. note::
 *
 *    There is no relationship between the thread that executes the ``lf::join``
 *    and the thread that resumes the coroutine.
 *
 * \endrst
 */
inline constexpr impl::join_type join = {};

} // namespace core

namespace impl {

/**
 * @brief An invocable (and subscriptable) wrapper that binds a return address to an asynchronous function.
 */
template <tag Tag, modifier_for<Tag> Mod>
struct bind_task {
  /**
   * @brief Bind return address `ret` to an asynchronous function.
   *
   * @return A functor, that will return an awaitable (in an ``lf::task``), that will trigger a fork/call .
   */
  template <quasi_pointer I, async_function_object F>
  LF_DEPRECATE_CALL [[nodiscard]] LF_STATIC_CALL auto operator()(I &&ret, F &&fun) LF_STATIC_CONST {
    return combinate<Tag, Mod>(std::forward<I>(ret), std::forward<F>(fun));
  }

  /**
   * @brief Set a void return address for an asynchronous function.
   *
   * @return A functor, that will return an awaitable (in an ``lf::task``), that will trigger a fork/call .
   */
  template <async_function_object F>
  LF_DEPRECATE_CALL [[nodiscard]] LF_STATIC_CALL auto operator()(F &&fun) LF_STATIC_CONST {
    return combinate<Tag, Mod>(discard_t{}, std::forward<F>(fun));
  }

#if defined(__cpp_multidimensional_subscript) && __cpp_multidimensional_subscript >= 202211L
  /**
   * @brief Bind return address `ret` to an asynchronous function.
   *
   * @return A functor, that will return an awaitable (in an ``lf::task``), that will trigger a fork/call .
   */
  template <quasi_pointer I, async_function_object F>
  [[nodiscard]] LF_STATIC_CALL auto operator[](I &&ret, F &&fun) LF_STATIC_CONST {
    return combinate<Tag, Mod>(std::forward<I>(ret), std::forward<F>(fun));
  }

  /**
   * @brief Set a void return address for an asynchronous function.
   *
   * @return A functor, that will return an awaitable (in an ``lf::task``), that will trigger a fork/call .
   */
  template <async_function_object F>
  [[nodiscard]] LF_STATIC_CALL auto operator[](F &&fun) LF_STATIC_CONST {
    return combinate<Tag, Mod>(discard_t{}, std::forward<F>(fun));
  }
#endif
};

} // namespace impl

inline namespace core {

/**
 * @brief A second-order function for advanced control of `fork`/`call`.
 *
 * Users should prefer `lf::core::fork` and `lf::core::call` over this function. `lf::core::dispatch`
 * primarily caters for niche exception handling use-cases and has more stringent requirements on when/where
 * it can be used.
 *
 * If `Tag == lf::core::tag::call` then dispatches like `lf::core::call`, i.e. the parent cannot be stolen.
 * If `Tag == lf::core::tag::fork` then dispatches like `lf::core::fork`, i.e. the parent can be stolen.
 *
 * The modifiers perform the following actions:
 *
 * - `lf::core::modifier::none` - No modification to the call category.
 * - `lf::core::modifier::sync` - The tag is `fork`, but the awaitable reports if the call was synchronous,
 * if the call was synchronous then this fork does not count as opening a fork-join scope and the internal
 * exception will be checked, if it was set (either by the child of a sibling) then either that exception will
 * be rethrown or a new exception will be thrown. In either case this does not count as a join. If this is
 * inside a fork-join scope the thrown exception __must__ be caught and a call to `co_await lf::join` __must__
 * be made.
 * - `lf::core::modifier::sync_outside` - Same as `sync` but guarantees that the fork statement is outside a
 * fork-join scope. Hence, if the the call completes synchronously, the exception of the forked child will be
 * rethrown and a fork-join scope will not have been opened (hence a join is not required).
 * - `lf::core::modifier::eager_throw` - The tag is `call` after resuming the awaitable the internal exception
 * is checked, if it is set (either from the child or by a sibling) then it or a new exception will be
 * (re)thrown.
 * - `lf::core::modifier::eager_throw_outside` - Same as `eager_throw` but guarantees that the call statement
 * is outside a fork-join scope hence, the child's exception will be rethrown.
 *
 * @tparam Tag The tag of the dispatched task.
 * @tparam Mod A modifier for the dispatched sequence.
 */
template <tag Tag, modifier_for<Tag> Mod = modifier::none>
  requires (Tag == tag::call || Tag == tag::fork)
inline constexpr auto dispatch = impl::bind_task<Tag, Mod>{};

/**
 * @brief A second-order functor used to produce an awaitable (in an ``lf::task``) that will trigger a fork.
 *
 * Conceptually the forked/child task can be executed anywhere at anytime and in parallel with its
 * continuation.
 *
 * \rst
 *
 * .. note::
 *
 *    There is no guaranteed relationship between the thread that executes the ``lf::fork``
 *    and the thread(s) that execute the continuation/child. However, currently ``libfork``
 *    uses continuation stealing so the thread that calls ``lf::fork`` will immediately begin
 *    executing the child.
 *
 * \endrst
 */
inline constexpr auto fork = dispatch<tag::fork>;

/**
 * @brief A second-order functor used to produce an awaitable (in an ``lf::task``) that will trigger a call.
 *
 * Conceptually the called/child task can be executed anywhere at anytime but, its continuation is guaranteed
 * to be sequenced after the child returns.
 *
 * \rst
 *
 * .. note::
 *
 *    There is no relationship between the thread that executes the ``lf::call`` and
 *    the thread(s) that execute the continuation/child. However, currently ``libfork``
 *    uses continuation stealing so the thread that calls ``lf::call`` will immediately
 *    begin executing the child.
 *
 * \endrst
 */
inline constexpr auto call = dispatch<tag::call>;

} // namespace core

} // namespace lf

#endif /* E8D38B49_7170_41BC_90E9_6D6389714304 */


#ifndef E6A77A20_6653_4B56_9931_BA5B0987911A
#define E6A77A20_6653_4B56_9931_BA5B0987911A

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <type_traits> // for true_type, type_identity, false_type
#include <utility>     // for forward
 // for eventually, try_eventually  // for quasi_pointer, first_arg_t, async_function_object  // for discard_t      // for LF_STATIC_CONST, LF_STATIC_CALL, LF_CORO_WRAPPER
#ifndef AE259086_6D4B_433D_8EEB_A1E8DC6A5F7A
#define AE259086_6D4B_433D_8EEB_A1E8DC6A5F7A

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <bit>         // for bit_cast
#include <exception>   // for exception, rethrow_exception
#include <memory>      // for make_shared, shared_ptr
#include <optional>    // for optional
#include <semaphore>   // for binary_semaphore
#include <type_traits> // for is_trivially_destructible_v
#include <utility>     // for forward, exchange
                // for LF_DEFER           // for try_eventually           // for schedule_in_worker          // for submit_node_t, submit_t              // for has_stack, thread_stack, has_context            // for async_function_object       // for quasi_awaitable, y_combinate // for manual_lifetime           // for stack // for async_result_t, rootable, ignore_t     // for LF_THROW, LF_CLANG_TLS_NOINLINE
#ifndef BDE6CBCC_7576_4082_AAC5_2A207FEA9293
#define BDE6CBCC_7576_4082_AAC5_2A207FEA9293

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for convertible_to, same_as
#include <type_traits> // for remove_cvref_t
#include <utility>     // for declval, forward
  // for worker_context  // for submit_handle      // for context    // for storable // for non_null

/**
 * @file scheduler.hpp
 *
 * @brief Machinery for interfacing with scheduling coroutines.
 */

namespace lf {

inline namespace core {

/**
 * @brief A concept that schedulers must satisfy.
 *
 * This requires only a single method, `schedule` which accepts an `lf::submit_handle` and
 * promises to call `lf::resume()` on it. The `schedule` method __must__ fulfill the strong
 * exception guarantee.
 */
template <typename Sch>
concept scheduler = requires (Sch &&sch, submit_handle handle) {
  std::forward<Sch>(sch).schedule(handle); //
};

/**
 * @brief Defines the interface for awaitables that may trigger a context switch.
 *
 * A ``context_switcher`` can be awaited inside a libfork coroutine. If the awaitable
 * is not ready then the coroutine will be suspended and a submit_handle will be passed to the
 * context switcher's ``await_suspend()`` function. This can then be resumed by any worker as
 * normal.
 */
template <typename T>
concept context_switcher = storable<T> && requires (std::remove_cvref_t<T> awaiter, submit_handle handle) {
  { awaiter.await_ready() } -> std::convertible_to<bool>;
  { awaiter.await_suspend(handle) } -> std::same_as<void>;
  { awaiter.await_resume() };
};

template <scheduler Sch>
struct resume_on_quasi_awaitable;

/**
 * @brief Create an ``lf::core::context_switcher`` to explicitly transfer execution to ``dest``.
 *
 * `dest` must be non-null.
 */
template <scheduler Sch>
auto resume_on(Sch *dest) noexcept -> resume_on_quasi_awaitable<Sch> {
  return resume_on_quasi_awaitable<Sch>{non_null(dest)};
}

/**
 * @brief An ``lf::core::context_switcher`` that just transfers execution to a new scheduler.
 */
template <scheduler Sch>
struct [[nodiscard("This should be immediately co_awaited")]] resume_on_quasi_awaitable {
 private:
  Sch *m_dest;

  explicit resume_on_quasi_awaitable(worker_context *dest) noexcept : m_dest{dest} {}

  friend auto resume_on<Sch>(Sch *dest) noexcept -> resume_on_quasi_awaitable;

 public:
  /**
   * @brief Don't suspend if on correct context.
   */
  auto await_ready() const noexcept { return impl::tls::context() == m_dest; }

  /**
   * @brief Reschedule this coroutine onto the requested destination.
   */
  auto
  await_suspend(submit_handle handle) noexcept(noexcept(std::declval<Sch *>()->schedule(handle))) -> void {
    m_dest->schedule(handle);
  }

  /**
   * @brief A no-op.
   */
  static auto await_resume() noexcept -> void {}
};

static_assert(context_switcher<resume_on_quasi_awaitable<worker_context>>);

} // namespace core

} // namespace lf

#endif /* BDE6CBCC_7576_4082_AAC5_2A207FEA9293 */

 // for scheduler       // for tag, none      // for returnable

/**
 * @file sync_wait.hpp
 *
 * @brief Functionally to enter coroutines from a non-worker thread.
 */

namespace lf {

namespace impl {

/**
 * @brief State of a future.
 */
enum class future_state {
  /**
   * @brief Wait has not been called.
   */
  no_wait,
  /**
   * @brief The result is ready.
   */
  ready,
  /**
   * @brief The result has been retrievd.
   */
  retrievd,
};

/**
 * @brief The shared state of a future.
 */
template <typename R>
struct future_shared_state : try_eventually<R> {
  /**
   * @brief Inherit assignment operators.
   */
  using try_eventually<R>::operator=;

  static_assert(std::is_trivially_destructible_v<submit_node_t>);
  /**
   * @brief The submit handle will point to this.
   *
   * We never call `.destroy()` on this but that is ok by the above `static_assert`.
   */
  manual_lifetime<submit_node_t> node;
  /**
   * @brief The root task's notification semaphore.
   */
  std::binary_semaphore sem{0};
  /**
   * @brief The state of the future.
   */
  future_state status = future_state::no_wait;
};

/**
 * @brief An ``std::shared_pointer`` to a shared future state.
 */
template <typename R>
using future_shared_state_ptr = std::shared_ptr<future_shared_state<R>>;

} // namespace impl

inline namespace core {

/**
 * @brief Thrown when a future has no shared state.
 */
struct broken_future : std::exception {
  /**
   * @brief A diagnostic message.
   */
  auto what() const noexcept -> char const * override { return "Broken future, no shared state!"; }
};

/**
 * @brief Thrown when `.get()` is called more than once on a future.
 */
struct empty_future : std::exception {
  /**
   * @brief A diagnostic message.
   */
  auto what() const noexcept -> char const * override { return "future::get() called more than once!"; }
};

/**
 * @brief A future is a handle to the result of an asynchronous operation.
 */
template <returnable R>
class future {

  using enum impl::future_state;

  /**
   * @brief The other half of the promise-future pair.
   */
  impl::future_shared_state_ptr<R> m_heap;

  template <scheduler Sch, async_function_object F, class... Args>
    requires rootable<F, Args...>
  friend auto schedule(Sch &&sch, F &&fun, Args &&...args) -> future<async_result_t<F, Args...>>;

// Work-around: https://github.com/llvm/llvm-project/issues/63536
#if defined(__clang__)
  #if defined(__apple_build_version__)
    #if __clang_major__ == 15
 public:
    #endif
  #elif __clang_major__ == 16
 public:
  #endif
#endif
  /**
   * @brief Construct a new future object storing the shared state.
   */
  explicit future(impl::future_shared_state_ptr<R> &&heap) noexcept : m_heap{std::move(heap)} {
    static_assert(std::is_nothrow_move_constructible_v<impl::future_shared_state_ptr<R>>);
  }

 public:
  /**
   * @brief Move construct a new future.
   */
  future(future &&other) noexcept = default;
  /**
   * @brief Futures are not copyable.
   */
  future(future const &other) = delete;
  /**
   * @brief Move assign to a future.
   */
  auto operator=(future &&other) noexcept -> future & = default;
  /**
   * @brief Futures are not copy assignable.
   */
  auto operator=(future const &other) -> future & = delete;
  /**
   * @brief Wait (__block__) until the future completes if it has a shared state.
   */
  ~future() noexcept {
    if (valid() && m_heap->status == no_wait) {
      m_heap->sem.acquire();
    }
  }
  /**
   * @brief Test if the future has a shared state.
   */
  auto valid() const noexcept -> bool { return m_heap != nullptr; }
  /**
   * @brief Detach the shared state from this future.
   *
   * Following this operation the destructor is guaranteed to not block.
   */
  void detach() noexcept { std::exchange(m_heap, nullptr); }
  /**
   * @brief Wait (__block__) for the future to complete.
   */
  void wait() {

    if (!valid()) {
      LF_THROW(broken_future{});
    }

    if (m_heap->status == no_wait) {
      m_heap->sem.acquire();
      m_heap->status = ready;
    }
  }
  /**
   * @brief Wait (__block__) for the result to complete and then return it.
   *
   * If the task completed with an exception then that exception will be rethrown. If
   * the future has no shared state then a `lf::core::future_error` will be thrown.
   */
  auto get() -> R {

    wait();

    if (m_heap->status == retrievd) {
      LF_THROW(empty_future{});
    }

    m_heap->status = retrievd;

    if (m_heap->has_exception()) {
      std::rethrow_exception(std::move(*m_heap).exception());
    }

    if constexpr (!std::is_void_v<R>) {
      return *std::move(*m_heap);
    }
  }
};

/**
 * @brief Thrown when a worker thread attempts to call `lf::core::schedule`.
 */
struct schedule_in_worker : std::exception {
  /**
   * @brief A diagnostic message.
   */
  auto what() const noexcept -> char const * override { return "schedule(...) called from a worker thread!"; }
};

/**
 * @brief Schedule execution of `fun` on `sch` and return a `lf::core::future` to the result.
 *
 * This will build a task from `fun` and dispatch it to `sch` via its `schedule` method. If `schedule` is
 * called by a worker thread (which are never allowed to block) then `lf::core::schedule_in_worker` will be
 * thrown.
 */
template <scheduler Sch, async_function_object F, class... Args>
  requires rootable<F, Args...>
LF_CLANG_TLS_NOINLINE auto
schedule(Sch &&sch, F &&fun, Args &&...args) -> future<async_result_t<F, Args...>> {
  //
  if (impl::tls::has_stack || impl::tls::has_context) {
    throw schedule_in_worker{};
  }

  // Initialize the non-worker's stack.
  impl::tls::thread_stack.construct();
  impl::tls::has_stack = true;

  // Clean up the stack on exit.
  LF_DEFER {
    impl::tls::thread_stack.destroy();
    impl::tls::has_stack = false;
  };

  auto share_state = std::make_shared<impl::future_shared_state<async_result_t<F, Args...>>>();

  // Build a combinator, copies heap shared_ptr.
  impl::y_combinate combinator = combinate<tag::root, modifier::none>(share_state, std::forward<F>(fun));
  // This allocates a coroutine on this threads stack.
  impl::quasi_awaitable await = std::move(combinator)(std::forward<Args>(args)...);
  // Set the root semaphore.
  await->set_root_sem(&share_state->sem);

  // If this throws then `await` will clean up the coroutine.
  impl::ignore_t{} = impl::tls::thread_stack->release();

  // We will pass a pointer to this to .schedule()
  share_state->node.construct(std::bit_cast<impl::submit_t *>(await.get()));

  // Schedule upholds the strong exception guarantee hence, if it throws `await` cleans up.
  std::forward<Sch>(sch).schedule(share_state->node.data());
  // If -^ didn't throw then we release ownership of the coroutine, it will be cleaned up by the worker.
  impl::ignore_t{} = await.release();

  return future<async_result_t<F, Args...>>{std::move(share_state)}; // Shared state ownership transferred.
}

/**
 * @brief Schedule execution of `fun` on `sch` and wait (__block__) until the task is complete.
 *
 * This is the primary entry point from the synchronous to the asynchronous world. A typical libfork program
 * is expected to make a call from `main` into a scheduler/runtime by scheduling a single root-task with this
 * function.
 *
 * This makes the appropriate call to `lf::core::schedule` and calls `get` on the returned `lf::core::future`.
 */
template <scheduler Sch, async_function_object F, class... Args>
  requires rootable<F, Args...>
auto sync_wait(Sch &&sch, F &&fun, Args &&...args) -> async_result_t<F, Args...> {
  return schedule(std::forward<Sch>(sch), std::forward<F>(fun), std::forward<Args>(args)...).get();
}

/**
 * @brief Schedule execution of `fun` on `sch` and detach the future.
 *
 * This is the secondary entry point from the synchronous to the asynchronous world. Similar to `sync_wait`
 * but calls `detach` on the returned `lf::core::future`.
 *
 * __Note:__ Many schedulers (like `lf::lazy_pool` and `lf::busy_pool`) require all submitted work to
 * (including detached work) to complete before they are destructed.
 */
template <scheduler Sch, async_function_object F, class... Args>
  requires rootable<F, Args...>
auto detach(Sch &&sch, F &&fun, Args &&...args) -> void {
  return schedule(std::forward<Sch>(sch), std::forward<F>(fun), std::forward<Args>(args)...).detach();
}

} // namespace core

} // namespace lf

#endif /* AE259086_6D4B_433D_8EEB_A1E8DC6A5F7A */

  // for future_shared_state_ptr        // for tag       // for returnable, task

/**
 * @file extern.hpp
 *
 * @brief Machinery for forward declaring async functions.
 */

namespace lf::impl {

namespace detail {

template <quasi_pointer I, returnable R, tag Tag>
struct valid_extern_impl : std::false_type {};

// ---

template <returnable R, tag Tag>
struct valid_extern_impl<discard_t, R, Tag> : std::true_type {};

template <returnable R, tag Tag>
  requires return_address_for<R *, R>
struct valid_extern_impl<R *, R, Tag> : std::true_type {};

template <returnable R, tag Tag>
struct valid_extern_impl<eventually<R> *, R, Tag> : std::true_type {};

template <returnable R, tag Tag>
struct valid_extern_impl<try_eventually<R> *, R, Tag> : std::true_type {};

// ---

template <returnable R, tag Tag>
struct valid_extern_impl<future_shared_state_ptr<R>, R, Tag> : std::true_type {};

} // namespace detail

/**
 * @brief Verify that a return type is valid for an extern'ed function.
 */
template <typename I, typename R, tag Tag>
concept valid_extern = quasi_pointer<I> && returnable<R> && detail::valid_extern_impl<I, R, Tag>::value;

/**
 * @brief A small shim/coroutine-wrapper that strips the `CallArgs` from an async dispatch.
 */
template <returnable R, async_function_object F>
struct extern_shim {
  /**
   * @brief Strips `CallArgs` and forwards to `F`.
   */
  template <quasi_pointer I, tag Tag, typename... CallArgs, typename... Args>
    requires valid_extern<I, R, Tag>
  LF_CORO_WRAPPER LF_FORCEINLINE LF_STATIC_CALL auto
  operator()(first_arg_t<I, Tag, extern_shim, CallArgs...> /**/, Args &&...args) LF_STATIC_CONST->task<R> {
    return F{}(first_arg_t<I, Tag, F>{{}}, std::forward<Args>(args)...);
  }
};

namespace detail {

/**
 * @brief We need another type to represent the discard_t in the extern_ret_ptr_t so we don't violate ORD.
 */
struct other_discard_t : discard_t {
  using discard_t::operator*;
};

template <returnable R>
struct extern_ret_ptr_impl : std::type_identity<other_discard_t> {};

template <returnable R>
  requires return_address_for<R *, R>
struct extern_ret_ptr_impl<R> : std::type_identity<R *> {};

} // namespace detail

/**
 * @brief If `R *` is a valid return address for `R` then `R *` else `discard_t`.
 */
template <returnable R>
using extern_ret_ptr_t = typename detail::extern_ret_ptr_impl<R>::type;

} // namespace lf::impl

// ---------------------- Forward declare an external function ---------------------- //

/**
 * @brief Forward declare an extern'ed function.
 */
#define LF_EXTERN_FWD_DECL(R, f, ...)                                                                        \
  namespace f##_impl {                                                                                       \
    struct f##_fn {                                                                                          \
      LF_STATIC_CALL ::lf::task<R> operator()(auto __VA_OPT__(, ) __VA_ARGS__) LF_STATIC_CONST;              \
    };                                                                                                       \
  }                                                                                                          \
  inline constexpr auto f = ::lf::impl::extern_shim<R, f##_impl::f##_fn> {}
/**
 * @brief Instantiate the extern'ed function for a specific call type and return type.
 */
#define LF_INSTANTIATE_SELF(R, f, head, ...)                                                                 \
  template ::lf::task<R> f##_impl::f##_fn::operator()<head>(head __VA_OPT__(, ) __VA_ARGS__) LF_STATIC_CONST
/**
 * @brief Build the first argument for the extern'ed function.
 */
#define LF_FIRST_ARG(R, I, Tag, f) ::lf::impl::first_arg_t<I, Tag, f##_impl::f##_fn>
/**
 * @brief Instantiate the extern'ed function generating the appropriate first argument.
 */
#define LF_INSTANTIATE(R, f, I, Tag, ...)                                                                    \
  LF_INSTANTIATE_SELF(R, f, LF_FIRST_ARG(R, I, Tag, f) __VA_OPT__(, ) __VA_ARGS__)
/**
 * @brief Instantiate for all valid return types.
 */
#define LF_INSTANTIATE_RETURNS(declspec, R, f, Tag, ...)                                                     \
  declspec LF_INSTANTIATE(R, f, ::lf::impl::extern_ret_ptr_t<R>, Tag __VA_OPT__(, ) __VA_ARGS__);            \
  declspec LF_INSTANTIATE(R, f, ::lf::impl::discard_t, Tag __VA_OPT__(, ) __VA_ARGS__);                      \
  declspec LF_INSTANTIATE(R, f, ::lf::eventually<R> *, Tag __VA_OPT__(, ) __VA_ARGS__);                      \
  declspec LF_INSTANTIATE(R, f, ::lf::try_eventually<R> *, Tag __VA_OPT__(, ) __VA_ARGS__)
/**
 * @brief Forward declare an async function.
 *
 * This is useful for speeding up compile times by allowing you to put the definition
 * of an async function in a source file and only forward declare it in a header file.
 *
 * \rst
 *
 * Usage: in a header file (e.g. ``fib.hpp``), forward declare an async function:
 *
 * .. code::
 *
 *    LF_FWD_DECL(int, fib, int n);
 *
 * And in a corresponding source file (e.g. ``fib.cpp``), implement the function:
 *
 * .. code::
 *
 *    LF_IMPLEMENT(int, fib, int n) {
 *
 *      if (n < 2) {
 *        co_return n;
 *      }
 *
 *      int a, b;
 *
 *      co_await lf::fork(&a, fib)(n - 1);
 *      co_await lf::call(&b, fib)(n - 2);
 *
 *      co_await lf::join;
 *    }
 *
 * \endrst
 *
 * Now in some other file you can include ``fib.hpp`` and use ``fib`` as normal with the restriction
 * that you must always bind the result of the extern'ed function to an ``lf::core::eventually<int> *``,
 * ``lf::core::try_eventually<int> *`` or ``int *``.
 */
#define LF_FWD_DECL(R, f, ...)                                                                               \
  LF_EXTERN_FWD_DECL(R, f __VA_OPT__(, ) __VA_ARGS__);                                                       \
  LF_INSTANTIATE_RETURNS(extern, R, f, ::lf::tag::call __VA_OPT__(, ) __VA_ARGS__);                          \
  LF_INSTANTIATE_RETURNS(extern, R, f, ::lf::tag::fork __VA_OPT__(, ) __VA_ARGS__);                          \
  extern LF_INSTANTIATE(                                                                                     \
      R, f, ::lf::impl::future_shared_state_ptr<R>, ::lf::tag::root __VA_OPT__(, ) __VA_ARGS__)

// ---------------------- Implement a forward declared function ---------------------- //

/**
 * @brief An alternative to ``LF_IMPLEMENT`` that allows you to name the ``self`` parameter.
 */
#define LF_IMPLEMENT_NAMED(R, f, self, ...)                                                                  \
  LF_INSTANTIATE_RETURNS(/* nodecl */, R, f, ::lf::tag::call __VA_OPT__(, ) __VA_ARGS__);                    \
  LF_INSTANTIATE_RETURNS(/* nodecl */, R, f, ::lf::tag::fork __VA_OPT__(, ) __VA_ARGS__);                    \
  LF_INSTANTIATE(R, f, ::lf::impl::future_shared_state_ptr<R>, ::lf::tag::root __VA_OPT__(, ) __VA_ARGS__);  \
  ::lf::task<R> f##_impl::f##_fn::operator()(auto self __VA_OPT__(, ) __VA_ARGS__) LF_STATIC_CONST

/**
 * @brief See ``LF_FWD_DECL`` for usage.
 */
#define LF_IMPLEMENT(R, f, ...) LF_IMPLEMENT_NAMED(R, f, f __VA_OPT__(, ) __VA_ARGS__)

#endif /* E6A77A20_6653_4B56_9931_BA5B0987911A */


#ifndef DE1C62F1_949F_48DC_BC2C_960C4439332D
#define DE1C62F1_949F_48DC_BC2C_960C4439332D

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for constructible_from, invocable
#include <coroutine>   // for suspend_never
#include <exception>   // for rethrow_exception
#include <functional>  // for invoke
#include <type_traits> // for decay_t, invoke_result_t, true_type, false_type
#include <utility>     // for forward
      // for try_eventually       // for async_function_object
#ifndef CF3E6AC4_246A_4131_BF7A_FE5CD641A19B
#define CF3E6AC4_246A_4131_BF7A_FE5CD641A19B

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <atomic>      // for memory_order_acquire, atomic_thread_fence
#include <bit>         // for bit_cast
#include <coroutine>   // for coroutine_handle, noop_coroutine, suspend_...
#include <cstdint>     // for uint16_t
#include <iterator>    // for iter_difference_t
#include <memory>      // for operator==, uninitialized_default_construct_n
#include <span>        // for span
#include <type_traits> // for remove_cvref_t
#include <utility>     // for exchange
          // for co_allocable, co_new_t, stack_allocated        // for exception_before_join       // for full_context       // for submit_handle, submit_node_t, task_handle          // for unwrap           // for stack, context        // for frame        // for stack // for unique_frame, frame_deleter      // for k_u16_max, checked_cast         // for ignore_t             // for LF_ASSERT, LF_LOG, LF_FORCEINLINE, LF_THROW         // for context_switcher               // for region

/**
 * @file awaitables.hpp
 *
 * @brief Awaitables (in a `libfork` coroutine) that trigger a switch, fork, call or join.
 */

namespace lf::impl {

// -------------------------------------------------------- //

/**
 * @brief To handle tasks on a WSQ that have been "effectively stolen".
 *
 * If explicit scheduling has occurred then there may be tasks on a workers WSQ that
 * have been "effectively stolen" from another worker. These can be handled in
 * reverse order.
 *
 */
[[nodiscard]] inline LF_FORCEINLINE auto try_self_stealing() noexcept -> std::coroutine_handle<> {
  //
  if (auto *eff_stolen = std::bit_cast<frame *>(tls::context()->pop())) {
    eff_stolen->fetch_add_steal();
    return eff_stolen->self();
  }

  return std::noop_coroutine();
}

// -------------------------------------------------------- //

/**
 * @brief Test if a context switcher has a noexcept initial_suspend().
 */
template <typename A>
concept noexcept_await_ready = context_switcher<A> && requires (std::remove_cvref_t<A> await) {
  { await.await_ready() } noexcept;
};

/**
 * @brief Test if a context switcher has a noexcept await_suspend().
 */
template <typename A>
concept noexcept_await_suspend =
    context_switcher<A> && requires (std::remove_cvref_t<A> await, submit_handle handle) {
      { await.await_suspend(handle) } noexcept;
    };

/**
 * @brief Test if a context switcher has a noexcept await_resume().
 */
template <typename A>
concept noexcept_await_resume = context_switcher<A> && requires (std::remove_cvref_t<A> await) {
  { await.await_resume() } noexcept;
};

/**
 * @brief A wrapper for an ``lf::core::context_switcher`` that
 */
template <context_switcher A>
struct context_switch_awaitable {

  /**
   * @brief Forward to the external awaitable's await_resume().
   */
  auto await_ready() noexcept(noexcept_await_ready<A>) -> bool { return external.await_ready(); }

  /**
   * @brief Reschedule this coro onto `dest`.
   */
  auto
  await_suspend(std::coroutine_handle<> /**/) noexcept(noexcept_await_suspend<A>) -> std::coroutine_handle<> {

    // We currently own the "resumable" handle of this coroutine, if there have been any
    // steals then we do not own the stack this coroutine is on and the resumer should not
    // take the stack otherwise, we should give-it-up and the resumer should take it.

    std::uint16_t steals = std::bit_cast<frame *>(unwrap(&self))->load_steals();

    // Assert the above paragraphs validity.
#ifndef NDEBUG
    if (auto *tmp = std::bit_cast<frame *>(unwrap(&self)); steals == 0) {
      LF_ASSERT(tmp->stacklet() == tls::stack()->top());
    } else {
      LF_ASSERT(tmp->stacklet() != tls::stack()->top());
    }
#endif

    // Schedule this coroutine for execution, cannot touch underlying after this.
    external.await_suspend(&self);

    if (steals == 0) {
      // Dest will take this stack upon resumption hence, we must release it.

      // If this throws (fails to allocate) then the worker must die as
      // it cannot resume a self-stolen task without a stack and we cannot
      // recover the submitted task.
      []() noexcept {
        ignore_t{} = tls::stack()->release();
      }();
    }

    LF_ASSERT(tls::stack()->empty());

    // Eventually dest will fail to pop() the ancestor task that we 'could' pop() here and
    // then treat it as a task that was stolen from it.

    // Now we have a number of tasks on our WSQ which we have "effectively stolen" from dest.
    // All of them will eventually reach a join point.

    // We can pop() the ancestor, mark it stolen and then resume it.

    /**
     * While running the ancestor several things can happen:
     *   We hit a join in the ancestor:
     *      Case Win join:
     *        Take stack, OK to treat tasks on our WSQ as non-stolen.
     *      Case Loose join:
     *        Must treat tasks on our WSQ as stolen.
     *   We loose a join in a descendent of the ancestor:
     *    Ok all task on WSQ must have been stole by other threads and handled as stolen appropriately.
     */

    return try_self_stealing();
  }

  /**
   * @brief Forward to the external awaitable's await_resume().
   */
  auto await_resume() noexcept(noexcept_await_resume<A>) -> decltype(auto) { return external.await_resume(); }

  /**
   * @brief The external awaitable.
   */
  [[no_unique_address]] A external;
  /**
   * @brief The current coroutine's handle.
   */
  submit_node_t self;
};

// -------------------------------------------------------- //

/**
 * @brief An awaiter that returns space allocated on the current fibre's stack.
 *
 * This never suspends the coroutine.
 */
template <co_allocable T>
struct alloc_awaitable : std::suspend_never {
  /**
   * @brief Return a handle to the memory.
   */
  [[nodiscard]] auto await_resume() const -> stack_allocated<T> {

    auto *stack = tls::stack();

    LF_ASSERT(stack->top() == self->stacklet()); // Must own the stack.

    T *ptr = static_cast<T *>(stack->allocate(request.count * sizeof(T)));

    using int_t = std::iter_difference_t<T *>;

    // clang-format off

    LF_TRY {
      std::ranges::uninitialized_default_construct_n(ptr, checked_cast<int_t>(request.count));
    } LF_CATCH_ALL {
      stack->deallocate(ptr);
      LF_RETHROW;
    }

    // clang-format on

    self->reset_stacklet(stack->top());

    return {self, std::span<T>{ptr, request.count}};
  }

  /**
   * @brief The requested allocation.
   */
  co_new_t<T> request;
  /**
   * @brief The current coroutine's frame.
   */
  frame *self;
};

// -------------------------------------------------------- //

/**
 * @brief An awaiter that suspends the current coroutine and transfers control to a child task.
 *
 * The parent task is made available for stealing. This is generated by `await_transform` when awaiting on an
 * `lf::impl::quasi_awaitable`.
 */
struct fork_awaitable : std::suspend_always {
  /**
   * @brief Sym-transfer to child, push parent to queue.
   */
  auto await_suspend(std::coroutine_handle<> /*unused*/) -> std::coroutine_handle<> {
    LF_LOG("Forking, push parent to context");

    // Need a copy (on stack) in case *this is destructed after push.
    // std::coroutine_handle stack_child = this->child->self();

    unique_frame stack_child = std::exchange(child, nullptr);

    // If await_suspend throws an exception then:
    //  - The exception is caught,
    //  - The coroutine is resumed,
    //  - The exception is immediately re-thrown.

    // Hence, if this throws that is ok.
    tls::context()->push(std::bit_cast<task_handle>(self));

    // If the above didn't throw we take ownership of child's lifetime.
    return stack_child.release()->self();
  }

  /**
   * @brief A noop in release, provides hints to the optimizer.
   */
  LF_FORCEINLINE void await_resume() const noexcept {
    // If the coroutine has been resumed then the child's ownership was transferred
    // in the await suspend. However, the await_suspend cannot be inlined as it
    // provides the symmetric transfer hence the compiler will probably not be able
    // to optimize away the destructor of the child (unique_ptr) without this.
    LF_ASSERT(child == nullptr);
  }

  /**
   * @brief The suspended child coroutine's frame.
   */
  unique_frame child;
  /**
   * @brief The calling coroutine's frame.
   */
  frame *self;
};

/**
 * @brief An awaiter identical to `fork_awaitable` but with an additional boolean indicating if the child
 * completed synchronously.
 *
 * @tparam ChildThrows If `true` then the child captures it's exceptions in it's result.
 * @tparam R Where the fork statement is located.
 */
template <bool ChildThrows, region R>
  requires (R != region::outside)
struct sync_fork_awaitable : fork_awaitable {
  /**
   * @brief Returns `true` if the forked child completed synchronously.
   *
   * If `ChildThrows` is `true` then this will throw `lf::core::exception_before_join`
   * if there is an exception or possibly the child's exception if the child had no forked
   * siblings.
   */
  auto await_resume() const noexcept(!ChildThrows) -> bool {
    // Help the optimizer.
    fork_awaitable::await_resume();

    // For it to be safe to consume the value from the child we justed forked it
    // must not have thrown an exception. We can check if __some__ child threw an
    // exception but we cannot (generally) retrieve it as exception is not safe
    // to touch until after a join.
    if (std::uint16_t steals_post = self->load_steals(); steals_post == steals_pre) {

      // Then completed synchronously.

      if constexpr (ChildThrows) {
        if (R == region::opening_fork) {
          LF_ASSERT(steals_post == 0);
          // If the opening fork completed synchronously the we can rethrow.
          self->unsafe_rethrow_if_exception();
        } else if (steals_post == 0) {
          // No steals have happened hence, no one else could thrown an
          // exception hence, so we can touch the exception object.
          self->unsafe_rethrow_if_exception();
        } else {
          // Otherwise, we throw a substitute exception.
          if (self->atomic_has_exception()) {
            LF_THROW(exception_before_join{});
          }
        }
      }
      return true;
    }
    return false;
  }
  /**
   * @brief The number of times the parent was stolen __before__ the fork.
   */
  std::uint16_t steals_pre;
};

/**
 * @brief An awaiter that suspends the current coroutine and transfers control to a child task.
 *
 * The parent task is __not__ made available for stealing. This is generated by `await_transform`
 * when awaiting on an `lf::impl::quasi_awaitable`.
 */
struct call_awaitable : std::suspend_always {
  /**
   * @brief Sym-transfer to child.
   */
  auto await_suspend(std::coroutine_handle<> /*unused*/) noexcept -> std::coroutine_handle<> {
    LF_LOG("Calling");
    // Take ownership of the child's lifetime.
    return child.release()->self();
  }

  /**
   * @brief A noop in release, provides hints to the optimizer.
   */
  LF_FORCEINLINE void await_resume() const noexcept {
    // If the coroutine has been resumed then the child's ownership was transferred
    // in the await suspend. However, the await_suspend cannot be inlined as it
    // provides the symmetric transfer hence the compiler will probably not be able
    // to optimize away the destructor of the child (unique_ptr) without this.
    LF_ASSERT(child == nullptr);
  }

  /**
   * @brief The suspended child coroutine's frame.
   */
  unique_frame child;
};

/**
 * @brief An awaiter identical to `call_awaitable` that also propagates an exception.
 *
 * This has limited use inside a fork-join scope.
 *
 * @tparam R Where the call statement is located.
 */
template <region R>
  requires (R != region::opening_fork)
struct eager_call_awaitable : call_awaitable {
  /**
   * @brief Eagerly rethrow any exceptions from the child or its siblings.
   */
  void await_resume() const {
    if constexpr (R == region::outside) {
      LF_ASSERT(self->load_steals() == 0);
      // Outside fork-join we can touch the exception.
      self->unsafe_rethrow_if_exception();
    } else if (self->load_steals() == 0) {
      // Can throw the real exception.
      self->unsafe_rethrow_if_exception();
    } else {
      // Otherwise we throw a substitute.
      if (self->atomic_has_exception()) {
        LF_THROW(exception_before_join{});
      }
    }
  }

  /**
   * @brief The calling coroutine's frame.
   */
  frame *self;
};

// -------------------------------------------------------------------------------- //

/**
 * @brief An awaiter to synchronize execution of child tasks.
 *
 * This is generated by `await_transform` when awaiting on an `lf::impl::join_type`.
 */
struct join_awaitable {
 private:
  void take_stack_reset_frame() const noexcept {
    // Steals have happened so we cannot currently own this tasks stack.
    LF_ASSERT(self->load_steals() != 0);
    LF_ASSERT(tls::stack()->empty());
    *tls::stack() = stack{self->stacklet()};
    // Some steals have happened, need to reset the control block.
    self->reset();
  }

 public:
  /**
   * @brief Shortcut if children are ready.
   */
  auto await_ready() const noexcept -> bool {
    // If no steals then we are the only owner of the parent and we are ready to join.
    if (self->load_steals() == 0) {
      LF_LOG("Sync ready (no steals)");
      // Therefore no need to reset the control block.
      return true;
    }
    // Currently:            joins() = k_u16_max - num_joined
    // Hence:       k_u16_max - joins() = num_joined

    // Could use (relaxed) + (fence(acquire) in truthy branch) but, it's
    // better if we see all the decrements to joins() and avoid suspending
    // the coroutine if possible. Cannot fetch_sub() here and write to frame
    // as coroutine must be suspended first.
    auto joined = k_u16_max - self->load_joins(std::memory_order_acquire);

    if (self->load_steals() == joined) {
      LF_LOG("Sync is ready");
      take_stack_reset_frame();
      return true;
    }

    LF_LOG("Sync not ready");
    return false;
  }

  /**
   * @brief Mark at join point then yield to scheduler or resume if children are done.
   */
  auto await_suspend(std::coroutine_handle<> task) const noexcept -> std::coroutine_handle<> {
    // Currently        joins  = k_u16_max  - num_joined
    // We set           joins  = joins()    - (k_u16_max - num_steals)
    //                         = num_steals - num_joined

    // Hence               joined = k_u16_max - num_joined
    //         k_u16_max - joined = num_joined

    auto steals = self->load_steals();
    auto joined = self->fetch_sub_joins(k_u16_max - steals, std::memory_order_release);

    if (steals == k_u16_max - joined) {
      // We set joins after all children had completed therefore we can resume the task.
      // Need to acquire to ensure we see all writes by other threads to the result.
      std::atomic_thread_fence(std::memory_order_acquire);
      LF_LOG("Wins join race");
      take_stack_reset_frame();
      return task;
    }
    LF_LOG("Looses join race");

    // Someone else is responsible for running this task.
    // We cannot touch *this or deference self as someone may have resumed already!
    // We cannot currently own this stack (checking would violate above).

    // If no explicit scheduling then we must have an empty WSQ as we stole this task.

    // If explicit scheduling then we may have tasks on our WSQ if we performed a self-steal
    // in a switch awaitable. In this case we can/must do another self-steal.

    return try_self_stealing();
  }

  /**
   * @brief Propagate exceptions.
   */
  void await_resume() const {
    LF_LOG("join resumes");
    // Check we have been reset.
    LF_ASSERT(self->load_steals() == 0);
    LF_ASSERT_NO_ASSUME(self->load_joins(std::memory_order_acquire) == k_u16_max);
    LF_ASSERT(self->stacklet() == tls::stack()->top());

    self->unsafe_rethrow_if_exception();
  }

  /**
   * @brief The frame of the awaiting coroutine.
   */
  frame *self;
};

} // namespace lf::impl

#endif /* CF3E6AC4_246A_4131_BF7A_FE5CD641A19B */

 // for call_awaitable  // for combinate      // for frame    // for immovable, unqualified       // for callable, async_result_t           // for LF_STATIC_CALL, LF_STATIC_CONST, LF_DEPRECAT...             // for tag, none            // for returnable

/**
 * @file just.hpp
 *
 * @brief Implementation of immediate invocation wrapper.
 */

namespace lf {

namespace impl {

/**
 * @brief A base class that provides a ``ret`` member.
 */
template <returnable R>
struct just_awaitable_base : immovable<just_awaitable_base<R>> {
  /**
   * @brief The return variable.
   */
  [[no_unique_address]] try_eventually<R> ret;
};

/**
 * @brief An awaitable that triggers a call + join.
 */
template <returnable R>
class [[nodiscard("co_await this!")]] just_awaitable : just_awaitable_base<R>, call_awaitable {

  // clang-format off

 public:
 /**
  * @brief Construct a new just awaitable binding the return address to an internal member.
  */
  template <async_function_object F, typename... Args>
    requires callable<F, Args...>
  explicit just_awaitable(F &&fun, Args &&...args)
      : call_awaitable{
            {}, 
            combinate<tag::call, modifier::none>(&this->ret, std::forward<F>(fun))(std::forward<Args>(args)...)
        } 
      {}

  // clang-format on

  /**
   * @brief Access the frame of the child task.
   */
  auto frame() const noexcept -> frame * { return this->child.get(); }

  using call_awaitable::await_ready;

  using call_awaitable::await_suspend;

  /**
   * @brief Return the result of the asynchronous function or rethrow the exception.
   */
  auto await_resume() -> R {

    if (this->ret.has_exception()) {
      std::rethrow_exception(std::move(this->ret).exception());
    }

    if constexpr (!std::is_void_v<R>) {
      return *std::move(this->ret);
    }
  }
};

/**
 * @brief A wrapper around a returned value that will be passed through an `co_await`.
 */
template <typename T>
struct [[nodiscard("co_await this!")]] just_wrapped : std::suspend_never {
  /**
   * @brief Forward the result.
   */
  constexpr auto await_resume() noexcept -> T && {
    if constexpr (std::is_lvalue_reference_v<T>) {
      return val;
    } else {
      return std::move(val);
    }
  }
  /**
   * @brief The value to be forwarded.
   */
  [[no_unique_address]] T val;
};

/**
 * @brief Void specialization of ``just_wrapped``.
 */
template <>
struct just_wrapped<void> : std::suspend_never {};

namespace detail {

template <class>
struct some_just_impl : std::false_type {};

template <class T>
struct some_just_impl<just_awaitable<T>> : std::true_type {};

template <class T>
struct some_just_impl<just_wrapped<T>> : std::true_type {};

} // namespace detail

/**
 * @brief Test if a type is a ``just_awaitable`` or ``just_wrapped`` specialization.
 */
template <class T>
concept some_just = detail::some_just_impl<std::remove_cvref_t<T>>::value;

/**
 * @brief A wrapper that supplies an async function with a call operator.
 */
template <unqualified F>
struct [[nodiscard("This should be immediately invoked!")]] call_just {
  /**
   * @brief Make an awaitable that will call the async function then immediately join.
   */
  template <typename... Args>
    requires callable<F, Args...>
  auto operator()(Args &&...args) && -> just_awaitable<async_result_t<F, Args...>> {
    return just_awaitable<async_result_t<F, Args...>>(std::move(fun), std::forward<Args>(args)...);
  }
  /**
   * @brief Immediately invoke a regular function and wrap the result in an awaitable class.
   */
  template <typename... Args>
    requires std::invocable<F, Args...> && (!callable<F, Args...>)
  auto operator()(Args &&...args) && -> just_wrapped<std::invoke_result_t<F, Args...>> {
    if constexpr (std::is_void_v<std::invoke_result_t<F, Args...>>) {
      std::invoke(std::move(fun), std::forward<Args>(args)...);
      return {};
    } else {
      return {{}, std::invoke(std::move(fun), std::forward<Args>(args)...)};
    }
  }
  /**
   * @brief The async or regular function.
   */
  [[no_unique_address]] F fun;
};

/**
 * @brief An invocable (and subscriptable) wrapper that makes an async function object immediately callable.
 */
struct bind_just {
  /**
   * @brief Make an async function object immediate callable.
   *
   * We use `std::decay_t` here as `F` may be a reference to function pointer.
   *
   * @return A functor, that will return an awaitable (in an ``lf::task``), that will trigger a call + join.
   */
  template <typename F>
    requires std::constructible_from<std::decay_t<F>, F>
  LF_DEPRECATE_CALL LF_STATIC_CALL auto operator()(F &&fun) LF_STATIC_CONST->call_just<std::decay_t<F>> {
    return {std::forward<F>(fun)};
  }

#if defined(__cpp_multidimensional_subscript) && __cpp_multidimensional_subscript >= 202211L
  /**
   * @brief Set a void return address for an asynchronous function.
   *
   * We use `std::decay_t` here as `F` may be a reference to function pointer.
   *
   * @return A functor, that will return an awaitable (in an ``lf::task``), that will trigger a call + join.
   */
  template <typename F>
    requires std::constructible_from<std::decay_t<F>, F>
  LF_STATIC_CALL auto operator[](F &&fun) LF_STATIC_CONST->call_just<std::decay_t<F>> {
    return {std::forward<F>(fun)};
  }
#endif
};

} // namespace impl

inline namespace core {

/**
 * @brief A second-order functor, produces an awaitable (in an ``lf::task``) that will trigger a call + join.
 */
inline constexpr impl::bind_just just = {};

} // namespace core

} // namespace lf

#endif /* DE1C62F1_949F_48DC_BC2C_960C4439332D */



#ifndef DE9399DB_593B_4C5C_A9D7_89B9F2FAB920
#define DE9399DB_593B_4C5C_A9D7_89B9F2FAB920

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <bit>       // for bit_cast
#include <coroutine> // for coroutine_handle
 // for full_context // for submit_t, submit_handle, task_handle    // for for_each_elem     // for stack, context  // for frame  // for stack       // for LF_ASSERT_NO_ASSUME, LF_LOG, LF_ASSERT, LF_STATI...

/**
 * @file resume.hpp
 *
 * @brief Functions to resume stolen and submitted task.
 */

namespace lf {

inline namespace ext {

/**
 * @brief Resume a collection of tasks at a submission point.
 *
 * This thread must be the worker thread that the tasks were submitted to.
 */
inline void resume(submit_handle ptr) {
  for_each_elem(ptr, [](impl::submit_t *raw) LF_STATIC_CALL {
    //
    LF_LOG("Call to resume on submitted task");

    auto *frame = std::bit_cast<impl::frame *>(raw);

    if (frame->load_steals() == 0) {
      impl::stack *stack = impl::tls::stack();
      LF_ASSERT(stack->empty());
      *stack = impl::stack{frame->stacklet()};
    } else {
      LF_ASSERT_NO_ASSUME(impl::tls::stack()->empty());
    }

    LF_ASSERT_NO_ASSUME(impl::tls::context()->empty());
    frame->self().resume();
    LF_ASSERT_NO_ASSUME(impl::tls::context()->empty());
    LF_ASSERT_NO_ASSUME(impl::tls::stack()->empty());
  });
}

/**
 * @brief Resume a stolen task.
 *
 * This thread must be a worker thread.
 */
inline void resume(task_handle ptr) {

  LF_LOG("Call to resume on stolen task");

  auto *frame = std::bit_cast<impl::frame *>(ptr);

  frame->fetch_add_steal();

  LF_ASSERT_NO_ASSUME(impl::tls::context()->empty());
  LF_ASSERT_NO_ASSUME(impl::tls::stack()->empty());
  frame->self().resume();
  LF_ASSERT_NO_ASSUME(impl::tls::context()->empty());
  LF_ASSERT_NO_ASSUME(impl::tls::stack()->empty());
}

} // namespace ext

} // namespace lf

#endif /* DE9399DB_593B_4C5C_A9D7_89B9F2FAB920 */



#ifndef C854CDE9_1125_46E1_9E2A_0B0006BFC135
#define C854CDE9_1125_46E1_9E2A_0B0006BFC135

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <atomic>      // for atomic_thread_fence, memory_order_acquire
#include <bit>         // for bit_cast
#include <coroutine>   // for coroutine_handle, noop_coroutine, coroutine_...
#include <cstddef>     // for size_t
#include <type_traits> // for true_type, false_type, remove_cvref_t
#include <utility>     // for forward
        // for co_allocable, co_new_t    // for join_type      // for stash_exception_in_return     // for full_context     // for submit_t, task_handle         // for stack, context       // for first_arg_t, async_function_object, first_arg // for alloc_awaitable, call_awaitable, context_swi...  // for quasi_awaitable      // for frame
#ifndef A896798B_7E3B_4854_9997_89EA5AE765EB
#define A896798B_7E3B_4854_9997_89EA5AE765EB

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts> // for convertible_to
#include <iterator> // for indirectly_writable
#include <utility>  // for forward
    // for stash_exception_in_return     // for quasi_pointer // for safe_ref_bind_to     // for return_address_for, discard_t          // for returnable

/**
 * @file return.hpp
 *
 * @brief A promise base class that provides the `return_value` method(s).
 */

namespace lf::impl {

/**
 * @brief A helper class that stores a quasi_pointer.
 */
template <quasi_pointer I>
class return_result_base {
 public:
  /**
   * @brief Set the return pointer.
   */
  void set_return(I &&ret) noexcept { this->m_ret = std::move(ret); }

  /**
   * @brief Get a reference to the return pointer.
   */
  [[nodiscard]] auto get_return() noexcept -> I & { return this->m_ret; }

 private:
  /**
   * @brief The stored quasi-pointer.
   */
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
      *(this->get_return()) = std::forward<U>(value);
    } else {
      *(this->get_return()) = static_cast<R>(std::forward<U>(value));
    }
  }

  /**
   * @brief For use with `co_return {expr}`
   */
  void return_value(R &&value) { *(this->get_return()) = std::move(value); }
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
    *(this->get_return()) = std::forward<U>(ref);
  }
};

/**
 * @brief Case for void return with a stash_exception_in_return
 */
template <stash_exception_in_return I>
struct return_result<void, I> : return_result_base<I> {
  /**
   * @brief A no-op.
   */
  static constexpr void return_void() noexcept {}
};

/**
 * @brief Case for void return.
 */
template <>
struct return_result<void, discard_t> {
  /**
   * @brief A no-op.
   */
  static constexpr void return_void() noexcept {}
};

} // namespace lf::impl

#endif /* A896798B_7E3B_4854_9997_89EA5AE765EB */

     // for return_result      // for stack    // for byte_cast, k_u16_max       // for return_address_for, ignore_t            // for just_awaitable, just_wrapped           // for LF_LOG, LF_ASSERT, LF_FORCEINLINE, LF_ASSERT...       // for context_switcher             // for tag            // for returnable, task

/**
 * @file promise.hpp
 *
 * @brief The promise type for all tasks/coroutines.
 */

namespace lf::impl {

namespace detail {

inline auto final_await_suspend(frame *parent) noexcept -> std::coroutine_handle<> {

  full_context *context = tls::context();

  if (task_handle parent_task = context->pop()) {
    // No-one stole continuation, we are the exclusive owner of parent, just keep ripping!
    LF_LOG("Parent not stolen, keeps ripping");
    LF_ASSERT(byte_cast(parent_task) == byte_cast(parent));
    // This must be the same thread that created the parent so it already owns the stack.
    // No steals have occurred so we do not need to call reset().;
    return parent->self();
  }

  /**
   * An owner is a worker who:
   *
   * - Created the task.
   * - Had the task submitted to them.
   * - Won the task at a join.
   *
   * An owner of a task owns the stack the task is on.
   *
   * As the worker who completed the child task this thread owns the stack the child task was on.
   *
   * Either:
   *
   * 1. The parent is on the same stack as the child.
   * 2. The parent is on a different stack to the child.
   *
   * Case (1) implies: we owned the parent; forked the child task; then the parent was then stolen.
   * Case (2) implies: we stole the parent task; then forked the child; then the parent was stolen.
   *
   * In case (2) the workers stack has no allocations on it.
   */

  LF_LOG("Task's parent was stolen");

  stack *tls_stack = tls::stack();

  stack::stacklet *p_stacklet = parent->stacklet(); //
  stack::stacklet *c_stacklet = tls_stack->top();   // Need to call while we own tls_stack.

  // Register with parent we have completed this child task, this may release ownership of our stack.
  if (parent->fetch_sub_joins(1, std::memory_order_release) == 1) {
    // Acquire all writes before resuming.
    std::atomic_thread_fence(std::memory_order_acquire);

    // Parent has reached join and we are the last child task to complete.
    // We are the exclusive owner of the parent therefore, we must continue parent.

    LF_LOG("Task is last child to join, resumes parent");

    if (p_stacklet != c_stacklet) {
      // Case (2), the tls_stack has no allocations on it.

      LF_ASSERT(tls_stack->empty());

      // TODO: stack.splice()? Here the old stack is empty and thrown away, if it is larger
      // then we could splice it onto the parents one? Or we could attempt to cache the old one.
      *tls_stack = stack{p_stacklet};
    }

    // Must reset parents control block before resuming parent.
    parent->reset();

    return parent->self();
  }

  // We did not win the join-race, we cannot deference the parent pointer now as
  // the frame may now be freed by the winner.

  // Parent has not reached join or we are not the last child to complete.
  // We are now out of jobs, must yield to executor.

  LF_LOG("Task is not last to join");

  if (p_stacklet == c_stacklet) {
    // We are unable to resume the parent and where its owner, as the resuming
    // thread will take ownership of the parent's we must give it up.
    LF_LOG("Thread releases control of parent's stack");

    // If this throw an exception then the worker must die as it does not have a stack.
    // Hence, program termination is appropriate.
    ignore_t{} = tls_stack->release();

  } else {
    // Case (2) the tls_stack has no allocations on it, it may be used later.
  }

  return std::noop_coroutine();
}

} // namespace detail

/**
 * @brief Type independent bits
 */
struct promise_base : frame {

  /**
   * @brief Inherit constructor.
   */
  using frame::frame;

  /**
   * @brief Allocate the coroutine on a new stack.
   */
  LF_FORCEINLINE static auto operator new(std::size_t size) -> void * { return tls::stack()->allocate(size); }

  /**
   * @brief Deallocate the coroutine from current `stack`s stack.
   */
  LF_FORCEINLINE static void operator delete(void *ptr) noexcept { tls::stack()->deallocate(ptr); }

  /**
   * @brief Assert destroyed by the correct thread.
   */
  ~promise_base() noexcept { LF_ASSERT(tls::stack()->top() == stacklet()); }

  /**
   * @brief Start suspended (lazy).
   */
  static auto initial_suspend() noexcept -> std::suspend_always { return {}; }

  // -------------------------------------------------------------- //

  /**
   * @brief Make an awaitable that allocates on this workers stack.
   */
  template <co_allocable T>
  auto await_transform(co_new_t<T> await) noexcept {
    return alloc_awaitable<T>{{}, await, this};
  }

  // -------------------------------------------------------------- //

  /**
   * @brief Transform a context_switch awaitable into a real awaitable.
   */
  template <class A>
    requires (!some_just<A>) && context_switcher<A>
  auto await_transform(A &&await) {

    auto *submit = std::bit_cast<impl::submit_t *>(static_cast<frame *>(this));

    using awaitable = context_switch_awaitable<std::remove_cvref_t<A>>;

    return awaitable{std::forward<A>(await), submit_node_t{submit}};
  }

  // -------------------------------------------------------------- //

  /**
   * @brief Get a join awaitable.
   */
  auto await_transform(join_type /*unused*/) noexcept -> join_awaitable { return {this}; }

  // -------------------------------------------------------------- //

  /**
   * @brief Transform a call packet into a call awaitable.
   */
  template <returnable R, return_address_for<R> I, tag Tag, modifier_for<Tag> Mod>
    requires (Tag == tag::call || Tag == tag::fork)
  auto await_transform(quasi_awaitable<R, I, Tag, Mod> &&awaitable) noexcept {

    awaitable->set_parent(this);

    constexpr bool throwing = stash_exception_in_return<I>;

    using enum region;

    if constexpr (Tag == tag::call) {
      if /*  */ constexpr (throwing && std::same_as<Mod, modifier::eager_throw>) {
        return eager_call_awaitable<unknown>{{{}, std::move(awaitable)}, this};
      } else if constexpr (throwing && std::same_as<Mod, modifier::eager_throw_outside>) {
        return eager_call_awaitable<outside>{{{}, std::move(awaitable)}, this};
      } else {
        return call_awaitable{{}, std::move(awaitable)};
      }
    }

    if constexpr (Tag == tag::fork) {
      if /*  */ constexpr (std::same_as<Mod, modifier::none>) {
        return fork_awaitable{{}, std::move(awaitable), this};
      } else if constexpr (std::same_as<Mod, modifier::sync>) {
        return sync_fork_awaitable<throwing, unknown>{{{}, std::move(awaitable), this}, this->load_steals()};
      } else if constexpr (std::same_as<Mod, modifier::sync_outside>) {
        return sync_fork_awaitable<throwing, opening_fork>{{{}, std::move(awaitable), this},
                                                           this->load_steals()};
      } else {
        static_assert(always_false<Mod>, "Unimplemented modifier for fork!");
      }
    }
  }

  // -------------------------------------------------------------- //

  /**
   * @brief Pass through a just awaitable.
   */
  template <returnable R>
  auto await_transform(just_awaitable<R> &&awaitable) noexcept -> just_awaitable<R> && {
    awaitable.frame()->set_parent(this);
    return std::move(awaitable);
  }

  /**
   * @brief Pass through a just awaitable.
   */
  template <returnable T>
  auto await_transform(just_wrapped<T> &&awaitable) noexcept -> just_wrapped<T> && {
    return std::move(awaitable);
  }
};

/**
 * @brief The promise type for all tasks/coroutines.
 *
 * @tparam R The type of the return address.
 * @tparam T The value type of the coroutine (what it promises to return).
 * @tparam Context The type of the context this coroutine is running on.
 * @tparam Tag The dispatch tag of the coroutine.
 */
template <returnable R, return_address_for<R> I, tag Tag>
struct promise : promise_base, return_result<R, I> {

  /**
   * @brief Construct a new promise object, delegate to main constructor.
   */
  template <typename This, first_arg Arg, typename... Args>
  promise(This const & /*unused*/, Arg const &arg, Args const &.../*unused*/) noexcept : promise(arg) {}

  /**
   * @brief Construct a new promise object.
   *
   * Stores a handle to the promise in the `frame` and loads the tls stack
   * and stores a pointer to the top fibril. Also sets the first argument's frame pointer.
   */
  template <first_arg Arg, typename... Args>
  explicit promise(Arg const &arg, Args const &.../*unused*/) noexcept
      : promise_base{std::coroutine_handle<promise>::from_promise(*this), tls::stack()->top()} {
    unsafe_set_frame(arg, this);
  }

  /**
   * @brief Returned task stores a copy of the `this` pointer.
   */
  auto get_return_object() noexcept -> task<R> { return {{}, unique_frame{this}}; }

  /**
   * @brief Try to resume the parent.
   */
  auto final_suspend() const noexcept {

    LF_LOG("At final suspend call");

    // Completing a non-root task means we currently own the stack_stack this child is on

    LF_ASSERT(this->load_steals() == 0);                                           // Fork without join.
    LF_ASSERT_NO_ASSUME(this->load_joins(std::memory_order_acquire) == k_u16_max); // Invalid state.
    LF_ASSERT(!this->unsafe_has_exception());                                      // Must have rethrown.

    return final_awaitable{};
  }

  /**
   * @brief Cache in parent's stacklet.
   */
  void unhandled_exception() noexcept {
    if constexpr (stash_exception_in_return<I>) {
      stash_exception(*(this->get_return()));
    } else if constexpr (Tag == tag::root) {
      // A root task has no parent so this exception will terminate the program.
      // We currently ensure this never happens so we have this static assert to
      // make sure.
      static_assert(always_false<I>, "Root task can't propagate exception!");
    } else {
      this->parent()->capture_exception();
    }
  }

 private:
  struct final_awaitable : std::suspend_always {
    static auto await_suspend(std::coroutine_handle<promise> child) noexcept -> std::coroutine_handle<> {

      if constexpr (Tag == tag::root) {

        LF_LOG("Root task at final suspend, releases semaphore and yields");

        child.promise().semaphore()->release();
        child.destroy();

        // A root task is always the first on a stack, now it has been completed the stack is empty.
        LF_ASSERT(tls::stack()->empty());

        return std::noop_coroutine();
      }

      LF_LOG("Task reaches final suspend, destroying child");

      frame *parent = child.promise().parent();
      child.destroy();

      if constexpr (Tag == tag::call) {
        LF_LOG("Inline task resumes parent");
        // Inline task's parent cannot have been stolen as its continuation was not
        // pushed to a queue hence, no need to reset control block. We do not
        // attempt to take the stack because stack-eats only occur at a sync point.
        return parent->self();
      }

      return detail::final_await_suspend(parent);
    }
  };
};

// -------------------------------------------------- //

/**
 * @brief A basic type list.
 */
template <typename...>
struct list {};

namespace detail {

/**
 * @brief All non-reference destinations are safe for most types.
 */
template <typename From, typename To>
struct safe_fork_t : std::false_type {
  static_assert(always_false<From, To>, "Unsafe fork detected!");
};

/**
 * @brief Pass by value is (in general) safe.
 *
 * This may not hold if the type is a reference wrapper of some kind.
 */
template <typename From, typename To>
  requires (!std::is_reference_v<To>)
struct safe_fork_t<From, To> : std::true_type {};

/**
 * @brief l-value references are safe.
 */
template <typename From, typename To>
  requires std::convertible_to<From &, To &>
struct safe_fork_t<From &, To &> : std::true_type {};

/**
 * @brief Const promotion of l-value references is safe.
 */
template <typename From, typename To>
  requires std::convertible_to<From &, To &>
struct safe_fork_t<From &, To const &> : std::true_type {};

/**
 * @brief Triggers a static assert if a conversion may dangle.
 */
template <tag, typename, typename>
struct safe_fork : std::true_type {};

// General case.
template <typename From, typename... A, typename To, typename... B>
struct safe_fork<tag::fork, list<From, A...>, list<To, B...>> : safe_fork<tag::fork, list<A...>, list<B...>> {
  static_assert(safe_fork_t<From, To>::value);
};

/**
 * @brief Special case for defaulted arguments, can only check if they are r-values references.
 */
template <typename Head, typename... Tail>
struct safe_fork<tag::fork, list<>, list<Head, Tail...>> : safe_fork<tag::fork, list<>, list<Tail...>> {
  static_assert(!std::is_rvalue_reference_v<Head>, "Forked rvalue will dangle");
};

} // namespace detail

/**
 * @brief Triggers a static assert if a conversion may dangle.
 */
template <tag Tag, typename FromList, typename ToList>
inline constexpr bool safe_fork_v = detail::safe_fork<Tag, FromList, ToList>::value;

} // namespace lf::impl

#ifndef LF_DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Specialize coroutine_traits for task<...> from member functions.
 *
 * We attach the `This` type to the back of the argument list, the terminal case will check
 * that it is not an r-value reference.
 */
template <lf::returnable R, typename This, lf::impl::first_arg_specialization Head, typename... Tail>
struct std::coroutine_traits<lf::task<R>, This, Head, Tail...>
    : std::coroutine_traits<lf::task<R>, Head, Tail..., This> {};

/**
 * @brief Specialize coroutine_traits for task<...> that removes `const` from the first arg.
 */
template <lf::returnable R, lf::impl::first_arg_specialization Head, typename... Tail>
  requires std::is_const_v<Head>
struct std::coroutine_traits<lf::task<R>, Head, Tail...>
    : std::coroutine_traits<lf::task<R>, std::remove_const_t<Head>, Tail...> {};

  #if defined(__GNUC__) && !defined(__clang__) && __GNUC__ < 13
    // Old GCC has problems with subsumption of std::is_const_v<Head> && std::is_reference_v<Head>
  #else
/**
 * @brief Specialize coroutine_traits for task<...> for reference first arguments.
 *
 * This is a hard-error as the first argument must be passed by value.
 */
template <lf::returnable R, lf::impl::first_arg_specialization Head, typename... Tail>
  requires std::is_reference_v<Head>
struct std::coroutine_traits<lf::task<R>, Head, Tail...> {
  static_assert(lf::impl::always_false<R, Head, Tail...>, "The first arg must be passed by value!");
};
  #endif

/**
 * @brief Specialize coroutine_traits for task<...>.
 *
 * This handles defaulted arguments in the `Args...` list and performs some static checks on `CallArgs...`.
 */
template <lf::returnable R,
          lf::impl::return_address_for<R> I,
          lf::tag Tag,
          lf::async_function_object F,
          typename... CallArgs,
          typename... Args>
struct std::coroutine_traits<lf::task<R>, lf::impl::first_arg_t<I, Tag, F, CallArgs...>, Args...> {
  // May have less if defaulted parameters are used.
  static_assert(sizeof...(CallArgs) <= sizeof...(Args));

  // This will trigger an inner static assert if an unsafe reference is forked.
  static_assert(lf::impl::safe_fork_v<Tag, lf::impl::list<CallArgs...>, lf::impl::list<Args...>>);

  using promise_type = lf::impl::promise<R, I, Tag>;
};

/**
 * @brief Specialize coroutine_traits for task<...> for bad invocations.
 *
 * This is a hard-error as the coroutine is being invoked directly with the wrong first-argument.
 */
template <lf::returnable R, typename... Args>
struct std::coroutine_traits<lf::task<R>, Args...> {
  static_assert(lf::impl::always_false<R, Args...>, "Don't invoke a coroutine directly!");
};

#endif

#endif /* C854CDE9_1125_46E1_9E2A_0B0006BFC135 */



/**
 * @file core.hpp
 *
 * @brief Meta header which includes all the headers in ``libfork/core``.
 *
 * This header is a single include which provides the minimal set of headers required
 * for using `libfork` s "core" API. If you are writing your own schedulers and not using any
 * of `libfork` s "extension" API then this is all you need.
 */

#endif /* A6BE090F_9077_40E8_9B57_9BAFD9620469 */


#ifndef A616E976_A92A_4CE4_B807_936EF8C5FBC4
#define A616E976_A92A_4CE4_B807_936EF8C5FBC4

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef B5AE1829_6F8A_4118_AB15_FE73F851271F
#define B5AE1829_6F8A_4118_AB15_FE73F851271F

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <atomic>  // for atomic_flag, memory_order_acquire, mem...
#include <cstddef> // for size_t, ptrdiff_t
#include <latch>   // for latch
#include <memory>  // for shared_ptr, __shared_ptr_access, make_...
#include <random>  // for random_device, uniform_int_distribution
#include <span>    // for span
#include <thread>  // for thread
#include <utility> // for move
#include <vector>  // for vector
                 // for LF_DEFER           // for worker_context, nullary_function_t           // for submit_handle, task_handle            // for resume          // for checked_cast, k_cache_line                 // for LF_ASSERT, LF_ASSERT_NO_ASSUME, LF_LOG             // for scheduler
#ifndef D8877F11_1F66_4AD0_B949_C0DFF390C2DB
#define D8877F11_1F66_4AD0_B949_C0DFF390C2DB

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <algorithm> // for max
#include <cerrno>    // for ENOSYS, EXDEV, errno
#include <climits>   // for INT_MAX
#include <cstddef>   // for size_t
#include <iterator>  // for distance
#include <map>       // for map, operator==
#include <memory>    // for shared_ptr, operator==, unique_ptr
#include <set>       // for set
#include <stdexcept> // for runtime_error
#include <utility>   // for move
#include <vector>    // for vector
 // for map        // for LF_ASSERT, LF_STATIC_CALL, LF_STATIC_CONST

/**
 * @file numa.hpp
 *
 * @brief An abstraction over `hwloc`.
 */

#ifdef __has_include
  #if defined(LF_USE_HWLOC) && not __has_include(<hwloc.h>)
    #error "LF_USE_HWLOC is defined but <hwloc.h> is not available"
  #endif
#endif

#ifdef LF_USE_HWLOC
  #include <hwloc.h> // for hwloc_obj, hwloc_obj_t, hwl...
#endif

#ifdef LF_USE_HWLOC
static_assert(HWLOC_VERSION_MAJOR == 2, "hwloc too old");
#endif

/**
 * @brief An opaque description of a set of processing units.
 *
 * \rst
 *
 * .. note::
 *
 *    If your system is missing `hwloc` then this type will be incomplete.
 *
 * \endrst
 */
struct hwloc_bitmap_s;
/**
 * @brief An opaque description of a computers topology.
 *
 * \rst
 *
 * .. note::
 *
 *    If your system is missing `hwloc` then this type will be incomplete.
 *
 * \endrst
 */
struct hwloc_topology;

namespace lf {

inline namespace ext {

/**
 * @brief Returns `true` if libfork is using `hwloc` and numa support is enabled.
 */
inline auto hwloc_numa_support() -> bool {
#ifdef LF_USE_HWLOC
  return true;
#else
  return false;
#endif
}

// ------------- hwloc can go wrong in a lot of ways... ------------- //

/**
 * @brief An exception thrown when `hwloc` fails.
 */
struct hwloc_error : std::runtime_error {
  using std::runtime_error::runtime_error;
};

// ------------------------------ Topology decl ------------------------------
// //

/**
 * @brief Enum to control distribution strategy of workers among numa nodes.
 */
enum class numa_strategy {
  /**
   * @brief Put workers as far away from each other as possible (maximize cache.)
   */
  fan,
  /**
   * @brief Fill up each numa node sequentially (ignoring SMT).
   */
  seq,
};

/**
 * @brief A shared description of a computers topology.
 *
 * Objects of this type have shared-pointer semantics.
 */
class numa_topology {

  struct bitmap_deleter {
    LF_STATIC_CALL void operator()(hwloc_bitmap_s *ptr) LF_STATIC_CONST noexcept {
#ifdef LF_USE_HWLOC
      hwloc_bitmap_free(ptr);
#else
      LF_ASSERT(!ptr);
#endif
    }
  };

  using unique_cpup = std::unique_ptr<hwloc_bitmap_s, bitmap_deleter>;

  using shared_topo = std::shared_ptr<hwloc_topology>;

 public:
  /**
   * @brief Construct a topology.
   *
   * If `hwloc` is not installed this topology is empty.
   */
  numa_topology();

  /**
   * @brief Test if this topology is empty.
   */
  explicit operator bool() const noexcept { return m_topology != nullptr; }

  /**
   * A handle to a single processing unit in a NUMA computer.
   */
  class numa_handle {
   public:
    /**
     * @brief Bind the calling thread to the set of processing units in this `cpuset`.
     *
     * If `hwloc` is not installed both handles are null and this is a noop.
     */
    void bind() const;

    /**
     * @brief A shared handle to topology this handle belongs to.
     */
    shared_topo topo = nullptr;
    /**
     * @brief A unique handle to processing units that this handle represents.
     */
    unique_cpup cpup = nullptr;
    /**
     * @brief  The index of the numa node this handle belongs to, on [0, n).
     */
    std::size_t numa = 0;
  };

  /**
   * @brief Split a topology into `n` uniformly distributed handles to single
   * processing units.
   *
   * Here the definition of "uniformly" depends on `strategy`. If `strategy == numa_strategy::seq` we try
   * to use the minimum number of numa nodes then divided each node such that each PU has as much cache as
   * possible. If `strategy == numa_strategy::fan` we try and maximize the amount of cache each PI gets.
   *
   * If this topology is empty then this function returns a vector of `n` empty handles.
   */
  auto split(std::size_t n, numa_strategy strategy = numa_strategy::fan) const -> std::vector<numa_handle>;

  /**
   * @brief A single-threads hierarchical view of a set of objects.
   *
   * This is a `numa_handle` augmented with  list of neighbors-lists each
   * neighbors-list has equidistant neighbors. The first neighbors-list always
   * exists and contains only one element, the one "owned" by the thread. Each
   * subsequent neighbors-list has elements that are topologically more distant
   * from the element in the first neighbour-list.
   */
  template <typename T>
  struct numa_node : numa_handle {
    /**
     * @brief A list of neighbors-lists.
     */
    std::vector<std::vector<std::shared_ptr<T>>> neighbors;
  };

  /**
   * @brief Distribute a vector of objects over this topology.
   *
   * This function returns a vector of `numa_node`s. Each `numa_node` contains a
   * hierarchical view of the elements in `data`.
   */
  template <typename T>
  auto distribute(std::vector<std::shared_ptr<T>> const &data, numa_strategy strategy = numa_strategy::fan)
      -> std::vector<numa_node<T>>;

 private:
  shared_topo m_topology = nullptr;
};

// ---------------------------- Topology implementation ---------------------------- //

#ifdef LF_USE_HWLOC

inline numa_topology::numa_topology() {

  struct topology_deleter {
    LF_STATIC_CALL void operator()(hwloc_topology *ptr) LF_STATIC_CONST noexcept {
      if (ptr != nullptr) {
        hwloc_topology_destroy(ptr);
      }
    }
  };

  hwloc_topology *tmp = nullptr;

  if (hwloc_topology_init(&tmp) != 0) {
    LF_THROW(hwloc_error{"failed to initialize a topology"});
  }

  m_topology = {tmp, topology_deleter{}};

  if (hwloc_topology_load(m_topology.get()) != 0) {
    LF_THROW(hwloc_error{"failed to load a topology"});
  }
}

inline void numa_topology::numa_handle::bind() const {

  LF_ASSERT(topo);
  LF_ASSERT(cpup);

  switch (hwloc_set_cpubind(topo.get(), cpup.get(), HWLOC_CPUBIND_THREAD)) {
    case 0:
      return;
    case -1:
      switch (errno) {
        case ENOSYS:
          LF_THROW(hwloc_error{"hwloc's cpu binding is not supported on this system"});
        case EXDEV:
          LF_THROW(hwloc_error{"hwloc cannot enforce the requested binding"});
        default:
          LF_THROW(hwloc_error{"hwloc cpu bind reported an unknown error"});
      }
    default:
      LF_THROW(hwloc_error{"hwloc cpu bind returned un unexpected value"});
  }
}

inline auto count_cores(hwloc_obj_t obj) -> unsigned int {

  LF_ASSERT(obj);

  if (obj->type == HWLOC_OBJ_CORE) {
    return 1;
  }

  unsigned int num_cores = 0;

  for (unsigned int i = 0; i < obj->arity; i++) {
    num_cores += count_cores(obj->children[i]);
  }

  return num_cores;
}

inline auto get_numa_index(hwloc_topology *topo, hwloc_bitmap_s *bitmap) -> hwloc_uint64_t {

  LF_ASSERT(topo);
  LF_ASSERT(bitmap);

  hwloc_obj *obj = hwloc_get_obj_covering_cpuset(topo, bitmap);

  if (obj == nullptr) {
    LF_THROW(hwloc_error{"failed to find an object covering a bitmap"});
  }

  while (obj != nullptr && obj->memory_arity == 0) {
    obj = obj->parent;
  }

  if (obj == nullptr) {
    LF_THROW(hwloc_error{"failed to find a parent with memory"});
  }

  return obj->gp_index;
}

inline auto numa_topology::split(std::size_t n, numa_strategy strategy) const -> std::vector<numa_handle> {

  if (n < 1) {
    LF_THROW(hwloc_error{"hwloc cannot distribute over less than one singlet"});
  }

  // We are going to build up a list of numa packages until we have enough cores.

  std::vector<hwloc_obj_t> roots;

  if (strategy == numa_strategy::seq) {

    hwloc_obj_t numa = nullptr;

    for (unsigned int count = 0; count < n; count += count_cores(numa)) {

      hwloc_obj_t next_numa = hwloc_get_next_obj_by_type(m_topology.get(), HWLOC_OBJ_PACKAGE, numa);

      if (next_numa == nullptr) {
        break;
      }

      roots.push_back(next_numa);
      numa = next_numa;
    }
  } else {
    roots.push_back(hwloc_get_root_obj(m_topology.get()));
  }

  // Now we distribute over the cores in each numa package, NOTE:  hwloc_distrib
  // gives us owning pointers (not in the docs, but it does!).

  std::vector<hwloc_bitmap_s *> sets(n, nullptr);

  auto r_size = static_cast<unsigned int>(roots.size());
  auto s_size = static_cast<unsigned int>(sets.size());

  if (hwloc_distrib(m_topology.get(), roots.data(), r_size, sets.data(), s_size, INT_MAX, 0) != 0) {
    LF_THROW(hwloc_error{"unknown hwloc error when distributing over a topology"});
  }

  // Need ownership before map for exception safety.
  std::vector<unique_cpup> singlets{sets.begin(), sets.end()};

  std::map<hwloc_uint64_t, std::size_t> numa_map;

  return impl::map(std::move(singlets), [&](unique_cpup &&singlet) -> numa_handle {
    //
    if (!singlet) {
      LF_THROW(hwloc_error{"hwloc_distrib returned a nullptr"});
    }

    if (hwloc_bitmap_singlify(singlet.get()) != 0) {
      LF_THROW(hwloc_error{"unknown hwloc error when singlify a bitmap"});
    }

    hwloc_uint64_t numa_index = get_numa_index(m_topology.get(), singlet.get());

    if (!numa_map.contains(numa_index)) {
      numa_map[numa_index] = numa_map.size();
    }

    return {
        m_topology,
        std::move(singlet),
        numa_map[numa_index],
    };
  });
}

} // namespace ext

namespace impl::detail {

class distance_matrix {

  using numa_handle = numa_topology::numa_handle;

 public:
  /**
   * @brief Compute the topological distance between all pairs of objects in
   * `obj`.
   */
  explicit distance_matrix(std::vector<numa_handle> const &handles)
      : m_size{handles.size()},
        m_matrix(m_size * m_size) {

    // Transform into hwloc's internal representation of nodes in the topology tree.

    std::vector obj = impl::map(handles, [](numa_handle const &handle) -> hwloc_obj_t {
      return hwloc_get_obj_covering_cpuset(handle.topo.get(), handle.cpup.get());
    });

    for (auto *elem : obj) {
      if (elem == nullptr) {
        LF_THROW(hwloc_error{"failed to find an object covering a handle"});
      }
    }

    // Build the matrix.

    for (std::size_t i = 0; i < obj.size(); i++) {
      for (std::size_t j = 0; j < obj.size(); j++) {

        auto *topo_1 = handles[i].topo.get();
        auto *topo_2 = handles[j].topo.get();

        if (topo_1 != topo_2) {
          LF_THROW(hwloc_error{"numa_handles are in different topologies"});
        }

        hwloc_obj_t ancestor = hwloc_get_common_ancestor_obj(topo_1, obj[i], obj[j]);

        if (ancestor == nullptr) {
          LF_THROW(hwloc_error{"failed to find a common ancestor"});
        }

        int dist_1 = obj[i]->depth - ancestor->depth;
        int dist_2 = obj[j]->depth - ancestor->depth;

        LF_ASSERT(dist_1 >= 0);
        LF_ASSERT(dist_2 >= 0);

        m_matrix[i * m_size + j] = std::max(dist_1, dist_2);
      }
    }
  }

  auto operator()(std::size_t i, std::size_t j) const noexcept -> int { return m_matrix[i * m_size + j]; }

  auto size() const noexcept -> std::size_t { return m_size; }

 private:
  std::size_t m_size;
  std::vector<int> m_matrix;
};

} // namespace impl::detail

inline namespace ext {

template <typename T>
inline auto numa_topology::distribute(std::vector<std::shared_ptr<T>> const &data, numa_strategy strategy)
    -> std::vector<numa_node<T>> {

  std::vector handles = split(data.size(), strategy);

  // Compute the topological distance between all pairs of objects.

  impl::detail::distance_matrix dist{handles};

  std::vector<numa_node<T>> nodes = impl::map(std::move(handles), [](numa_handle &&handle) -> numa_node<T> {
    return {std::move(handle), {}};
  });

  // Compute the neighbors-lists.

  for (std::size_t i = 0; i < nodes.size(); i++) {

    std::set<int> uniques;

    for (std::size_t j = 0; j < nodes.size(); j++) {
      if (i != j) {
        uniques.insert(dist(i, j));
      }
    }

    nodes[i].neighbors.resize(1 + uniques.size());

    for (std::size_t j = 0; j < nodes.size(); j++) {
      if (i == j) {
        nodes[i].neighbors[0].push_back(data[j]);
      } else {
        auto idx = std::distance(uniques.begin(), uniques.find(dist(i, j)));
        LF_ASSERT(idx >= 0);
        nodes[i].neighbors[1 + static_cast<std::size_t>(idx)].push_back(data[j]);
      }
    }
  }

  return nodes;
}

#else

inline numa_topology::numa_topology()
    : m_topology{nullptr, [](hwloc_topology *ptr) {
                   LF_ASSERT(!ptr);
                 }} {}

inline void numa_topology::numa_handle::bind() const {
  LF_ASSERT(!topo);
  LF_ASSERT(!cpup);
}

inline auto
numa_topology::split(std::size_t n, numa_strategy /* strategy */) const -> std::vector<numa_handle> {
  return std::vector<numa_handle>(n);
}

template <typename T>
inline auto numa_topology::distribute(std::vector<std::shared_ptr<T>> const &data, numa_strategy strategy)
    -> std::vector<numa_node<T>> {

  std::vector<numa_handle> handles = split(data.size(), strategy);

  std::vector<numa_node<T>> views;

  for (std::size_t i = 0; i < data.size(); i++) {

    numa_node<T> node{
        std::move(handles[i]), {{data[i]}}, // The first neighbors-list contains
                                            // only the object itself.
    };

    if (data.size() > 1) {
      node.neighbors.push_back({});
    }

    for (auto const &neigh : data) {
      if (neigh != data[i]) {
        node.neighbors[1].push_back(neigh);
      }
    }

    views.push_back(std::move(node));
  }

  return views;
}

#endif

} // namespace ext

} // namespace lf

#endif /* D8877F11_1F66_4AD0_B949_C0DFF390C2DB */

          // for numa_strategy, numa_topology
#ifndef CA0BE1EA_88CD_4E63_9D89_37395E859565
#define CA0BE1EA_88CD_4E63_9D89_37395E859565

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <array>       // for array
#include <concepts>    // for same_as
#include <cstdint>     // for uint64_t
#include <functional>  // for invoke
#include <limits>      // for numeric_limits
#include <random>      // for uniform_int_distribution, uniform_random_bit_generator
#include <type_traits> // for remove_cvref_t, invoke_result_t, remove_reference_t

/**
 * \file random.hpp
 *
 * @brief Pseudo random number generators (PRNG).
 *
 * This implementation has been adapted from ``http://prng.di.unimi.it/xoshiro256starstar.c``
 */

namespace lf {

namespace impl {

/**
 * @brief A tag type to disambiguated seeding from other operations.
 */
struct seed_t {};

template <typename T>
concept has_result_type = requires { typename std::remove_cvref_t<T>::result_type; };

template <typename G>
concept uniform_random_bit_generator_help =                           //
    std::uniform_random_bit_generator<G> &&                           //
    impl::has_result_type<G> &&                                       //
    std::same_as<std::invoke_result_t<G &>, typename G::result_type>; //

} // namespace impl

inline namespace ext {

/**
 * @brief  A tag to disambiguate seeding from copy construction.
 */
inline constexpr impl::seed_t seed = {};

/**
 * @brief `Like std::uniform_random_bit_generator`, but also requires a nested `result_type`.
 */
template <typename G>
concept uniform_random_bit_generator = impl::uniform_random_bit_generator_help<std::remove_cvref_t<G>>;

/**
 * @brief A \<random\> compatible implementation of the xoshiro256** 1.0 PRNG
 *
 * \rst
 *
 * From `the original <https://prng.di.unimi.it/>`_:
 *
 * This is xoshiro256** 1.0, one of our all-purpose, rock-solid generators. It has excellent
 * (sub-ns) speed, a state (256 bits) that is large enough for any parallel application, and it
 * passes all tests we are aware of.
 *
 * \endrst
 */
class xoshiro {
 public:
  /**
   * @brief Required by named requirement: _UniformRandomBitGenerator_
   */
  using result_type = std::uint64_t;

  /**
   * @brief Construct a new xoshiro with a fixed default-seed.
   */
  constexpr xoshiro() = default;

  /**
   * @brief Construct and seed the PRNG.
   *
   * @param my_seed The PRNG's seed, must not be everywhere zero.
   */
  explicit constexpr xoshiro(std::array<result_type, 4> const &my_seed) noexcept : m_state{my_seed} {}

  /**
   * @brief Construct and seed the PRNG from some other generator.
   */
  template <uniform_random_bit_generator PRNG>
    requires (!std::is_const_v<std::remove_reference_t<PRNG &&>>)
#if __cpp_constexpr >= 202110L
  constexpr
#endif
      xoshiro(impl::seed_t, PRNG &&dev) noexcept {
    for (std::uniform_int_distribution<result_type> dist{min(), max()}; auto &elem : m_state) {
      elem = dist(dev);
    }
  }

  /**
   * @brief Get the minimum value of the generator.
   *
   * @return The minimum value that ``xoshiro::operator()`` can return.
   */
  [[nodiscard]] static constexpr auto min() noexcept -> result_type {
    return std::numeric_limits<result_type>::lowest();
  }

  /**
   * @brief Get the maximum value of the generator.
   *
   * @return The maximum value that ``xoshiro::operator()`` can return.
   */
  [[nodiscard]] static constexpr auto max() noexcept -> result_type {
    return std::numeric_limits<result_type>::max();
  }

  /**
   * @brief Generate a random bit sequence and advance the state of the generator.
   *
   * @return A pseudo-random number.
   */
  [[nodiscard]] constexpr auto operator()() noexcept -> result_type {

    result_type const result = rotl(m_state[1] * 5, 7) * 9;
    result_type const temp = m_state[1] << 17; // NOLINT

    m_state[2] ^= m_state[0];
    m_state[3] ^= m_state[1];
    m_state[1] ^= m_state[2];
    m_state[0] ^= m_state[3];

    m_state[2] ^= temp;

    m_state[3] = rotl(m_state[3], 45); // NOLINT (magic-numbers)

    return result;
  }

  /**
   * @brief This is the jump function for the generator.
   *
   * It is equivalent to 2^128 calls to operator(); it can be used to generate 2^128 non-overlapping
   * sub-sequences for parallel computations.
   */
  constexpr auto jump() noexcept -> void {
    jump_impl({0x180ec6d33cfd0aba, 0xd5a61266f0c9392c, 0xa9582618e03fc9aa, 0x39abdc4529b1661c}); // NOLINT
  }

  /**
   * @brief This is the long-jump function for the generator.
   *
   * It is equivalent to 2^192 calls to operator(); it can be used to generate 2^64 starting points,
   * from each of which jump() will generate 2^64 non-overlapping sub-sequences for parallel
   * distributed computations.
   */
  constexpr auto long_jump() noexcept -> void {
    jump_impl({0x76e15d3efefdcbbf, 0xc5004e441c522fb3, 0x77710069854ee241, 0x39109bb02acbe635}); // NOLINT
  }

 private:
  /**
   * @brief The default seed for the PRNG.
   */
  std::array<result_type, 4> m_state = {
      0x8D0B73B52EA17D89,
      0x2AA426A407C2B04F,
      0xF513614E4798928A,
      0xA65E479EC5B49D41,
  };

  /**
   * @brief Utility function.
   */
  [[nodiscard]] static constexpr auto rotl(result_type const val, int const bits) noexcept -> result_type {
    return (val << bits) | (val >> (64 - bits)); // NOLINT
  }

  constexpr void jump_impl(std::array<result_type, 4> const &jump_array) noexcept {
    //
    std::array<result_type, 4> s = {0, 0, 0, 0}; // NOLINT

    for (result_type const jump : jump_array) {
      for (int bit = 0; bit < 64; ++bit) {  // NOLINT
        if (jump & result_type{1} << bit) { // NOLINT
          s[0] ^= m_state[0];
          s[1] ^= m_state[1];
          s[2] ^= m_state[2];
          s[3] ^= m_state[3];
        }
        std::invoke(*this);
      }
    }
    m_state = s;
  }
};

static_assert(uniform_random_bit_generator<xoshiro>);

} // namespace ext

} // namespace lf

#endif /* CA0BE1EA_88CD_4E63_9D89_37395E859565 */

        // for xoshiro, seed
#ifndef C1B42944_8E33_4F6B_BAD6_5FB687F6C737
#define C1B42944_8E33_4F6B_BAD6_5FB687F6C737

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <algorithm> // for shuffle
#include <cstddef>   // for size_t
#include <memory>    // for shared_ptr
#include <random>    // for discrete_distribution
#include <utility>   // for exchange, move
#include <vector>    // for vector
    // for worker_context, nullary_function_t      // for err    // for submit_handle, task_handle        // for finalize, worker_init   // for non_null, map          // for LF_ASSERT, LF_LOG, LF_CATCH_ALL, LF_RETHROW   // for numa_topology // for xoshiro

/**
 * @file numa_context.hpp
 *
 * @brief An augmentation of the `worker_context` which tracks the topology of the numa nodes.
 */

// --------------------------------------------------------------------- //
namespace lf::impl {

/**
 * @brief Manages an `lf::worker_context` and exposes numa aware stealing.
 */
template <typename Shared>
struct numa_context {
 private:
  /**
   * @brief The minimum number of steal attempts we will make per `try_steal` operation.
   */
  static constexpr std::size_t k_min_steal_attempts = 1024;
  /**
   * @brief The number of steal attempts we will make per target in a `try_steal` operation.
   */
  static constexpr std::size_t k_steal_attempts_per_target = 32;
  /**
   * @brief Thread-local RNG.
   */
  xoshiro m_rng;
  /**
   * @brief Shared variables between all numa_contexts.
   */
  std::shared_ptr<Shared> m_shared;
  /**
   * @brief The worker context we are associated with.
   */
  worker_context *m_context = nullptr;
  /**
   * @brief The distribution for stealing.
   */
  std::discrete_distribution<std::size_t> m_dist;
  /**
   * @brief First order neighbors.
   */
  std::vector<numa_context *> m_close;
  /**
   * @brief Our neighbors (excluding ourselves).
   */
  std::vector<numa_context *> m_neigh;

 public:
  /**
   * @brief Construct a new numa context object.
   */
  numa_context(xoshiro const &rng, std::shared_ptr<Shared> shared)
      : m_rng(rng),
        m_shared{std::move(non_null(shared))} {}

  /**
   * @brief Get access to the shared variables.
   */
  [[nodiscard]] auto shared() const noexcept -> Shared & { return *non_null(m_shared); }

  /**
   * @brief An alias for `numa_topology::numa_node<numa_context<Shared>>`.
   */
  using numa_node = numa_topology::numa_node<numa_context>;

  /**
   * @brief Initialize the underlying worker context and bind calling thread a hardware core.
   *
   * This is separate from construction as the master thread will need to construct
   * the contexts before they can form a reference to them, this must be called by the
   * worker thread which should eventually call `finalize`.
   *
   * The context will store __raw__ pointers to the other contexts in the topology, this is
   * to ensure no circular references are formed.
   *
   * The lifetime of the `context` and `topo` neighbors must outlive all use of this object (excluding
   * destruction).
   */
  void init_worker_and_bind(nullary_function_t notify, numa_node const &topo) {

    LF_ASSERT(!topo.neighbors.empty());
    LF_ASSERT(!topo.neighbors.front().empty());
    LF_ASSERT(topo.neighbors.front().front().get() == this);

    LF_ASSERT(m_neigh.empty()); // Should only be called once.

    topo.bind();

    m_context = worker_init(std::move(notify));

    std::vector<double> weights;

    // clang-format off

    LF_TRY {
      if (topo.neighbors.size() > 1){
        m_close = impl::map(topo.neighbors[1], [](auto const & neigh) {
          return neigh.get();
        });
      }

      // Skip the first one as it is just us.
      for (std::size_t i = 1; i < topo.neighbors.size(); ++i) {

        double n = static_cast<double>(topo.neighbors[i].size());
        double I = static_cast<double>(i);
        double w = 1. / (n * I * I);

        for (auto &&context : topo.neighbors[i]) {
          weights.push_back(w);
          m_neigh.push_back(context.get());
        }
      }

      m_dist = std::discrete_distribution<std::size_t>{weights.begin(), weights.end()};

    } LF_CATCH_ALL {
      m_close.clear();
      m_neigh.clear();
      LF_RETHROW;
    }

    // clang-format on
  }

  /**
   * @brief Call `lf::finalize` on the underlying worker context.
   */
  void finalize_worker() { finalize(std::exchange(m_context, nullptr)); }

  /**
   * @brief Fetch the `lf::context` a thread has associated with this object.
   */
  auto get_underlying() noexcept -> worker_context * { return m_context; }

  /**
   * @brief schedule a job to the owned worker context.
   */
  void schedule(submit_handle job) { non_null(m_context)->schedule(job); }

  /**
   * @brief Fetch a linked-list of the submitted tasks.
   *
   * If there are no submitted tasks, then returned pointer will be null.
   */
  [[nodiscard]] auto try_pop_all() noexcept -> submit_handle { return non_null(m_context)->try_pop_all(); }

  /**
   * @brief Try to steal a task from one of our friends, returns `nullptr` if we failed.
   */
  [[nodiscard]] auto try_steal() noexcept -> task_handle {

    if (m_neigh.empty()) {
      return nullptr;
    }

#ifndef LF_DOXYGEN_SHOULD_SKIP_THIS

  #define LF_RETURN_OR_CONTINUE(expr)                                                                        \
    do {                                                                                                     \
      auto *context = expr;                                                                                  \
      LF_ASSERT(context);                                                                                    \
      LF_ASSERT(context->m_context);                                                                         \
      auto [err, task] = context->m_context->try_steal();                                                    \
                                                                                                             \
      switch (err) {                                                                                         \
        case lf::err::none:                                                                                  \
          LF_LOG("Stole task from {}", (void *)context);                                                     \
          return task;                                                                                       \
        case lf::err::lost:                                                                                  \
          /* We don't retry here as we don't want to cause contention */                                     \
          /* and we have multiple steal attempts anyway */                                                   \
        case lf::err::empty:                                                                                 \
          continue;                                                                                          \
        default:                                                                                             \
          LF_ASSERT(false && "Unreachable");                                                                 \
      }                                                                                                      \
    } while (false)

    std::ranges::shuffle(m_close, m_rng);

    // Check all of the closest numa domain.
    for (auto *neigh : m_close) {
      LF_RETURN_OR_CONTINUE(neigh);
    }

    std::size_t attempts = k_min_steal_attempts + k_steal_attempts_per_target * m_neigh.size();

    // Then work probabilistically.
    for (std::size_t i = 0; i < attempts; ++i) {
      LF_RETURN_OR_CONTINUE(m_neigh[m_dist(m_rng)]);
    }

  #undef LF_RETURN_OR_CONTINUE

#endif // LF_DOXYGEN_SHOULD_SKIP_THIS

    return nullptr;
  }
};

} // namespace lf::impl

#endif /* C1B42944_8E33_4F6B_BAD6_5FB687F6C737 */

 // for numa_context

/**
 * @file busy_pool.hpp
 *
 * @brief A work-stealing thread pool where all the threads spin when idle.
 */

namespace lf {

namespace impl {

/**
 * @brief Variable used to synchronize a collection of threads.
 */
struct busy_vars {
  /**
   * @brief Construct a new busy vars object for synchronizing `n` workers with one master.
   */
  explicit busy_vars(std::size_t n)
      : latch_start(checked_cast<std::ptrdiff_t>(n + 1)),
        latch_stop(checked_cast<std::ptrdiff_t>(n)) {}

  /**
   * @brief Synchronize construction.
   */
  alignas(k_cache_line) std::latch latch_start;
  /**
   * @brief Synchronize destruction.
   */
  alignas(k_cache_line) std::latch latch_stop;
  /**
   * @brief Signal shutdown.
   */
  alignas(k_cache_line) std::atomic_flag stop;
};

/**
 * @brief Workers event-loop.
 */
inline void busy_work(numa_topology::numa_node<impl::numa_context<busy_vars>> node) noexcept {

  LF_ASSERT(!node.neighbors.empty());
  LF_ASSERT(!node.neighbors.front().empty());

  // ------- Initialize my numa variables

  std::shared_ptr my_context = node.neighbors.front().front();

  my_context->init_worker_and_bind(nullary_function_t{[]() {}}, node); // Notification is a no-op.

  // Wait for everyone to have set up their numa_vars. If this throws an exception then
  // program terminates due to the noexcept marker.
  my_context->shared().latch_start.arrive_and_wait();

  LF_DEFER {
    // Wait for everyone to have stopped before destroying the context (which others could be observing).
    my_context->shared().stop.test_and_set(std::memory_order_release);
    my_context->shared().latch_stop.arrive_and_wait();
    my_context->finalize_worker();
  };

  // -------

  while (!my_context->shared().stop.test(std::memory_order_acquire)) {

    if (submit_handle submissions = my_context->try_pop_all()) {
      resume(submissions);
      continue;
    }

    if (task_handle task = my_context->try_steal()) {
      resume(task);
    }
  }

  // Finish up any remaining work.
  while (submit_handle submissions = my_context->try_pop_all()) {
    resume(submissions);
  }
}

} // namespace impl

/**
 * @brief A scheduler based on a traditional work-stealing thread pool.
 *
 * Worker threads continuously try to steal tasks from other worker threads hence, they
 * waste CPU cycles if sufficient work is not available. This is a good choice if the number
 * of threads is equal to the number of hardware cores and the multiplexer has no other load.
 * Additionally (if an installation of `hwloc` was found) this pool is NUMA aware.
 *
 * __Note:__ The `busy_pool` must not be destructed until all submitted tasks have reached a
 * point where they will submit no-more work to the pool.
 */
class busy_pool {

  std::size_t m_num_threads;
  std::uniform_int_distribution<std::size_t> m_dist{0, m_num_threads - 1};
  xoshiro m_rng{seed, std::random_device{}};
  std::shared_ptr<impl::busy_vars> m_share = std::make_shared<impl::busy_vars>(m_num_threads);
  std::vector<std::shared_ptr<impl::numa_context<impl::busy_vars>>> m_worker = {};
  std::vector<std::thread> m_threads = {};
  std::vector<worker_context *> m_contexts = {};

 public:
  /**
   * @brief Move construct a new lazy_pool object.
   */
  busy_pool(busy_pool &&other) noexcept = default;
  /**
   * @brief The busy pool is not copyable.
   */
  busy_pool(busy_pool const &other) = delete;
  /**
   * @brief Move assign a lazy_pool object.
   */
  auto operator=(busy_pool &&other) noexcept -> busy_pool & = default;
  /**
   * @brief The busy pool is not copy assignable.
   */
  auto operator=(busy_pool const &other) -> busy_pool & = delete;

  /**
   * @brief Construct a new busy_pool object.
   *
   * @param n The number of worker threads to create, defaults to the number of hardware threads.
   * @param strategy The numa strategy for distributing workers.
   */
  explicit busy_pool(std::size_t n = std::thread::hardware_concurrency(),
                     numa_strategy strategy = numa_strategy::fan)
      : m_num_threads(n) {

    for (std::size_t i = 0; i < n; ++i) {
      m_worker.push_back(std::make_shared<impl::numa_context<impl::busy_vars>>(m_rng, m_share));
      m_rng.long_jump();
    }

    LF_ASSERT_NO_ASSUME(!m_share->stop.test(std::memory_order_acquire));

    std::vector nodes = numa_topology{}.distribute(m_worker, strategy);

    [&]() noexcept {
      // All workers must be created, if we fail to create them all then we must
      // terminate else the workers will hang on the start latch.
      for (auto &&node : nodes) {
        m_threads.emplace_back(impl::busy_work, std::move(node));
      }

      // Wait for everyone to have set up their numa_vars before submitting. This
      // must be noexcept as if we fail the countdown then the workers will hang.
      m_share->latch_start.arrive_and_wait();
    }();

    // All workers have set their contexts, we can read them now.
    for (auto &&worker : m_worker) {
      m_contexts.push_back(worker->get_underlying());
    }
  }

  /**
   * @brief Schedule a task for execution.
   */
  void schedule(submit_handle job) { m_worker[m_dist(m_rng)]->schedule(job); }

  /**
   * @brief Get a view of the worker's contexts.
   */
  auto contexts() noexcept -> std::span<worker_context *> { return m_contexts; }

  ~busy_pool() noexcept {
    LF_LOG("Requesting a stop");
    // Set conditions for workers to stop
    m_share->stop.test_and_set(std::memory_order_release);

    for (auto &worker : m_threads) {
      worker.join();
    }
  }
};

static_assert(scheduler<busy_pool>);

} // namespace lf

#endif /* B5AE1829_6F8A_4118_AB15_FE73F851271F */


#ifndef C1BED09D_40CC_4EA1_B687_38A5BCC31907
#define C1BED09D_40CC_4EA1_B687_38A5BCC31907

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <algorithm>  // for __max_element_fn, max_element
#include <atomic>     // for atomic_flag, memory_order, memory_orde...
#include <concepts>   // for same_as
#include <cstddef>    // for size_t
#include <functional> // for less
#include <latch>      // for latch
#include <memory>     // for shared_ptr, __shared_ptr_access, make_...
#include <random>     // for random_device, uniform_int_distribution
#include <span>       // for span
#include <thread>     // for thread
#include <utility>    // for move
#include <vector>     // for vector
                 // for LF_DEFER           // for worker_context, nullary_function_t           // for submit_handle, task_handle            // for resume          // for k_cache_line                 // for LF_ASSERT, LF_LOG, LF_ASSERT_NO_ASSUME             // for scheduler         // for busy_vars
#pragma once

// Copyright (c) Conor Williams, Meta Platforms, Inc. and its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// The contents of this file have been adapted from https://github.com/facebook/folly

#include <atomic>     // for atomic, memory_order_acq_rel, memory_order_seq_cst
#include <bit>        // for endian
#include <cstddef>    // for size_t
#include <cstdint>    // for uint64_t, uint32_t
#include <functional> // for invoke
 // for immovable        // for LF_ASSERT, LF_CATCH_ALL, LF_RETHROW, LF_TRY

/**
 * @file event_count.hpp
 *
 * @brief A standalone adaptation of ``folly::EventCount`` utilizing C++20's atomic wait facilities.
 *
 * This file has been adapted from:
 * ``https://github.com/facebook/folly/blob/main/folly/experimental/EventCount.h``
 */

namespace lf {

inline namespace ext {

/**
 * @brief A condition variable for lock free algorithms.
 *
 *
 *
 * See http://www.1024cores.net/home/lock-free-algorithms/eventcounts for details.
 *
 * Event counts allow you to convert a non-blocking lock-free / wait-free
 * algorithm into a blocking one, by isolating the blocking logic.  You call
 * prepare_wait() before checking your condition and then either cancel_wait()
 * or wait() depending on whether the condition was true.  When another
 * thread makes the condition true, it must call notify() / notify_all() just
 * like a regular condition variable.
 *
 * If "<" denotes the happens-before relationship, consider 2 threads (T1 and
 * T2) and 3 events:
 *
 * * E1: T1 returns from prepare_wait.
 * * E2: T1 calls wait (obviously E1 < E2, intra-thread).
 * * E3: T2 calls ``notify_all()``.
 *
 * If E1 < E3, then E2's wait will complete (and T1 will either wake up,
 * or not block at all)
 *
 * This means that you can use an event_count in the following manner:
 *
 * \rst
 *
 * Waiter:
 *
 * .. code::
 *
 *    if (!condition()) {  // handle fast path first
 *      for (;;) {
 *
 *        auto key = eventCount.prepare_wait();
 *
 *        if (condition()) {
 *          eventCount.cancel_wait();
 *          break;
 *        } else {
 *          eventCount.wait(key);
 *        }
 *      }
 *    }
 *
 * (This pattern is encapsulated in the ``await()`` method.)
 *
 * Poster:
 *
 * .. code::
 *
 *    make_condition_true();
 *    eventCount.notify_all();
 *
 * .. note::
 *
 *    Just like with regular condition variables, the waiter needs to
 *    be tolerant of spurious wakeups and needs to recheck the condition after
 *    being woken up.  Also, as there is no mutual exclusion implied, "checking"
 *    the condition likely means attempting an operation on an underlying
 *    data structure (push into a lock-free queue, etc) and returning true on
 *    success and false on failure.
 *
 * \endrst
 */
class event_count : impl::immovable<event_count> {
 public:
  /**
   * @brief The return type of ``prepare_wait()``.
   */
  class key {
    friend class event_count;
    explicit key(uint32_t epoch) noexcept : m_epoch(epoch) {}
    std::uint32_t m_epoch;
  };
  /**
   * @brief Wake up one waiter.
   */
  auto notify_one() noexcept -> void;
  /**
   * @brief Wake up all waiters.
   */
  auto notify_all() noexcept -> void;
  /**
   * @brief Prepare to wait.
   *
   * Once this has been called, you must either call ``wait()`` with the key or ``cancel_wait()``.
   */
  [[nodiscard]] auto prepare_wait() noexcept -> key;
  /**
   * @brief Cancel a wait that was prepared with ``prepare_wait()``.
   */
  auto cancel_wait() noexcept -> void;
  /**
   * @brief Wait for a notification, this blocks the current thread.
   */
  auto wait(key in_key) noexcept -> void;

  /**
   * Wait for ``condition()`` to become true.
   *
   * Cleans up appropriately if ``condition()`` throws, and then rethrow.
   */
  template <typename Pred>
    requires std::is_invocable_r_v<bool, Pred const &>
  void await(Pred const &condition) noexcept(std::is_nothrow_invocable_r_v<bool, Pred const &>);

 private:
  auto epoch() noexcept -> std::atomic<std::uint32_t> * {
    return reinterpret_cast<std::atomic<std::uint32_t> *>(&m_val) + k_epoch_offset; // NOLINT
  }

  // This requires 64-bit
  static_assert(sizeof(std::uint32_t) == 4, "bad platform, need 32 bit ints");
  static_assert(sizeof(std::uint64_t) == 8, "bad platform, need 64 bit ints");

  static_assert(sizeof(std::atomic<std::uint32_t>) == 4, "bad platform, need 32 bit atomic ints");
  static_assert(sizeof(std::atomic<std::uint64_t>) == 8, "bad platform, need 64 bit atomic ints");

  static constexpr bool k_is_little_endian = std::endian::native == std::endian::little;
  static constexpr bool k_is_big_endian = std::endian::native == std::endian::big;

  static_assert(k_is_little_endian || k_is_big_endian, "bad platform, mixed endian");

  static constexpr size_t k_epoch_offset = k_is_little_endian ? 1 : 0;

  static constexpr std::uint64_t k_add_waiter = 1;
  static constexpr std::uint64_t k_sub_waiter = static_cast<std::uint64_t>(-1);
  static constexpr std::uint64_t k_epoch_shift = 32;
  static constexpr std::uint64_t k_add_epoch = static_cast<std::uint64_t>(1) << k_epoch_shift;
  static constexpr std::uint64_t k_waiter_mask = k_add_epoch - 1;

  // Stores the epoch in the most significant 32 bits and the waiter count in the least significant 32 bits.
  std::atomic<std::uint64_t> m_val = 0;
};

inline void event_count::notify_one() noexcept {
  if (m_val.fetch_add(k_add_epoch, std::memory_order_acq_rel) & k_waiter_mask) [[unlikely]] { // NOLINT
    epoch()->notify_one();
  }
}

inline void event_count::notify_all() noexcept {
  if (m_val.fetch_add(k_add_epoch, std::memory_order_acq_rel) & k_waiter_mask) [[unlikely]] { // NOLINT
    epoch()->notify_all();
  }
}

[[nodiscard]] inline auto event_count::prepare_wait() noexcept -> event_count::key {
  auto prev = m_val.fetch_add(k_add_waiter, std::memory_order_acq_rel);
  // Cast is safe because we're only using the lower 32 bits.
  return key(static_cast<std::uint32_t>(prev >> k_epoch_shift));
}

inline void event_count::cancel_wait() noexcept {
  // memory_order_relaxed would suffice for correctness, but the faster
  // #waiters gets to 0, the less likely it is that we'll do spurious wakeups
  // (and thus system calls).
  auto prev = m_val.fetch_add(k_sub_waiter, std::memory_order_seq_cst);

  LF_ASSERT((prev & k_waiter_mask) != 0);
}

inline void event_count::wait(key in_key) noexcept {
  // Use C++20 atomic wait guarantees
  epoch()->wait(in_key.m_epoch, std::memory_order_acquire);

  // memory_order_relaxed would suffice for correctness, but the faster
  // #waiters gets to 0, the less likely it is that we'll do spurious wakeups
  // (and thus system calls)
  auto prev = m_val.fetch_add(k_sub_waiter, std::memory_order_seq_cst);

  LF_ASSERT((prev & k_waiter_mask) != 0);
}

template <class Pred>
  requires std::is_invocable_r_v<bool, Pred const &>
void event_count::await(Pred const &condition) noexcept(std::is_nothrow_invocable_r_v<bool, Pred const &>) {
  //
  if (std::invoke(condition)) {
    return;
  }
  // std::invoke(condition) is the only thing that may throw, everything else is
  // noexcept, so we can hoist the try/catch block outside of the loop

  LF_TRY {
    for (;;) {
      auto my_key = prepare_wait();
      if (std::invoke(condition)) {
        cancel_wait();
        break;
      }
      wait(my_key);
    }
  }
  LF_CATCH_ALL {
    cancel_wait();
    LF_RETHROW;
  }
}

} // namespace ext

} // namespace lf
   // for event_count          // for numa_strategy, numa_topology        // for xoshiro, seed // for numa_context

/**
 * @file lazy_pool.hpp
 *
 * @brief A work-stealing thread pool where threads sleep when idle.
 */

namespace lf {

namespace impl {
/**
 * @brief Alias to the `std` version.
 */
static constexpr std::memory_order acquire = std::memory_order_acquire;
/**
 * @brief Alias to the `std` version.
 */
static constexpr std::memory_order acq_rel = std::memory_order_acq_rel;
/**
 * @brief Alias to the `std` version.
 */
static constexpr std::memory_order release = std::memory_order_release;

/**
 * @brief A collection of heap allocated atomic variables used for tracking the state of the scheduler.
 */
struct lazy_vars : busy_vars {

  using busy_vars::busy_vars;

  /**
   * @brief Counters and notifiers for each numa locality.
   */
  struct fat_counters {
    /**
     * @brief Number of thieving workers.
     */
    alignas(k_cache_line) std::atomic_uint64_t thief = 0;
    /**
     * @brief Notifier for this numa pool.
     */
    alignas(k_cache_line) event_count notifier;
  };

  /**
   * @brief  Total number of actives.
   */
  alignas(k_cache_line) std::atomic_uint64_t active = 0;
  /**
   * @brief Counters for each numa locality.
   */
  alignas(k_cache_line) std::vector<fat_counters> numa;

  // Invariant: *** if (A > 0) then (T >= 1 OR S == 0) ***

  /**
   * Called by a thief with work, effect: thief->active, do work, active->sleep.
   */
  template <typename Handle>
    requires std::same_as<Handle, task_handle> || std::same_as<Handle, submit_handle>
  void thief_work_sleep(Handle handle, std::size_t tid) noexcept {

    // Invariant: *** if (A > 0) then (Ti >= 1 OR Si == 0) for all i***

    // First we transition from thief -> sleep:
    //
    // Ti <- Ti - 1
    // Si <- Si + 1
    //
    // Invariant in numa j != i is uneffected.
    //
    // In numa i we guarantee that Ti >= 1 by waking someone else if we are the last thief as Si != 0.

    if (numa[tid].thief.fetch_sub(1, acq_rel) == 1) {
      numa[tid].notifier.notify_one();
    }

    // Then we transition from sleep -> active
    //
    // A <- A + 1
    // Si <- Si - 1

    // If we are the first active then we need to maintain the invariant across all numa domains.

    if (active.fetch_add(1, acq_rel) == 0) {
      for (auto &&domain : numa) {
        if (domain.thief.load(acquire) == 0) {
          domain.notifier.notify_one();
        }
      }
    }

    resume(handle);

    // Finally A <- A - 1 does not invalidate the invariant in any domain.
    active.fetch_sub(1, release);
  }
};

/**
 * @brief The function that workers run while the pool is alive (worker event-loop)
 */
inline auto lazy_work(numa_topology::numa_node<numa_context<lazy_vars>> node) noexcept {

  LF_ASSERT(!node.neighbors.empty());
  LF_ASSERT(!node.neighbors.front().empty());

  // ---- Initialization ---- //

  std::shared_ptr my_context = node.neighbors.front().front();

  LF_ASSERT(my_context && !my_context->shared().numa.empty());

  std::size_t numa_tid = node.numa;

  auto &my_numa_vars = my_context->shared().numa[numa_tid]; // node.numa

  lf::nullary_function_t notify{[&my_numa_vars]() {
    my_numa_vars.notifier.notify_all();
  }};

  my_context->init_worker_and_bind(std::move(notify), node);

  // Wait for everyone to have set up their numa_vars. If this throws an exception then
  // program terminates due to the noexcept marker.
  my_context->shared().latch_start.arrive_and_wait();

  LF_DEFER {
    // Wait for everyone to have stopped before destroying the context (which others could be observing).
    my_context->shared().stop.test_and_set(std::memory_order_release);
    my_context->shared().latch_stop.arrive_and_wait();
    my_context->finalize_worker();
  };

  // ----------------------------------- //

  /**
   * Invariant we want to uphold:
   *
   *  If there is an active task there is always: [at least one thief] OR [no sleeping] in each numa.
   *
   * Let:
   *  Ti = number of thieves in numa i
   *  Si = number of sleeping threads in numa i
   *  A = number of active threads across all numa domains
   *
   * Invariant: *** if (A > 0) then (Ti >= 1 OR Si == 0) for all i***
   */

  /**
   * Lemma 1: Promoting an Si -> Ti guarantees that the invariant is upheld.
   *
   * Proof 1:
   *  Ti -> Ti + 1, hence Ti > 0, hence invariant maintained in numa i.
   *  In numa j != i invariant is uneffected.
   *
   */

wake_up:
  /**
   * Invariant maintained by Lemma 1.
   */
  my_numa_vars.thief.fetch_add(1, release);

  /**
   * First we handle the fast path (work to do) before touching the notifier.
   */
  if (auto *submission = my_context->try_pop_all()) {
    my_context->shared().thief_work_sleep(submission, numa_tid);
    goto wake_up;
  }
  if (auto *stolen = my_context->try_steal()) {
    my_context->shared().thief_work_sleep(stolen, numa_tid);
    goto wake_up;
  }

  /**
   * Now we are going to try and sleep if the conditions are correct.
   *
   * Event count pattern:
   *
   *    key <- prepare_wait()
   *
   *    Check condition for sleep:
   *      - We have no private work.
   *      - We are not the watch dog.
   *      - The scheduler has not stopped.
   *
   *    Commit/cancel wait on key.
   */

  auto key = my_numa_vars.notifier.prepare_wait();

  if (auto *submission = my_context->try_pop_all()) {
    // Check our private **before** `stop`.
    my_numa_vars.notifier.cancel_wait();
    my_context->shared().thief_work_sleep(submission, numa_tid);
    goto wake_up;
  }

  if (my_context->shared().stop.test(acquire)) {
    // A stop has been requested, we will honor it under the assumption
    // that the requester has ensured that everyone is done. We cannot check
    // this i.e it is possible a thread that just signaled the master thread
    // is still `active` but act stalled.
    my_numa_vars.notifier.cancel_wait();
    my_numa_vars.notifier.notify_all();
    my_numa_vars.thief.fetch_sub(1, release);
    return;
  }

  /**
   * Try:
   *
   * Ti <- Ti - 1
   * Si <- Si + 1
   *
   * If new Ti == 0 then we check A, if A > 0 then wake self immediately i.e:
   *
   * Ti <- Ti + 1
   * Si <- Si - 1
   *
   * This maintains invariant in numa.
   */

  if (my_numa_vars.thief.fetch_sub(1, acq_rel) == 1) {

    // If we are the last thief then invariant may be broken if A > 0 as S > 0 (because we are asleep).

    if (my_context->shared().active.load(acquire) > 0) {
      // Restore the invariant if A > 0 by immediately waking self.
      my_numa_vars.notifier.cancel_wait();
      goto wake_up;
    }
  }

  LF_LOG("Goes to sleep");

  // We are safe to sleep.
  my_numa_vars.notifier.wait(key);
  // Note, this could be a spurious wakeup, that doesn't matter because we will just loop around.
  goto wake_up;
}

} // namespace impl

/**
 * @brief A scheduler based on a [An Efficient Work-Stealing Scheduler for Task Dependency
 * Graph](https://doi.org/10.1109/icpads51040.2020.00018)
 *
 * This pool sleeps workers which cannot find any work, as such it should be the default choice for most
 * use cases. Additionally (if an installation of `hwloc` was found) this pool is NUMA aware.
 *
 * __Note:__ The `lazy_pool` must not be destructed until all submitted tasks have reached a point where they
 * will submit no-more work to the pool.
 */
class lazy_pool {

  std::size_t m_num_threads;
  std::uniform_int_distribution<std::size_t> m_dist{0, m_num_threads - 1};
  xoshiro m_rng{seed, std::random_device{}};
  std::shared_ptr<impl::lazy_vars> m_share = std::make_shared<impl::lazy_vars>(m_num_threads);
  std::vector<std::shared_ptr<impl::numa_context<impl::lazy_vars>>> m_worker = {};
  std::vector<std::thread> m_threads = {};
  std::vector<worker_context *> m_contexts = {};

 public:
  /**
   * @brief Move construct a new lazy_pool object.
   */
  lazy_pool(lazy_pool &&other) noexcept = default;
  /**
   * @brief The lazy pool is not copyable.
   */
  lazy_pool(lazy_pool const &other) = delete;
  /**
   * @brief Move assign a lazy_pool object.
   */
  auto operator=(lazy_pool &&other) noexcept -> lazy_pool & = default;
  /**
   * @brief The lazy pool is not copy assignable.
   */
  auto operator=(lazy_pool const &other) -> lazy_pool & = delete;

  /**
   * @brief Construct a new lazy_pool object and `n` worker threads.
   *
   * @param n The number of worker threads to create, defaults to the number of hardware threads.
   * @param strategy The numa strategy for distributing workers.
   */
  explicit lazy_pool(std::size_t n = std::thread::hardware_concurrency(),
                     numa_strategy strategy = numa_strategy::fan)
      : m_num_threads(n) {

    LF_ASSERT_NO_ASSUME(m_share && !m_share->stop.test(std::memory_order_acquire));

    for (std::size_t i = 0; i < n; ++i) {
      m_worker.push_back(std::make_shared<impl::numa_context<impl::lazy_vars>>(m_rng, m_share));
      m_rng.long_jump();
    }

    std::vector nodes = numa_topology{}.distribute(m_worker, strategy);

    LF_ASSERT(!nodes.empty());

    std::size_t num_numa = 1 + std::ranges::max_element(nodes, {}, [](auto const &node) {
                                 return node.numa;
                               })->numa;

    LF_LOG("Lazy pool has {} numa nodes", num_numa);

    m_share->numa = std::vector<impl::lazy_vars::fat_counters>(num_numa);

    [&]() noexcept {
      // All workers must be created, if we fail to create them all then we must terminate else
      // the workers will hang on the latch.
      for (auto &&node : nodes) {
        m_threads.emplace_back(impl::lazy_work, std::move(node));
      }

      // Wait for everyone to have set up their numa_vars before submitting. This
      // must be noexcept as if we fail the countdown then the workers will hang.
      m_share->latch_start.arrive_and_wait();
    }();

    // All workers have set their contexts, we can read them now.
    for (auto &&worker : m_worker) {
      m_contexts.push_back(worker->get_underlying());
    }
  }

  /**
   * @brief Schedule a job on a random worker.
   */
  void schedule(submit_handle job) { m_worker[m_dist(m_rng)]->schedule(job); }

  /**
   * @brief Get a view of the worker's contexts.
   */
  auto contexts() noexcept -> std::span<worker_context *> { return m_contexts; }

  /**
   * @brief Destroy the lazy pool object, stops all workers.
   */
  ~lazy_pool() noexcept {
    LF_LOG("Requesting a stop");

    // Set conditions for workers to stop.
    m_share->stop.test_and_set(std::memory_order_release);

    for (auto &&var : m_share->numa) {
      var.notifier.notify_all();
    }

    for (auto &worker : m_threads) {
      worker.join();
    }
  }
};

static_assert(scheduler<lazy_pool>);

} // namespace lf

#endif /* C1BED09D_40CC_4EA1_B687_38A5BCC31907 */


#ifndef C8EE9A0A_3B9F_4FFE_8FF5_910645E0C7CC
#define C8EE9A0A_3B9F_4FFE_8FF5_910645E0C7CC

#include <atomic> // for atomic_flag, ATOMIC_FLAG_INIT, memory_order_acq...
#include <thread> // for thread

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// Self Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.
        // for LF_DEFER  // for worker_context, nullary_function_t  // for submit_handle   // for resume      // for finalize, worker_init // for non_null, immovable

/**
 * @file unit_pool.hpp
 *
 * @brief A scheduler that runs all tasks on a single thread.
 */

namespace lf {

/**
 * @brief A scheduler that runs all tasks on a single thread.
 *
 * This is useful for testing/debugging/benchmarking as it is the only work-pool that can guarantee
 * all the work completes if submitting detached work.
 */
class unit_pool : impl::immovable<unit_pool> {

  static void work(unit_pool *self) {

    worker_context *me = lf::worker_init(lf::nullary_function_t{[]() {}});

    LF_DEFER { lf::finalize(me); };

    self->m_context = me;
    self->m_ready.test_and_set(std::memory_order_release);
    self->m_ready.notify_one();

    while (!self->m_stop.test(std::memory_order_acquire)) {
      if (auto *job = me->try_pop_all()) {
        lf::resume(job);
      }
    }

    // Drain the queue.
    while (auto *job = me->try_pop_all()) {
      lf::resume(job);
    }
  }

 public:
  /**
   * @brief Construct a new unit pool.
   */
  unit_pool() : m_thread{work, this} {
    // Wait until worker sets the context.
    m_ready.wait(false, std::memory_order_acquire);
  }

  /**
   * @brief Run a job inline.
   */
  void schedule(submit_handle job) { non_null(m_context)->schedule(job); }

  /**
   * @brief Destroy the unit pool object, waits for the worker to finish.
   */
  ~unit_pool() noexcept {
    m_stop.test_and_set(std::memory_order_release);
    m_thread.join();
  }

 private:
  std::atomic_flag m_stop = ATOMIC_FLAG_INIT;
  std::atomic_flag m_ready = ATOMIC_FLAG_INIT;

  lf::worker_context *m_context = nullptr;

  std::thread m_thread;
};

} // namespace lf

#endif /* C8EE9A0A_3B9F_4FFE_8FF5_910645E0C7CC */





/**
 * @file scheduler.hpp
 *
 * @brief Meta header which includes all the schedulers in ``libfork/schedule``.
 *
 * Most users of `libfork` will want to use one of the schedulers provided in this header.
 */

#endif /* A616E976_A92A_4CE4_B807_936EF8C5FBC4 */



#ifndef D336C448_D1EE_4616_9277_E0D7D550A10A
#define D336C448_D1EE_4616_9277_E0D7D550A10A

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for copy_constructible, same_as, common_reference_with
#include <iterator>    // for indirectly_readable, iter_reference_t, indirectly_...
#include <type_traits> // for decay_t, false_type, invoke_result, remove_cvref_t
 // for async_invocable, async_regular_invocable, async_re...

/**
 * @file constraints.hpp
 *
 * @brief Variations of the standard library's concepts used for constraining algorithms.
 */

namespace lf {

// ------------------------------------  either invocable ------------------------------------ //

/**
 * @brief Test if "F" is async invocable __xor__ normally invocable with ``Args...``.
 */
template <typename F, typename... Args>
concept invocable = (std::invocable<F, Args...> || async_invocable<F, Args...>)&&!(
    std::invocable<F, Args...> && async_invocable<F, Args...>);

/**
 * @brief Test if "F" is regularly async invocable __xor__ normally invocable invocable with ``Args...``.
 */
template <typename F, typename... Args>
concept regular_invocable = (std::regular_invocable<F, Args...> || async_regular_invocable<F, Args...>)&&!(
    std::regular_invocable<F, Args...> && async_regular_invocable<F, Args...>);

// ------------------------------------  either result type ------------------------------------ //

namespace detail {

template <typename F, typename... Args>
struct either_invocable_result;

template <typename F, typename... Args>
  requires async_invocable<F, Args...>
struct either_invocable_result<F, Args...> : async_result<F, Args...> {};

template <typename F, typename... Args>
  requires std::invocable<F, Args...>
struct either_invocable_result<F, Args...> : std::invoke_result<F, Args...> {};

} // namespace detail

/**
 * @brief The result of invoking a regular-or-async function.
 *
 * If F is a regular function then this is the same as `std::invoke_result<F, Args...>`. Otherwise,
 * if F is an async function then this is the same as `lf::core::invoke_result_t<F, Args...>`.
 */
template <typename F, typename... Args>
  requires invocable<F, Args...>
using invoke_result_t = typename detail::either_invocable_result<F, Args...>::type;

// ------------------------------------ indirect_value_t ------------------------------------ //

namespace detail {

/**
 * @brief Base case for regular iterators.
 */
template <typename I>
struct indirect_value_impl {
  using type = std::iter_value_t<I> &;
};

/**
 * @brief Specialization for projected iterators.
 */
template <typename Proj>
  requires requires { typename Proj::secret_projected_indirect_value; }
struct indirect_value_impl<Proj> : Proj::secret_projected_indirect_value {};

} // namespace detail

/**
 * @brief From [P2609R3](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2023/p2609r3.html), the
 * referenced value type.
 *
 * Relaxes some constraints for ``lf::core::indirectly_unary_invocable`` Specifically: `indirect_value_t<I>`
 * must be `std::iter_value_t<I> &` for an iterator and `invoke_result_t<Proj &, indirect_value_t<Iter>>` for
 * `projected<Proj, Iter>`.
 */
template <std::indirectly_readable I>
using indirect_value_t = typename detail::indirect_value_impl<I>::type;

// ------------------------------- indirectly_unary_invocable ------------------------------- //

/**
 * @brief ``std::indirectly_unary_invocable` that accepts async and regular function.
 *
 * This uses the relaxed version from
 * [P2997R0](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2023/p2997r0.html#ref-LWG3859) and the
 * further relaxation from [P2609R3](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2023/p2609r3.html)
 */
template <class F, class I>
concept indirectly_unary_invocable = std::indirectly_readable<I> &&                     //
                                     std::copy_constructible<F> &&                      //
                                     invocable<F &, indirect_value_t<I>> &&             //
                                     invocable<F &, std::iter_reference_t<I>> &&        //
                                     std::common_reference_with<                        //
                                         invoke_result_t<F &, indirect_value_t<I>>,     //
                                         invoke_result_t<F &, std::iter_reference_t<I>> //
                                         >;

/**
 * @brief ``std::indirectly_regular_unary_invocable` that accepts async and regular function.
 *
 * This uses the relaxed version from
 * [P2997R0](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2023/p2997r0.html#ref-LWG3859) and the
 * further relaxation from [P2609R3](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2023/p2609r3.html)
 *
 * __Hint:__ `indirect_value_t<I> = invoke_result_t<proj &, std::iter_value_t<I> &>` for 1-projected
 * iterators.
 */
template <class F, class I>
concept indirectly_regular_unary_invocable = std::indirectly_readable<I> &&                      //
                                             std::copy_constructible<F> &&                       //
                                             regular_invocable<F &, indirect_value_t<I>> &&      //
                                             regular_invocable<F &, std::iter_reference_t<I>> && //
                                             std::common_reference_with<                         //
                                                 invoke_result_t<F &, indirect_value_t<I>>,      //
                                                 invoke_result_t<F &, std::iter_reference_t<I>>  //
                                                 >;

// ------------------------------------ indirect_result_t ------------------------------------ //

/**
 * @brief A variation of `std::indirect_result_t` that accepts async and regular function.
 */
template <class F, class... Is>
  requires (std::indirectly_readable<Is> && ...) && invocable<F, std::iter_reference_t<Is>...>
using indirect_result_t = invoke_result_t<F, std::iter_reference_t<Is>...>;

// ------------------------------------ projected ------------------------------------ //

namespace detail {

template <class I>
struct conditional_difference_type {};

template <std::weakly_incrementable I>
struct conditional_difference_type<I> {
  using difference_type = std::iter_difference_t<I>;
};

template <class I, class Proj>
struct projected_impl {
  /**
   * @brief An ADL barrier.
   */
  struct projected_iterator : conditional_difference_type<I> {
    /**
     * @brief The value_type of the projected iterator.
     */
    using value_type = std::remove_cvref_t<indirect_result_t<Proj &, I>>;
    /**
     * @brief Not defined.
     */
    auto operator*() const -> indirect_result_t<Proj &, I>;
    /**
     * @brief For internal use only!
     */
    struct secret_projected_indirect_value {
      using type = invoke_result_t<Proj &, indirect_value_t<I>>;
    };
  };
};

/**
 * @brief A variation of `std::projected` that accepts async/regular function.
 */
template <std::indirectly_readable I, indirectly_regular_unary_invocable<I> Proj>
using project_once = typename detail::projected_impl<I, Proj>::projected_iterator;

template <typename...>
struct compose_projection {};

template <std::indirectly_readable I>
struct compose_projection<I> : std::type_identity<I> {};

template <std::indirectly_readable I, indirectly_regular_unary_invocable<I> Proj, typename... Other>
struct compose_projection<I, Proj, Other...> : compose_projection<project_once<I, Proj>, Other...> {};

//

template <typename...>
struct composable : std::false_type {};

template <std::indirectly_readable I>
struct composable<I> : std::true_type {};

template <std::indirectly_readable I, indirectly_regular_unary_invocable<I> Proj, typename... Other>
struct composable<I, Proj, Other...> : composable<project_once<I, Proj>, Other...> {};

template <typename I, typename... Proj>
concept indirectly_composable = std::indirectly_readable<I> && composable<I, Proj...>::value;

} // namespace detail

/**
 * @brief A variation of `std::projected` that accepts async/regular functions and composes projections.
 */
template <std::indirectly_readable I, typename... Proj>
  requires detail::indirectly_composable<I, Proj...>
using projected = typename detail::compose_projection<I, Proj...>::type;

// Quick test

static_assert(std::same_as<indirect_value_t<int *>, int &>);
static_assert(std::same_as<indirect_value_t<projected<int *, int (*)(int &)>>, int>);

// ---------------------------------- Semigroup  helpers ---------------------------------- //

namespace impl {

/**
 * @brief Verify `F` is invocable with `Args...` and returns `R`.
 */
template <typename R, typename F, typename... Args>
concept regular_invocable_returns =
    regular_invocable<F, Args...> && std::same_as<R, invoke_result_t<F, Args...>>;

} // namespace impl

// ---------------------------------- Semigroup ---------------------------------- //

/**
 * @brief A semigroup is a set `S` and an associative binary operation `·`, such that `S` is closed under `·`.
 *
 * Associativity means that for all `a, b, c` in `S`, `(a · b) · c = a · (b · c)`.
 *
 * Example: `(Z, +)` is a semigroup, since we can add any two integers and the result is also an integer.
 *
 * Example: `(Z, /)` is not a semigroup, since `2/3` s not an integer.
 *
 * Example: `(Z, -)` is not a semigroup, since `(1 - 1) - 1 != 1 - (1 - 1)`.
 *
 * Let `t`, `u` and `bop` be objects of types `T`, `U` and `Bop` respectively. Then the following expressions
 * must be valid:
 *
 * 1. `bop(t, t)`
 * 2. `bop(u, u)`
 * 3. `bop(u, t)`
 * 4. `bop(t, u)`
 *
 * Additionally, the expressions must return the same type, `R`.
 *
 * __Note:__ A semigroup requires all invocations to be regular. This is a semantic requirement only.
 */
template <class Bop, class T, class U>
concept semigroup =
    regular_invocable<Bop, T, T> &&                                           // Pure invocations
    regular_invocable<Bop, U, U> &&                                           //
    std::same_as<invoke_result_t<Bop, T, T>, invoke_result_t<Bop, U, U>> &&   //
    impl::regular_invocable_returns<invoke_result_t<Bop, T, T>, Bop, T, U> && // Mixed invocations
    impl::regular_invocable_returns<invoke_result_t<Bop, U, U>, Bop, U, T>;   //

// ------------------------------------ Foldable ------------------------------------ //

namespace detail {

template <class Acc, class Bop, class T>
concept foldable_to =                                        //
    std::movable<Acc> &&                                     //
    semigroup<Bop, Acc, T> &&                                //
    std::constructible_from<Acc, T> &&                       //
    std::convertible_to<T, Acc> &&                           //
    std::assignable_from<Acc &, invoke_result_t<Bop, T, T>>; //

template <class Acc, class Bop, class I>
concept indirectly_foldable_to =                                       //
    std::indirectly_readable<I> &&                                     //
    std::copy_constructible<Bop> &&                                    //
    semigroup<Bop &, indirect_value_t<I>, std::iter_reference_t<I>> && //
    foldable_to<Acc, Bop &, indirect_value_t<I>> &&                    //
    foldable_to<Acc, Bop &, std::iter_reference_t<I>>;                 //

} // namespace detail

/**
 * @brief Test if a binary operation supports a fold operation over a type.
 *
 * The binary operation must be associative but not necessarily commutative.
 *
 * This means a collection of one or more values of type `T` can be folded to a single value
 * of type `Acc` equal to `std::decay_t<semigroup_t<Bop, T>>` using `bop`, an operator of type `Bop`.
 *
 * For example using the infix notation `a · b` to mean `bop(a, b)`:
 *
 * 1. `fold bop [a] = a`
 * 2. `fold bop [a, b] = a · b`
 * 3. `fold bop [a, b, c] = a · b · c`
 * 4. `fold bop [a, b, c, ...] = a · b · c · ...`
 *
 * The order of evaluation is unspecified but the elements will not be reordered.
 *
 * @tparam Bop Associative binary operator.
 * @tparam I Input type
 */
template <class Bop, class T>
concept foldable =                                                         //
    invocable<Bop, T, T> &&                                                //
    detail::foldable_to<std::decay_t<invoke_result_t<Bop, T, T>>, Bop, T>; //

/**
 * @brief An indirect version of `lf::foldable`.
 *
 * @tparam Bop Associative binary operator.
 * @tparam I Input iterator.
 */
template <class Bop, class I>
concept indirectly_foldable =                                                             //
    std::indirectly_readable<I> &&                                                        //
    std::copy_constructible<Bop> &&                                                       //
    invocable<Bop &, std::iter_reference_t<I>, std::iter_reference_t<I>> &&               //
    detail::indirectly_foldable_to<std::decay_t<indirect_result_t<Bop &, I, I>>, Bop, I>; //

/**
 * @brief Compute the accumulator/result type for a fold operation.
 */
template <class Bop, std::random_access_iterator I, class Proj>
  requires indirectly_foldable<Bop, projected<I, Proj>>
using indirect_fold_acc_t = std::decay_t<indirect_result_t<Bop &, projected<I, Proj>, projected<I, Proj>>>;

namespace detail {

template <class Acc, class Bop, class O>
concept scannable_impl =
    std::indirectly_writable<O, Acc> &&                                            // Write result of fold.
    semigroup<Bop &, std::iter_reference_t<O>, std::iter_rvalue_reference_t<O>> && // Scan/reduce over O.
    std::indirectly_writable<O, indirect_result_t<Bop &, O, O>> &&                 //   Write result of -^.
    std::indirectly_writable<O, Acc &> &&                                          // Copy acc in scan.
    std::constructible_from<Acc, std::iter_reference_t<O>> &&                      // Initialize acc in scan.
    std::convertible_to<std::iter_reference_t<O>, Acc>;                            // Same as -^.

} // namespace detail

/**
 * @brief Test if a binary operation supports a scan operation over a type.
 *
 * The binary operation must be associative but not necessarily commutative.
 *
 * @tparam Bop The binary operation.
 * @tparam O The output iterator.
 * @tparam T The value type to scan over.
 */
template <class Bop, class O, class T>
concept scannable =                                       //
    std::indirectly_readable<O> &&                        //
    std::indirectly_writable<O, T> &&                     // n = 1 case.
    detail::foldable_to<std::iter_value_t<O>, Bop, T> &&  // Regular reduction over T.
    detail::scannable_impl<std::iter_value_t<O>, Bop, O>; //

/**
 * @brief An indirect version of `lf::scannable` over an iterator.
 *
 * @tparam Bop The binary operation.
 * @tparam O The output iterator.
 * @tparam T The input iterator.
 */
template <class Bop, class O, class I>
concept indirectly_scannable =
    std::indirectly_readable<O> &&                                  //
    std::indirectly_readable<I> &&                                  //
    std::copy_constructible<Bop> &&                                 //
    std::indirectly_writable<O, indirect_value_t<I>> &&             // n = 1 case.
    std::indirectly_writable<O, std::iter_reference_t<I>> &&        //   -^.
    detail::indirectly_foldable_to<std::iter_value_t<O>, Bop, I> && // Regular reduction over T.
    detail::scannable_impl<std::iter_value_t<O>, Bop, O>;

} // namespace lf

#endif /* D336C448_D1EE_4616_9277_E0D7D550A10A */


#ifndef B29F7CE3_05ED_4A3D_A464_CBA0454226F0
#define B29F7CE3_05ED_4A3D_A464_CBA0454226F0

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for invocable
#include <functional>  // for identity, invoke
#include <iterator>    // for random_access_iterator, sized_sentinel_for
#include <optional>    // for nullopt, optional
#include <ranges>      // for begin, end, iterator_t, empty, random_acces...
#include <type_traits> // for decay_t
 // for projected, indirect_fold_acc_t, indirectly_...     // for call, fork, join, dispatch       // for eventually             // for just            // for LF_ASSERT, LF_STATIC_CALL, LF_STATIC_CONST              // for tag, eager_throw_outside             // for task

/**
 * @file fold.hpp
 *
 * @brief A parallel adaptation of the `std::fold_[...]` family.
 */

namespace lf {

namespace impl {

namespace detail {

template <std::random_access_iterator I,
          std::sized_sentinel_for<I> S,
          class Proj,
          indirectly_foldable<projected<I, Proj>> Bop>
struct fold_overload_impl {

  using acc_t = indirect_fold_acc_t<Bop, I, Proj>;
  using int_t = std::iter_difference_t<I>;

  static constexpr bool async_bop = !std::invocable<Bop &, acc_t, std::iter_reference_t<projected<I, Proj>>>;

  /**
   * @brief Recursive implementation of `fold`, requires that `tail - head > 0`.
   */
  LF_STATIC_CALL auto
  operator()(auto fold, I head, S tail, int_t n, Bop bop, Proj proj) LF_STATIC_CONST->lf::task<acc_t> {

    LF_ASSERT(n > 1);

    int_t len = tail - head;

    LF_ASSERT(len > 0);

    if (len <= n) {

      acc_t lhs = acc_t(co_await just(proj)(*head)); // Require convertible to U

      using mod = modifier::eager_throw_outside;

      for (++head; head != tail; ++head) {
        if constexpr (async_bop) {
          co_await lf::dispatch<tag::call, mod>(&lhs, bop)(std::move(lhs), co_await just(proj)(*head));
        } else {
          lhs = std::invoke(bop, std::move(lhs), co_await just(proj)(*head));
        }
      }

      co_return std::move(lhs);
    }

    auto mid = head + (len / 2);

    LF_ASSERT(mid - head > 0);
    LF_ASSERT(tail - mid > 0);

    eventually<acc_t> lhs;
    eventually<acc_t> rhs;

    // clang-format off

    co_await lf::fork(&lhs, fold)(head, mid, n, bop, proj);

    LF_TRY {
      co_await lf::call(&rhs, fold)(mid, tail, n, bop, proj);
    } LF_CATCH_ALL {
      fold.stash_exception();
    }

    // clang-format on

    co_await lf::join;

    co_return co_await just(std::move(bop))( //
        *std::move(lhs),                     //
        *std::move(rhs)                      //
    );                                       //
  }

  /**
   * @brief Recursive implementation of `fold` for `n = 1`, requires that `tail - head > 1`.
   *
   * You cannot parallelize a chunk smaller than or equal to size three, for example, `a + b + c`
   * requires `a + b` to be evaluated before adding the result to `c`.
   */
  LF_STATIC_CALL auto
  operator()(auto fold, I head, S tail, Bop bop, Proj proj) LF_STATIC_CONST->lf::task<acc_t> {

    int_t len = tail - head;

    LF_ASSERT(len >= 0);

    switch (len) {
      case 0:
        LF_ASSERT(false && "Unreachable");
      case 1:
        co_return co_await lf::just(std::move(proj))(*head);
      default:
        auto mid = head + (len / 2);

        LF_ASSERT(mid - head > 0);
        LF_ASSERT(tail - mid > 0);

        eventually<acc_t> lhs;
        eventually<acc_t> rhs;

        // clang-format off

        co_await lf::fork(&lhs, fold)(head, mid, bop, proj);

        LF_TRY {
          co_await lf::call(&rhs, fold)(mid, tail, bop, proj);
        } LF_CATCH_ALL {
          fold.stash_exception();
        }

        // clang-format on

        co_await lf::join;

        co_return co_await just(std::move(bop))( //
            *std::move(lhs),                     //
            *std::move(rhs)                      //
        );                                       //
    }
  }
};

} // namespace detail

/**
 * @brief Overload set for `lf::fold`.
 */
struct fold_overload {
  /**
   * @brief Recursive implementation of `fold` for `n = 1` case.
   */
  template <std::random_access_iterator I,
            std::sized_sentinel_for<I> S,
            class Proj = std::identity,
            indirectly_foldable<projected<I, Proj>> Bop>
  LF_STATIC_CALL auto operator()(auto /* unused */, I head, S tail, Bop bop, Proj proj = {})
      LF_STATIC_CONST->lf::task<std::optional<indirect_fold_acc_t<Bop, I, Proj>>> {

    if (head == tail) {
      co_return std::nullopt;
    }

    co_return co_await lf::just(detail::fold_overload_impl<I, S, Proj, Bop>{})(
        std::move(head), std::move(tail), std::move(bop), std::move(proj) //
    );
  }

  /**
   * @brief Recursive implementation of `fold`.
   *
   * This will dispatch to the `n = 1` case if `n <= 3`.
   */
  template <std::random_access_iterator I,
            std::sized_sentinel_for<I> S,
            class Proj = std::identity,
            indirectly_foldable<projected<I, Proj>> Bop>
  LF_STATIC_CALL auto
  operator()(auto /* unused */, I head, S tail, std::iter_difference_t<I> n, Bop bop, Proj proj = {})
      LF_STATIC_CONST->lf::task<std::optional<indirect_fold_acc_t<Bop, I, Proj>>> {

    if (head == tail) {
      co_return std::nullopt;
    }

    if (n == 1) {
      co_return co_await lf::just(detail::fold_overload_impl<I, S, Proj, Bop>{})(
          std::move(head), std::move(tail), std::move(bop), std::move(proj) //
      );
    }

    co_return co_await lf::just(detail::fold_overload_impl<I, S, Proj, Bop>{})(
        std::move(head), std::move(tail), n, std::move(bop), std::move(proj) //
    );
  }

  /**
   * @brief Range version.
   */
  template <std::ranges::random_access_range Range,
            class Proj = std::identity,
            indirectly_foldable<projected<std::ranges::iterator_t<Range>, Proj>> Bop>
    requires std::ranges::sized_range<Range>
  LF_STATIC_CALL auto operator()(auto /* unused */, Range &&range, Bop bop, Proj proj = {}) LF_STATIC_CONST
      ->lf::task<std::optional<indirect_fold_acc_t<Bop, std::ranges::iterator_t<Range>, Proj>>> {

    if (std::ranges::empty(range)) {
      co_return std::nullopt;
    }

    using I = std::decay_t<decltype(std::ranges::begin(range))>;
    using S = std::decay_t<decltype(std::ranges::end(range))>;

    co_return co_await lf::just(detail::fold_overload_impl<I, S, Proj, Bop>{})(
        std::ranges::begin(range), std::ranges::end(range), std::move(bop), std::move(proj) //
    );
  }

  /**
   * @brief Range version.
   */
  template <std::ranges::random_access_range Range,
            class Proj = std::identity,
            indirectly_foldable<projected<std::ranges::iterator_t<Range>, Proj>> Bop>
    requires std::ranges::sized_range<Range>
  LF_STATIC_CALL auto operator()(auto /* unused */,
                                 Range &&range,
                                 std::ranges::range_difference_t<Range> n,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST
      ->lf::task<std::optional<indirect_fold_acc_t<Bop, std::ranges::iterator_t<Range>, Proj>>> {

    if (std::ranges::empty(range)) {
      co_return std::nullopt;
    }

    using I = std::decay_t<decltype(std::ranges::begin(range))>;
    using S = std::decay_t<decltype(std::ranges::end(range))>;

    if (n == 1) {
      co_return co_await lf::just(detail::fold_overload_impl<I, S, Proj, Bop>{})(
          std::ranges::begin(range), std::ranges::end(range), std::move(bop), std::move(proj) //
      );
    }

    co_return co_await lf::just(detail::fold_overload_impl<I, S, Proj, Bop>{})(
        std::ranges::begin(range), std::ranges::end(range), n, std::move(bop), std::move(proj) //
    );
  }
};

} // namespace impl

// clang-format off

/**
 * @brief A parallel implementation of `std::ranges::fold_left_first`.
 *
 * \rst
 *
 * Effective call signature:
 *
 * .. code ::
 *
 *    template <std::random_access_iterator I,
 *              std::sized_sentinel_for<I> S,
 *              typename Proj = std::identity,
 *              indirectly_foldable<projected<I, Proj>> Bop
 *              >
 *    auto fold(I head, S tail, std::iter_difference_t<I> n, Bop bop, Proj proj = {}) -> indirect_fold_acc_t<Bop, I, Proj>;
 *
 * Overloads exist for a random-access range (instead of ``head`` and ``tail``) and ``n`` can be omitted
 * (which will set ``n = 1``).
 *
 * Exemplary usage:
 *
 * .. code::
 *
 *    co_await just[fold](v, 10, std::plus<>{}, [](auto &elem) -> std::size_t {
 *      return elem % 2 == 0;
 *    });
 *
 * \endrst
 * 
 * This counts the number of even elements in `v` in parallel, using a chunk size of ``10``.
 *
 * If the binary operator or projection handed to `fold` are async functions, then they will be
 * invoked asynchronously, this allows you to launch further tasks recursively.
 *
 * Unlike the `std::ranges::fold` variations, this function will make an implementation defined number of copies
 * of the function objects and may invoke these copies concurrently.
 */
inline constexpr impl::fold_overload fold = {};

// clang-format on

} // namespace lf

#endif /* B29F7CE3_05ED_4A3D_A464_CBA0454226F0 */


#ifndef C5165911_AD64_4DAC_ACEB_DDB9B718B3ED
#define C5165911_AD64_4DAC_ACEB_DDB9B718B3ED

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <functional> // for identity
#include <iterator>   // for iter_difference_t, random_access_iterator
#include <ranges>     // for begin, end, iterator_t, random_access_range
 // for indirectly_unary_invocable, projected     // for call, fork, join             // for just            // for LF_ASSERT, LF_STATIC_CALL, LF_STATIC_CONST             // for task

/**
 * @file for_each.hpp
 *
 * @brief A parallel implementation of `std::for_each`.
 */

namespace lf {

namespace impl {

/**
 * @brief Overload set for `lf::for_each`.
 */
struct for_each_overload {

  /**
   * @brief Divide and conquer implementation.
   */
  template <std::random_access_iterator I,
            std::sized_sentinel_for<I> S,
            typename Proj = std::identity,
            indirectly_unary_invocable<projected<I, Proj>> Fun>
  LF_STATIC_CALL auto
  operator()(auto for_each, I head, S tail, std::iter_difference_t<I> n, Fun fun, Proj proj = {})
      LF_STATIC_CONST->lf::task<> {

    LF_ASSERT(n > 0);

    std::iter_difference_t<I> len = tail - head;

    LF_ASSERT(len >= 0);

    if (len == 0) {
      co_return;
    }

    if (len <= n) {
      for (; head != tail; ++head) {
        co_await lf::just(fun)(co_await just(proj)(*head));
      }
      co_return;
    }

    auto mid = head + (len / 2);

    // clang-format off

    co_await lf::fork(for_each)(head, mid, n, fun, proj);

    LF_TRY {
      co_await lf::call(for_each)(mid, tail, n, fun, proj);
    } LF_CATCH_ALL { 
      for_each.stash_exception(); 
    }

    // clang-format on

    co_await lf::join;
  }

  /**
   * @brief Divide and conquer n = 1 version.
   */
  template <std::random_access_iterator I,
            std::sized_sentinel_for<I> S,
            typename Proj = std::identity,
            indirectly_unary_invocable<projected<I, Proj>> Fun>
  LF_STATIC_CALL auto
  operator()(auto for_each, I head, S tail, Fun fun, Proj proj = {}) LF_STATIC_CONST->lf::task<> {

    std::iter_difference_t<I> len = tail - head;

    LF_ASSERT(len >= 0);

    switch (len) {
      case 0:
        break;
      case 1:
        co_await lf::just(fun)(co_await just(proj)(*head));
        break;
      default:
        auto mid = head + (len / 2);

        // clang-format off

        co_await lf::fork(for_each)(head, mid, fun, proj);

        LF_TRY {
          co_await lf::call(for_each)(mid, tail, fun, proj);
        } LF_CATCH_ALL { 
          for_each.stash_exception(); 
        }

        // clang-format on

        co_await lf::join;
    }
  }

  /**
   * @brief Range version, dispatches to the iterator version.
   *
   * This will dispatch to `n = 1` specialization if `n = 1`
   */
  template <std::ranges::random_access_range Range,
            typename Proj = std::identity,
            indirectly_unary_invocable<projected<std::ranges::iterator_t<Range>, Proj>> Fun>
    requires std::ranges::sized_range<Range>
  LF_STATIC_CALL auto
  operator()(auto for_each, Range &&range, std::ranges::range_difference_t<Range> n, Fun fun, Proj proj = {})
      LF_STATIC_CONST->lf::task<> {

    LF_ASSERT(n > 0);

    if (n == 1) {
      co_await just(for_each)(std::ranges::begin(range), std::ranges::end(range), fun, proj);
    } else {
      co_await just(for_each)(std::ranges::begin(range), std::ranges::end(range), n, fun, proj);
    }
  }

  /**
   * @brief Range n = 1, version, dispatches to the iterator version.
   */
  template <std::ranges::random_access_range Range,
            typename Proj = std::identity,
            indirectly_unary_invocable<projected<std::ranges::iterator_t<Range>, Proj>> Fun>
    requires std::ranges::sized_range<Range>
  LF_STATIC_CALL auto
  operator()(auto for_each, Range &&range, Fun fun, Proj proj = {}) LF_STATIC_CONST->lf::task<> {
    co_await lf::just(for_each)(
        std::ranges::begin(range), std::ranges::end(range), std::move(fun), std::move(proj) //
    );
  }
};

} // namespace impl

/**
 * @brief A parallel implementation of `std::ranges::for_each`.
 *
 * \rst
 *
 * Effective call signature:
 *
 * .. code ::
 *
 *    template <std::random_access_iterator I,
 *              std::sized_sentinel_for<I> S,
 *              typename Proj = std::identity,
 *              indirectly_unary_invocable<projected<I, Proj>> Fun
 *              >
 *    void for_each(I head, S tail, std::iter_difference_t<I> n, Fun fun, Proj proj = {});
 *
 * Overloads exist for a random-access range (instead of ``head`` and ``tail``) and ``n`` can be omitted
 * (which will set ``n = 1``).
 *
 * Exemplary usage:
 *
 * .. code::
 *
 *    co_await just[for_each](v, 10, [](auto &elem) {
 *      elem = 0;
 *    });
 *
 * \endrst
 *
 * This will set each element of `v` to `0` in parallel using a chunk size of ``10``.
 *
 * If the function or projection handed to `for_each` are async functions, then they will be
 * invoked asynchronously, this allows you to launch further tasks recursively.
 *
 * Unlike `std::ranges::for_each`, this function will make an implementation defined number of copies
 * of the function objects and may invoke these copies concurrently.
 */
inline constexpr impl::for_each_overload for_each = {};

} // namespace lf

#endif /* C5165911_AD64_4DAC_ACEB_DDB9B718B3ED */


#ifndef B13463FB_3CF9_46F1_AFAC_19CBCB99A23C
#define B13463FB_3CF9_46F1_AFAC_19CBCB99A23C

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for invocable
#include <functional>  // for invoke
#include <type_traits> // for invoke_result_t
#include <utility>     // for forward
 // for LF_HOF_RETURNS, LF_STATIC_CALL  // for task

/**
 * @file lift.hpp
 *
 * @brief Higher-order functions for lifting functions into async functions.
 */

namespace lf {

/**
 * @brief A higher-order function that lifts a function into an asynchronous function.
 *
 * \rst
 *
 * This is useful for when you want to fork a regular function:
 *
 * .. code::
 *
 *    auto work(int x) -> int;
 *
 * Then later in some async context you can do:
 *
 * .. code::
 *
 *    {
 *      int a, b;
 *
 *      co_await fork[a, lift](work, 42);
 *      co_await fork[b, lift](work, 007);
 *
 *      co_await join;
 *    }
 *
 * .. note::
 *
 *    The lifted function will accept arguments by forwarding reference.
 *
 * \endrst
 */
inline constexpr auto lift = []<class F, class... Args>(auto, F &&func, Args &&...args)
                                 LF_STATIC_CALL -> task<std::invoke_result_t<F, Args...>>
  requires std::invocable<F, Args...>
{
  co_return std::invoke(std::forward<F>(func), std::forward<Args>(args)...);
};

/**
 * @brief Lift an overload-set/template into a constrained lambda.
 *
 * This is useful for passing overloaded/template names to higher order functions like `lf::fork`/`lf::call`.
 */
#define LF_LOFT(name)                                                                                        \
  [](auto &&...args) LF_STATIC_CALL LF_HOF_RETURNS(name(::std::forward<decltype(args)>(args)...))

/**
 * @brief Lift an overload-set/template into a constrained capturing lambda.
 *
 * The variadic arguments are used as the lambda's capture.
 *
 * This is useful for passing overloaded/template names to higher order functions like `lf::fork`/`lf::call`.
 */
#define LF_CLOFT(name, ...)                                                                                  \
  [__VA_ARGS__](auto &&...args) LF_HOF_RETURNS(name(::std::forward<decltype(args)>(args)...))

} // namespace lf

#endif /* B13463FB_3CF9_46F1_AFAC_19CBCB99A23C */


#ifndef DFB97DB6_8A5B_401E_AB7B_A386D71F4EE1
#define DFB97DB6_8A5B_401E_AB7B_A386D71F4EE1

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <functional> // for identity
#include <iterator>   // for random_access_iterator, indirectly_copyable
#include <ranges>     // for iterator_t, begin, end, random_access_range
 // for projected, indirectly_unary_invocable     // for call, fork, join             // for just            // for LF_ASSERT, LF_STATIC_CALL, LF_STATIC_CONST             // for task

/**
 * @file map.hpp
 *
 * @brief A parallel implementation of `std::map`.
 */

namespace lf {

namespace impl {

/**
 * @brief Overload set for `lf::map`.
 */
struct map_overload {
  /**
   * @brief Divide and conquer implementation.
   */
  template <std::random_access_iterator I,
            std::sized_sentinel_for<I> S,
            std::random_access_iterator O,
            typename Proj = std::identity,
            indirectly_unary_invocable<projected<I, Proj>> Fun>
    requires std::indirectly_copyable<projected<I, Proj, Fun>, O>
  LF_STATIC_CALL auto
  operator()(auto map, I head, S tail, O out, std::iter_difference_t<I> n, Fun fun, Proj proj = {})
      LF_STATIC_CONST->lf::task<> {

    LF_ASSERT(n > 0);

    std::iter_difference_t<I> len = tail - head;

    LF_ASSERT(len >= 0);

    if (len == 0) {
      co_return;
    }

    if (len <= n) {
      for (; head != tail; ++head, ++out) {
        *out = co_await lf::just(fun)(co_await just(proj)(*head));
      }
      co_return;
    }

    auto dif = (len / 2);
    auto mid = head + dif;

    // clang-format off

    co_await lf::fork(map)(head, mid, out, n, fun, proj);

    LF_TRY {
      co_await lf::call(map)(mid, tail, out + dif, n, fun, proj);
    } LF_CATCH_ALL { 
      map.stash_exception(); 
    }

    // clang-format on

    co_await lf::join;
  }

  /**
   * @brief Divide and conquer n = 1 version.
   */
  template <std::random_access_iterator I,
            std::sized_sentinel_for<I> S,
            std::random_access_iterator O,
            typename Proj = std::identity,
            indirectly_unary_invocable<projected<I, Proj>> Fun>
    requires std::indirectly_copyable<projected<I, Proj, Fun>, O>
  LF_STATIC_CALL auto
  operator()(auto map, I head, S tail, O out, Fun fun, Proj proj = {}) LF_STATIC_CONST->lf::task<> {

    std::iter_difference_t<I> len = tail - head;

    LF_ASSERT(len >= 0);

    switch (len) {
      case 0:
        break;
      case 1:
        *out = co_await lf::just(fun)(co_await just(proj)(*head));
        break;
      default:
        auto dif = (len / 2);
        auto mid = head + dif;

        // clang-format off

        co_await lf::fork(map)(head, mid, out, fun, proj);

        LF_TRY {  
          co_await lf::call(map)(mid, tail, out + dif, fun, proj);
        } LF_CATCH_ALL { 
          map.stash_exception(); 
        }

        // clang-format on

        co_await lf::join;
    }
  }

  /**
   * @brief Range version, dispatches to the iterator version.
   *
   * This will dispatch to `n = 1` specialization if `n = 1`
   */
  template <std::ranges::random_access_range Range,
            std::random_access_iterator O,
            typename Proj = std::identity,
            indirectly_unary_invocable<projected<std::ranges::iterator_t<Range>, Proj>> Fun>
    requires std::ranges::sized_range<Range> &&
             std::indirectly_copyable<projected<std::ranges::iterator_t<Range>, Proj, Fun>, O>
             LF_STATIC_CALL auto operator()(auto map,
                                            Range &&range,
                                            O out,
                                            std::ranges::range_difference_t<Range> n,
                                            Fun fun,
                                            Proj proj = {}) LF_STATIC_CONST->lf::task<> {

    LF_ASSERT(n > 0);

    if (n == 1) {
      co_await just(map)(std::ranges::begin(range), std::ranges::end(range), out, fun, proj);
    } else {
      co_await just(map)(std::ranges::begin(range), std::ranges::end(range), out, n, fun, proj);
    }
  }

  /**
   * @brief Range n = 1, version, dispatches to the iterator version.
   */
  template <std::ranges::random_access_range Range,
            typename Proj = std::identity,
            std::random_access_iterator O,
            indirectly_unary_invocable<projected<std::ranges::iterator_t<Range>, Proj>> Fun>
    requires std::ranges::sized_range<Range> &&
             std::indirectly_copyable<projected<std::ranges::iterator_t<Range>, Proj, Fun>, O>
             LF_STATIC_CALL auto
             operator()(auto map, Range &&range, O out, Fun fun, Proj proj = {}) LF_STATIC_CONST->lf::task<> {
    co_await lf::just(map)(
        std::ranges::begin(range), std::ranges::end(range), out, std::move(fun), std::move(proj) //
    );
  }
};

} // namespace impl

/**
 * @brief A parallel variation of `std::transform`.
 *
 * \rst
 *
 * Effective call signature:
 *
 * .. code ::
 *
 *    template <std::random_access_iterator I,
 *              std::sized_sentinel_for<I> S,
 *              std::random_access_iterator O
 *              typename Proj = std::identity,
 *              indirectly_unary_invocable<projected<I, Proj>> Fun
 *              >
 *      requires std::indirectly_copyable<projected<I, Proj, Fun>, O>
 *    void map(I head, S tail, O out, std::iter_difference_t<I> n, Fun fun, Proj proj = {});
 *
 * Overloads exist for a random-access range (instead of ``head`` and ``tail``) and ``n`` can be omitted
 * (which will set ``n = 1``).
 *
 * Exemplary usage:
 *
 * .. code::
 *
 *    std::vector<int> out(v.size());
 *
 *    co_await just[map](v, out.begin(), 10, [](int const& elem) {
 *      return elem + 1;
 *    });
 *
 * \endrst
 *
 * This will set each element of `out` to one more than corresponding element in `v` using
 * a chunk size of ``10``.
 *
 * The input and output ranges must either be distinct (i.e. non-overlapping) or the same range (hence the
 * transformation may be performed in-place).
 *
 * If the function or projection handed to `map` are async functions, then they will be
 * invoked asynchronously, this allows you to launch further tasks recursively.
 *
 * Unlike `std::transform`, this function will make an implementation defined number of copies
 * of the function objects and may invoke these copies concurrently.
 */
inline constexpr impl::map_overload map = {};

} // namespace lf

#endif /* DFB97DB6_8A5B_401E_AB7B_A386D71F4EE1 */


#ifndef BF260626_9180_496A_A893_A1A7F2B6781E
#define BF260626_9180_496A_A893_A1A7F2B6781E

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <concepts>    // for same_as
#include <functional>  // for identity, invoke
#include <iterator>    // for random_access_iterator, sized_sentinel_for
#include <ranges>      // for begin, end, iterator_t, random_access_range
#include <type_traits> // for conditional_t
 // for indirectly_scannable, projected     // for call, dispatch, fork, join        // for async_invocable             // for just            // for LF_STATIC_CALL, LF_STATIC_CONST, unreachable              // for tag, eager_throw_outside, sync_outside             // for task

/**
 * @file scan.hpp
 *
 * @brief Implementation of a parallel scan.
 */

namespace lf {

namespace impl {

/**
 * Operation propagates as:
 *
 * scan -> (scan, x)
 *    x can be scan if the left child completes synchronously, otherwise it must be a fold.
 *
 * fold -> (fold, fold)
 */
enum class op {
  scan,
  fold,
};

/**
 * Possible intervals:
 *
 * Full range: (lhs, rhs)
 * Sub range: (lhs, mid), (mid, mid), (mid, rhs)
 *
 *
 * Transformations:
 *
 * (lhs, rhs) -> (lhs, mid), (mid, rhs)
 *
 * (lhs, mid) -> (lhs, mid), (mid, mid)
 * (mid, rhs) -> (mid, mid), (mid, rhs)
 *
 * (mid, mid) -> (mid, mid), (mid, mid)
 *
 */
enum class interval {
  all,
  lhs,
  mid,
  rhs,
};

/**
 * @brief Get the interval to the left of the current interval.
 */
consteval auto l_child_of(interval ival) -> interval {
  switch (ival) {
    case interval::all:
    case interval::lhs:
      return interval::lhs;
    case interval::mid:
    case interval::rhs:
      return interval::mid;
    default:
      unreachable();
  }
}

/**
 * @brief Get the interval to the right of the current interval.
 */
consteval auto r_child_of(interval ival) -> interval {
  switch (ival) {
    case interval::all:
    case interval::rhs:
      return interval::rhs;
    case interval::lhs:
    case interval::mid:
      return interval::mid;
    default:
      unreachable();
  }
}

/**
 * @brief Reduction up-sweep of the scan.
 *
 * See https://en.wikipedia.org/wiki/Prefix_sum#Parallel_algorithms this computes the reduction stage of the
 * work-efficient algorithm. This is chunked and recursive. Essentially, we recursively divide the input into
 * smaller chunk (building an implicit balanced binary tree) until the chunk size is reached. Then we sweep
 * from the leaves of the tree (the chunks) to the root. At each tier we replace the right child with the sum
 * of the left and right child.
 *
 * Example:
 *
 * Input: [1, 1, 1, 1, 1, 1, 1]
 *
 * Build tree until n = 2:
 *
 * Partition 0: [1, 1, 1, 1, 1, 1, 1]
 *                     |- l_child  |- r_child
 * Partition 1: [1, 1, 1][1, 1, 1, 1]
 * Partition 2: [1][1, 1][1, 1][1, 1]
 *
 * At the leaves we compute the scan of each chunk:
 *
 * Partition 0: [1, 1, 2, 1, 2, 1, 2] <- views so they change as well
 * Partition 1: [1, 1, 2][1, 2, 1, 2] <- ^
 * Partition 2: [1][1, 2][1, 2][1, 2] <- Scan each chunk.
 *
 * Then we sweep up the tree:
 *
 * Partition 0: [1, 1, 3, 1, 2, 1, 4]
 * Partition 1: [1, 1, 3][1, 2, 1, 4] <- combining below into right child
 * Partition 2: [1][1, 2][1, 2][1, 2]
 *
 * Partition 0: [1, 1, 3, 1, 2, 1, 7] <- again combining below into right child
 * Partition 1: [1, 1, 3][1, 2, 1, 4]
 * Partition 2: [1][1, 2][1, 2][1, 2]
 *
 *
 * Final views at all partition levels:
 *
 * Partition 0: [1, 1, 3, 1, 2, 1, 7]
 * Partition 1: [1, 1, 3][1, 2, 1, 7]
 * Partition 2: [1][1, 3][1, 2][1, 7]
 *
 * As an optimization over the basic algorithm we scan the chunks on the left of the tree.
 */
template <std::random_access_iterator I, //
          std::sized_sentinel_for<I> S,  //
          class Proj,                    //
          class Bop,                     //
          std::random_access_iterator O, //
          interval Ival = interval::all, //
          op Op = op::scan               //
          >
struct rise_sweep {
  /**
   * @brief The iterator difference type of I.
   */
  using int_t = std::iter_difference_t<I>;
  /**
   * @brief The accumulator type of the reduction.
   */
  using acc_t = std::iter_value_t<O>;
  /**
   * @brief The type of the task returned by the algorithm.
   */
  using task_t = lf::task<std::conditional_t<Op == op::scan, I, void>>;
  /**
   * @brief Propagate the operation to the left child.
   */
  using up_lhs = rise_sweep<I, S, Proj, Bop, O, l_child_of(Ival), Op>;
  /**
   * @brief The right child's operation depends on the readiness of the left child.
   */
  template <op OpChild>
  using up_rhs = rise_sweep<I, S, Proj, Bop, O, r_child_of(Ival), OpChild>;
  /**
   * @brief If the binary operator is asynchronous, some optimizations can be done if it's not async.
   */
  static constexpr bool async_bop = async_invocable<Bop &, acc_t, acc_t>;
  /**
   * @brief Returns one-past-the-end of the scanned range.
   */
  LF_STATIC_CALL auto
  operator()(auto self, I beg, S end, int_t n, Bop bop, Proj proj, O out) LF_STATIC_CONST->task_t {
    //
    int_t const size = end - beg;

    LF_ASSERT(size >= 1);

    static constexpr auto eager_call_outside = dispatch<tag::call, modifier::eager_throw_outside>;

    if (size <= n) {
      if constexpr (Op == op::fold) { // Equivalent to a fold over acc_t, left sibling not ready.

        static_assert(Ival != interval::lhs && Ival != interval::all, "left can always scan");

        if constexpr (Ival == interval::mid) {
          // Mid segment has a right sibling so do the fold.
          acc_t acc = acc_t(co_await lf::just(proj)(*beg));
          // The optimizer sometimes trips-up so we force a bit of unrolling.
          LF_PRAGMA_UNROLL(8)
          for (++beg; beg != end; ++beg) {
            if constexpr (async_bop) {
              co_await eager_call_outside(&acc, bop)(std::move(acc), co_await lf::just(proj)(*beg));
            } else {
              acc = std::invoke(bop, std::move(acc), co_await lf::just(proj)(*beg));
            }
          }
          // Store in the correct location in the output (in-case the scan is in-place).
          *(out + size - 1) = std::move(acc);
        } else {
          static_assert(Ival == interval::rhs, "else rhs, which has no right sibling that consumes the fold");
        }

        co_return;

      } else if constexpr (Ival == interval::mid || Ival == interval::rhs) { // A scan with left sibling.

        acc_t acc = acc_t(*(out - 1));

        LF_PRAGMA_UNROLL(8)
        for (; beg != end; ++beg, ++out) {
          if constexpr (async_bop) {
            co_await eager_call_outside(&acc, bop)(std::move(acc), co_await lf::just(proj)(*beg));
          } else {
            acc = std::invoke(bop, std::move(acc), co_await lf::just(proj)(*beg));
          }
          *out = acc;
        }

        co_return end;

      } else { // A scan with no left sibling.

        acc_t acc = acc_t(co_await lf::just(proj)(*beg));
        *out = acc;
        ++beg;
        ++out;

        LF_PRAGMA_UNROLL(8)
        for (; beg != end; ++beg, ++out) {
          if constexpr (async_bop) {
            co_await eager_call_outside(&acc, bop)(std::move(acc), co_await lf::just(proj)(*beg));
          } else {
            acc = std::invoke(bop, std::move(acc), co_await lf::just(proj)(*beg));
          }
          *out = acc;
        }

        co_return end;
      }
    }

    // Divide and recurse.
    int_t const mid = size / 2;

    /**
     * Specified through the following concept chain:
     *  random_access_iterator -> bidirectional_iterator -> forward_iterator -> incrementable -> regular
     */
    I left_out;

    if constexpr (Op == op::scan) {
      // If we are a scan then left child is a scan,
      static constexpr auto fork_sync = dispatch<tag::fork, modifier::sync_outside>;
      // Unconditionally launch left child (scan).
      auto ready = co_await fork_sync(&left_out, up_lhs{})(beg, beg + mid, n, bop, proj, out);
      // If the left child is ready and completely scanned then rhs can be a scan.
      // Otherwise the rhs must be a fold.
      if (ready && left_out == beg + mid) {
        // Effectively fused child trees into a single scan.
        // Right most scanned now from right child.
        co_return co_await lf::just(up_rhs<op::scan>{})(beg + mid, end, n, bop, proj, out + mid);
      }
    } else {
      co_await lf::fork(up_lhs{})(beg, beg + mid, n, bop, proj, out);
    }

    // clang-format off
    LF_TRY {
      co_await lf::call(up_rhs<op::fold>{})(beg + mid, end, n, bop, proj, out + mid);
    } LF_CATCH_ALL{
      self.stash_exception();
    }
    // clang-format on
    co_await lf::join;

    // Restore invariant: propagate the reduction (scan), to the right sibling (if we have one).
    if constexpr (Ival == interval::lhs || Ival == interval::mid) {

      O l_child = out + mid - 1;
      O r_child = out + size - 1;

      if constexpr (async_bop) {
        co_await eager_call_outside(r_child, bop)(*l_child, std::ranges::iter_move(r_child));
      } else {
        *r_child = std::invoke(bop, *l_child, std::ranges::iter_move(r_child));
      }
    }

    // If we are a scan then we return the end of the scanned range which was in the left child.
    if constexpr (Op == op::scan) {
      co_return left_out;
    }
  }
};

/**
 * As some of the input is always scanned during the reduction sweep, we always have a left sibling.
 */
template <std::random_access_iterator I, //
          std::sized_sentinel_for<I> S,  //
          class Proj,                    //
          class Bop,                     //
          std::random_access_iterator O, //
          interval Ival                  //
          >
  requires (Ival == interval::mid || Ival == interval::rhs)
struct fall_sweep_impl {
  /**
   * @brief The iterator difference type of I.
   */
  using int_t = std::iter_difference_t<I>;
  /**
   * @brief The accumulator type of the reduction.
   */
  using acc_t = std::iter_value_t<O>;
  /**
   * @brief Left child of the current interval.
   */
  using down_lhs = fall_sweep_impl<I, S, Proj, Bop, O, l_child_of(Ival)>;
  /**
   * @brief Right child of the current interval.
   */
  using down_rhs = fall_sweep_impl<I, S, Proj, Bop, O, r_child_of(Ival)>;
  /**
   * @brief If the binary operator is asynchronous, some optimizations can be done if it's not async.
   */
  static constexpr bool async_bop = async_invocable<Bop &, acc_t, acc_t>;
  /**
   * @brief Recursive implementation of `fall_sweep`, requires that `tail - head > 0`.
   */
  LF_STATIC_CALL auto
  operator()(auto self, I beg, S end, int_t n, Bop bop, Proj proj, O out) LF_STATIC_CONST->lf::task<> {

    int_t const size = end - beg;

    LF_ASSERT(size > 0);

    static constexpr auto eager_call_outside = dispatch<tag::call, modifier::eager_throw_outside>;

    if (size <= n) { // Equivalent to a scan (maybe) with an initial value.

      acc_t acc = acc_t(*(out - 1));

      // The furthest-right chunk has no reduction stored in it so we include it in the scan.
      I last = (Ival == interval::rhs) ? end : beg + size - 1;

      LF_PRAGMA_UNROLL(8)
      for (; beg != last; ++beg, ++out) {
        if constexpr (async_bop) {
          co_await eager_call_outside(&acc, bop)(std::move(acc), co_await lf::just(proj)(*beg));
        } else {
          acc = std::invoke(bop, std::move(acc), co_await lf::just(proj)(*beg));
        }
        *out = acc;
      }
      co_return;
    }

    int_t const mid = size / 2;

    // Restore invariant: propagate the reduction (scan), we always have a left sibling.
    if constexpr (async_bop) {
      co_await eager_call_outside(out + mid - 1, bop)(*(out - 1), std::ranges::iter_move(out + mid - 1));
    } else {
      *(out + mid - 1) = std::invoke(bop, *(out - 1), std::ranges::iter_move(out + mid - 1));
    }

    // Divide and recurse.
    co_await lf::fork(down_lhs{})(beg, beg + mid, n, bop, proj, out);
    // clang-format off
    LF_TRY {
      co_await lf::call(down_rhs{})(beg + mid, end, n, bop, proj, out + mid);
    } LF_CATCH_ALL{
      self.stash_exception();
    }
    // clang-format on
    co_await lf::join;
  }
};

/**
 * As some of the input is always scanned during the reduction sweep, we always have a left sibling.
 */
template <std::random_access_iterator I, //
          std::sized_sentinel_for<I> S,  //
          class Proj,                    //
          class Bop,                     //
          std::random_access_iterator O, //
          interval Ival = interval::all  //
          >
struct fall_sweep {
  /**
   * @brief The iterator difference type of I.
   */
  using int_t = std::iter_difference_t<I>;
  /**
   * @brief Recursion to the left, computed interval.
   */
  using recur_lhs = fall_sweep<I, S, Proj, Bop, O, l_child_of(Ival)>;
  /**
   * @brief Recursion to the right, computed interval.
   */
  using recur_rhs = fall_sweep<I, S, Proj, Bop, O, r_child_of(Ival)>;
  /**
   * @brief Call the implementation, this can never be called on the left.
   */
  using down_rhs = fall_sweep_impl<I, S, Proj, Bop, O, r_child_of(Ival)>;
  /**
   * @brief Launch the implementation in the un-scanned chunks.
   *
   * Options:
   *  left fully scanned and right fully scanned -> return (make this impossible).
   *
   *  left fully scanned, right part-scanned -> (invar holds) recurse on right.
   *  left fully scanned, right un-scanned -> (invar holds), call fall_sweep on right.
   *  left part scanned, right un-scanned -> restore invar, recurse on left, call fall_sweep on right.
   */
  LF_STATIC_CALL auto operator()(auto self, I beg, S end, int_t n, Bop bop, Proj proj, O out, I scan_end)
      LF_STATIC_CONST->lf::task<> {

    LF_ASSERT(scan_end < end);

    for (;;) {

      int_t size = end - beg;
      int_t mid = size / 2;

      I split = beg + mid;

      if /*  */ (scan_end < split) {
        // Left part-scanned, right un-scanned.
        co_await lf::fork(recur_lhs{})(beg, beg + mid, n, bop, proj, out, scan_end);
        // clang-format off
        LF_TRY {  
            co_await lf::call(down_rhs{})(beg + mid, end, n, bop, proj, out + mid);
        } LF_CATCH_ALL{
          self.stash_exception();
        }
        // clang-format on
        co_await lf::join;
        co_return;
      } else if (scan_end == split) {
        // Left fully scanned, right un-scanned.
        co_return co_await lf::just(down_rhs{})(beg + mid, end, n, bop, proj, out + mid);
      } else if (scan_end > split) {
        // Left fully scanned, right part-scanned.
        if constexpr (!std::same_as<fall_sweep, recur_rhs>) {
          co_return co_await lf::just(recur_rhs{})(beg + mid, end, n, bop, proj, out + mid, scan_end);
        } else {
          // Recursion looks like, -^, hence we can loop.
          beg = beg + mid;
          out = out + mid;
          continue;
        }
      } else {
        unreachable();
      }
    }
  }
};

/**
 * @brief A wrapper around the rise/fall algorithms.
 */
struct scan_impl {
  /**
   * @brief Calls the rise_sweep and fall_sweep algorithms, checks for empty input.
   */
  template <std::random_access_iterator I, //
            std::sized_sentinel_for<I> S,  //
            std::random_access_iterator O, //
            class Proj,                    //
            class Bop                      //
            >
  LF_STATIC_CALL auto
  operator()(auto /* unused */, I beg, S end, O out, std::iter_difference_t<I> n, Bop bop, Proj proj)
      LF_STATIC_CONST->lf::task<> {

    // Early exit required if the input is empty.
    if (end == beg) {
      co_return;
    }

    constexpr rise_sweep<I, S, Proj, Bop, O> rise = {};
    constexpr fall_sweep<I, S, Proj, Bop, O> fall = {};

    // Up-sweep the reduction.
    I scan_end = co_await lf::just(rise)(beg, end, n, bop, proj, out);

    if (scan_end != end) {
      // If some un-scanned input remains, fall-sweep it.
      co_await lf::just(fall)(beg, end, n, bop, proj, out, scan_end);
    }
  }
};

/**
 * @brief Eight overloads of scan for (iterator/range, chunk/in_place, n = 1/n != 1).
 */
struct scan_overload {
  /**
   * @brief [iterator,chunk,output] version (5-6)
   */
  template <std::random_access_iterator I,                  //
            std::sized_sentinel_for<I> S,                   //
            std::random_access_iterator O,                  //
            class Proj = std::identity,                     //
            indirectly_scannable<O, projected<I, Proj>> Bop //
            >
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 I beg,
                                 S end,
                                 O out,
                                 std::iter_difference_t<I> n,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<> {
    co_return co_await lf::just(impl::scan_impl{})(beg, end, out, n, bop, proj);
  }
  /**
   * @brief [iterator,n = 1,output] version (4-5)
   */
  template <std::random_access_iterator I,                  //
            std::sized_sentinel_for<I> S,                   //
            std::random_access_iterator O,                  //
            class Proj = std::identity,                     //
            indirectly_scannable<O, projected<I, Proj>> Bop //
            >
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 I beg,
                                 S end,
                                 O out,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<void> {
    co_return co_await lf::just(impl::scan_impl{})(beg, end, out, 1, bop, proj);
  }
  /**
   * @brief [iterator,chunk,in_place] version (4-5)
   */
  template <std::random_access_iterator I,                  //
            std::sized_sentinel_for<I> S,                   //
            class Proj = std::identity,                     //
            indirectly_scannable<I, projected<I, Proj>> Bop //
            >
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 I beg,
                                 S end,
                                 std::iter_difference_t<I> n,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<void> {

    co_return co_await lf::just(impl::scan_impl{})(beg, end, beg, n, bop, proj);
  }
  /**
   * @brief [iterator,n = 1,in_place] version.
   */
  template <std::random_access_iterator I,                  //
            std::sized_sentinel_for<I> S,                   //
            class Proj = std::identity,                     //
            indirectly_scannable<I, projected<I, Proj>> Bop //
            >
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 I beg,
                                 S end,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<void> {
    co_return co_await lf::just(impl::scan_impl{})(beg, end, beg, 1, bop, proj);
  }
  /**
   * @brief [range,chunk,output] version (5-6)
   */
  template <std::ranges::random_access_range R,                                      //
            std::random_access_iterator O,                                           //
            class Proj = std::identity,                                              //
            indirectly_scannable<O, projected<std::ranges::iterator_t<R>, Proj>> Bop //
            >
    requires std::ranges::sized_range<R>
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 R &&range,
                                 O out,
                                 std::ranges::range_difference_t<R> n,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<void> {
    co_return co_await lf::just(impl::scan_impl{})(
        std::ranges::begin(range), std::ranges::end(range), out, n, bop, proj //
    );
  }
  /**
   * @brief [range,n = 1,output] version (4-5)
   */
  template <std::ranges::random_access_range R,                                      //
            std::random_access_iterator O,                                           //
            class Proj = std::identity,                                              //
            indirectly_scannable<O, projected<std::ranges::iterator_t<R>, Proj>> Bop //
            >
    requires std::ranges::sized_range<R>
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 R &&range,
                                 O out,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<void> {
    co_return co_await lf::just(impl::scan_impl{})(
        std::ranges::begin(range), std::ranges::end(range), out, 1, bop, proj //
    );
  }
  /**
   * @brief [range,chunk,in_place] version (4-5)
   */
  template <
      std::ranges::random_access_range R,                                                               //
      class Proj = std::identity,                                                                       //
      indirectly_scannable<std::ranges::iterator_t<R>, projected<std::ranges::iterator_t<R>, Proj>> Bop //
      >
    requires std::ranges::sized_range<R>
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 R &&range,
                                 std::ranges::range_difference_t<R> n,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<void> {
    co_return co_await lf::just(impl::scan_impl{})(
        std::ranges::begin(range), std::ranges::end(range), std::ranges::begin(range), n, bop, proj //
    );
  }
  /**
   * @brief [range,n = 1,in_place] version.
   */
  template <
      std::ranges::random_access_range R,                                                               //
      class Proj = std::identity,                                                                       //
      indirectly_scannable<std::ranges::iterator_t<R>, projected<std::ranges::iterator_t<R>, Proj>> Bop //
      >
    requires std::ranges::sized_range<R>
  auto LF_STATIC_CALL operator()(auto /* unused */, //
                                 R &&range,
                                 Bop bop,
                                 Proj proj = {}) LF_STATIC_CONST->task<void> {
    co_return co_await lf::just(impl::scan_impl{})(
        std::ranges::begin(range), std::ranges::end(range), std::ranges::begin(range), 1, bop, proj //
    );
  }
};

} // namespace impl

/**
 * @brief A parallel implementation of `std::inclusive_scan` that accepts generalized ranges and projections.
 *
 * \rst
 *
 * Effective call signature:
 *
 * .. code ::
 *
 *    template <std::random_access_iterator I,
 *              std::sized_sentinel_for<I> S,
 *              std::random_access_iterator O,
 *              class Proj = std::identity,
 *              indirectly_scannable<O, projected<I, Proj>> Bop
 *              >
 *    void scan(I beg, S end, O out, std::iter_difference_t<I> n, Bop bop, Proj proj = {});
 *
 * Overloads exist for a random-access range (instead of ``head`` and ``tail``), in place scans (omit the
 * `out` iterator) and, the chunk size, ``n``, can be omitted (which will set ``n = 1``).
 *
 * Exemplary usage:
 *
 * .. code::
 *
 *    co_await just[scan](in, out.begin(), std::plus<>{});
 *
 * \endrst
 *
 * This computes the cumulative sum of the input and stores it in the output-range e.g. `[1, 2, 2, 1] -> [1,
 * 3, 5, 6]`.
 *
 * The input and output ranges must either be distinct (i.e. non-overlapping) or the same range.
 *
 * If the binary operator or projection handed to `scan` are async functions, then they will be
 * invoked asynchronously, this allows you to launch further tasks recursively.
 *
 * Unlike the `std::` variations, this function will make an implementation defined number of
 * copies of the function objects and may invoke these copies concurrently.
 */
inline constexpr impl::scan_overload scan = {};

} // namespace lf

#endif /* BF260626_9180_496A_A893_A1A7F2B6781E */



/**
 * @file libfork.hpp
 *
 * @brief Meta header which includes all of ``libfork``.
 *
 * Users who need all of libfork can use this header, it also serves as the entry-point
 * for the single header generation tool.
 */

#endif /* EDCA974A_808F_4B62_95D5_4D84E31B8911 */
