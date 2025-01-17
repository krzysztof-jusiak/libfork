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

#include "libfork/core/macro.hpp" // for LF_ASSERT, LF_HOF_RETURNS

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
