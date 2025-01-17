

// Copyright © Conor Williams <conorwilliams@outlook.com>

// SPDX-License-Identifier: MPL-2.0

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <catch2/catch_test_macros.hpp> // for operator==, operator""_catch_sr, AssertionHandler
#include <cstddef>                      // for size_t
#include <iostream>                     // for basic_ostream, char_traits, operator<<, cout
#include <memory>                       // for shared_ptr, __shared_ptr_access, make_shared
#include <set>                          // for set
#include <thread>                       // for thread
#include <utility>                      // for move
#include <vector>                       // for vector

#include "libfork/schedule.hpp" // for distance_matrix, numa_topology

using namespace lf;

using namespace impl;

TEST_CASE("make_topology", "[numa]") {
  for (int i = 0; i < 10; i++) {
    numa_topology topo = {};
#ifdef LF_USE_HWLOC
    REQUIRE(topo);
#else
    REQUIRE(!topo);
#endif
  }
}

#ifdef LF_USE_HWLOC

namespace {

struct comp {
  auto operator()(numa_topology::numa_handle const &lhs, numa_topology::numa_handle const &rhs) const noexcept
      -> bool {
    return hwloc_bitmap_compare(lhs.cpup.get(), rhs.cpup.get()) < 0;
  }
};

} // namespace

TEST_CASE("split", "[numa]") {

  numa_topology topo;

  std::size_t max_unique = std::thread::hardware_concurrency();

  for (std::size_t i = 1; i < 2 * max_unique; i++) {

    std::vector<numa_topology::numa_handle> singlets = topo.split(i);

    REQUIRE(singlets.size() == i);

    std::set<numa_topology::numa_handle, comp> unique_bitmaps;

    for (auto &singlet : singlets) {
      unique_bitmaps.emplace(std::move(singlet));
    }

    if (i < max_unique) {
      REQUIRE(unique_bitmaps.size() == i);
    } else {
      REQUIRE(unique_bitmaps.size() == max_unique);
    }
  }
}

namespace {

void print_distances(lf::impl::detail::distance_matrix const &dist) {

  std::cout << "distances [" << dist.size() << "." << dist.size() << "]:\n";

  for (std::size_t i = 0; i < dist.size(); i++) {
    for (std::size_t j = 0; j < dist.size(); j++) {
      std::cout << dist(i, j) << " ";
    }
    std::cout << std::endl;
  }
}

} // namespace

TEST_CASE("distances", "[numa]") {

  numa_topology topo;

  std::size_t max_unique = std::thread::hardware_concurrency();

  for (std::size_t n = 1; n <= 2 * max_unique; n++) {

    impl::detail::distance_matrix dist{topo.split(n)};

    REQUIRE(dist.size() == n);

    print_distances(dist);

    for (std::size_t i = 0; i < dist.size(); i++) {
      for (std::size_t j = 0; j < dist.size(); j++) {
        REQUIRE(dist(i, j) >= 0);
        REQUIRE(dist(i, j) == dist(j, i));
        if (i == j) {
          REQUIRE(dist(i, j) == 0);
        }
      }
    }
  }
}

#endif

TEST_CASE("distribute", "[numa]") {

  for (unsigned int i = 1; i <= 2 * std::thread::hardware_concurrency(); i++) {

    std::vector<std::shared_ptr<unsigned int>> ints;

    for (unsigned int j = 0; j < i; j++) {
      ints.push_back(std::make_shared<unsigned int>(j));
    }

    numa_topology topo{};

    std::vector views = topo.distribute(ints);

    REQUIRE(views.size() == i);

    unsigned int count = 0;

    for (auto &&node : views) {

      REQUIRE(!node.neighbors.empty());
      REQUIRE(node.neighbors.front().size() == 1);
      REQUIRE(*node.neighbors.front().front() == count++);

      std::size_t sum = 0;

      for (auto &&nl : node.neighbors) {
        sum += nl.size();
      }

      REQUIRE(sum == ints.size());
    }

    std::cout << "View from the first topo:";

    for (auto &&nl : views.front().neighbors) {
      std::cout << " " << nl.size();
    }

    std::cout << std::endl;
  }
}
