#include <atomic>
#include <mutex>

#include "common/common.h"

#ifndef THREAD_COUNT
#define THREAD_COUNT 8
#endif

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
