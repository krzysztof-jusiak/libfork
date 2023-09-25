#include <iostream>

#include <nanobench.h>

#include "libfork/core.hpp"

#include "libfork/schedule/busy_pool.hpp"
#include "libfork/schedule/lazy_pool.hpp"
#include "libfork/schedule/unit_pool.hpp"

// NOLINTBEGIN

LF_NOINLINE auto fib_returns(int n) -> int {
  if (n < 2) {
    return n;
  }

  // volatile char a[8 * 4 * 10];

  // a[0] = 0;
  // a[8 * 4 * 10 - 1] = 0;

  return fib_returns(n - 1) + fib_returns(n - 2);
}

LF_NOINLINE auto fib_ref_help(int &ret, int n) -> void {
  if (n < 2) {
    ret = n;

  } else {
    int a, b;

    fib_ref_help(a, n - 1);
    fib_ref_help(b, n - 2);

    ret = a + b;
  }
}

LF_NOINLINE auto fib_ref(int n) -> int {
  int ret;
  fib_ref_help(ret, n);
  return ret;
}

inline constexpr lf::async fib = [](auto fib, int n) LF_STATIC_CALL -> lf::task<int> {
  if (n < 2) {
    co_return n;
  }

  int a, b;

  co_await lf::fork(a, fib)(n - 1);
  co_await lf::call(b, fib)(n - 2);

  co_await lf::join;

  co_return a + b;
};

inline constexpr lf::async invoke_fib = [](auto invoke_fib, int n) LF_STATIC_CALL -> lf::task<int> {
  if (n < 2) {
    co_return n;
  }
  co_return co_await invoke_fib(n - 1) + co_await invoke_fib(n - 2);
};

auto main() -> int {
  //
  ankerl::nanobench::Bench bench;

  bench.title("Fibonacci");
  bench.warmup(10);
  bench.relative(true);
  bench.performanceCounters(true);
  bench.minEpochIterations(10);

  volatile int in = 30;

  volatile int ret = 0;

  // lf::unit_pool sch;

  // for (int i = 0; i < 100; ++i) {
  //   // ret = fib_ref(in);
  //   ret = lf::sync_wait(sch, fib, in);
  // }

  // return 0;

  for (std::size_t i = 1; i <= std::thread::hardware_concurrency() / 2; ++i) {

    lf::busy_pool sch{i};

    bench.run("async busy pool n=" + std::to_string(i), [&] {
      ret = lf::sync_wait(sch, fib, in);
    });

    if (ret != fib_ref(in)) {
      std::cerr << "Error: " << ret << std::endl;
      return 1;
    }
  }

  for (std::size_t i = 1; i <= std::thread::hardware_concurrency() / 2; ++i) {

    lf::lazy_pool sch{i};

    bench.run("async lazy pool n=" + std::to_string(i), [&] {
      ret = lf::sync_wait(sch, fib, in);
    });

    if (ret != fib_ref(in)) {
      std::cerr << "Error: " << ret << std::endl;
      return 1;
    }
  }

  {
    lf::busy_pool sch{1};

    bench.run("async invoke only", [&] {
      ret = lf::sync_wait(sch, invoke_fib, in);
    });

    if (ret != fib_ref(in)) {
      std::cerr << "Error: " << ret << std::endl;
      return 1;
    }
  }

  // --------------------------------- //

  {
    lf::unit_pool sch;

    bench.run("unit_pool invoke only", [&] {
      ret = lf::sync_wait(sch, invoke_fib, in);
    });

    if (ret != fib_ref(in)) {
      std::cerr << "Error: " << ret << std::endl;
      return 1;
    }

    bench.run("unit_pool forking", [&] {
      ret = lf::sync_wait(sch, fib, in);
    });

    if (ret != fib_ref(in)) {
      std::cerr << "Error: " << ret << std::endl;
      return 1;
    }
  }

  // --------------------------------- //

  bench.run("reference inline", [&] {
    ankerl::nanobench::doNotOptimizeAway(fib_ref(in));
  });

  bench.run("returning inline", [&] {
    ankerl::nanobench::doNotOptimizeAway(fib_returns(in));
  });

  return 0;
}
