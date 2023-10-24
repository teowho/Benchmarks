#include <atomic>
#include <mutex>

#include "common/common.h"

#define THREAD_COUNT 8

namespace {
std::atomic_int atomic = 0;
}

TBENCHMARK_MULTITHREAD(atomic_mutex_atomic, THREAD_COUNT) {
  for (auto _ : state) {
    atomic.fetch_add(1);
  }
}

namespace {
int plain = 0;
std::mutex mu;
}  // namespace

TBENCHMARK_MULTITHREAD(atomic_mutex_mutex, THREAD_COUNT) {
  for (auto _ : state) {
    std::lock_guard lock{mu};
    plain++;
  }
}
