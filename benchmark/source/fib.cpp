
#include <chrono>
#include <string>
#include <thread>

#include <nanobench.h>

#include <tbb/task_arena.h>
#include <tbb/task_group.h>

#include "libfork/schedule/busy_pool.hpp"
#include "libfork/task.hpp"

namespace {

auto fib(int n) -> int {
  if (n < 2) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

template <lf::context Context>
auto libfork(int n) -> lf::basic_task<int, Context> {
  if (n < 2) {
    co_return n;
  }
  auto a = co_await libfork<Context>(n - 1).fork();
  auto b = co_await libfork<Context>(n - 2);

  co_await lf::join();

  co_return *a + b;
}

auto omp(int n) -> int {
  if (n < 2) {
    return n;
  }

  int a, b;

#pragma omp task shared(a)
  a = omp(n - 1);

  b = omp(n - 2);

#pragma omp taskwait

  return a + b;
}

int fib_tbb(int n) {
  if (n < 2) {
    return n;
  }
  int x, y;

  tbb::task_group g;

  g.run([&] {
    x = fib_tbb(n - 1);
  });

  y = fib_tbb(n - 2);

  g.wait();

  return x + y;
}

}  // namespace

auto benchmark_fib() -> void {
  //
  ankerl::nanobench::Bench bench;

  constexpr int fib_number = 25;

  bench.title("Fibonacci");
  bench.unit("fib(" + std::to_string(fib_number) + ")");
  bench.warmup(100);
  bench.relative(true);
  // bench.epochs(100);
  bench.minEpochTime(std::chrono::milliseconds(100));
  // bench.minEpochTime(std::chrono::milliseconds(100));
  // bench.maxEpochTime(std::chrono::milliseconds(1000));
  bench.performanceCounters(true);

  auto ans = fib(fib_number);

  for (std::size_t i = 1; i <= std::thread::hardware_concurrency(); ++i) {
    //
    lf::busy_pool pool{i};

    bench.run("busy_pool " + std::to_string(i) + " threads", [&] {
      auto x = pool.schedule(libfork<lf::busy_pool::context>(fib_number));
      ankerl::nanobench::doNotOptimizeAway(x);
      if (x != ans) {
        throw std::runtime_error("pool failed");
      }
    });
  }

  for (int i = 1; i <= std::thread::hardware_concurrency(); ++i) {
    //

    tbb::task_arena limited(i);

    limited.execute([&] {
      bench.run("intel TBB " + std::to_string(i) + " threads", [&] {
        auto x = fib_tbb(fib_number);
        ankerl::nanobench::doNotOptimizeAway(x);
        if (x != ans) {
          throw std::runtime_error("pool failed");
        }
      });
    });
  }

  for (int i = 1; i <= std::thread::hardware_concurrency(); ++i) {
#pragma omp parallel num_threads(i)
#pragma omp single nowait
    {
      bench.run("openMP " + std::to_string(i) + " threads", [&] {
        //
        int x = omp(fib_number);
        ankerl::nanobench::doNotOptimizeAway(x);
        if (x != ans) {
          throw std::runtime_error("pool failed");
        }
      });
    }
  }
}