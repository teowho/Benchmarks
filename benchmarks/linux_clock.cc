#include "time.h"

#include "common/common.h"

TBENCHMARK(linux_clock_realtime) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_REALTIME, &ts);
  }
}

TBENCHMARK(linux_clock_real_time_coarse) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_REALTIME_COARSE, &ts);
  }
}

TBENCHMARK(linux_clock_monotinic) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_MONOTONIC, &ts);
  }
}

TBENCHMARK(linux_clock_monotinic_coarse) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_MONOTONIC_COARSE, &ts);
  }
}

TBENCHMARK(linux_clock_monotinic_raw) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_MONOTONIC_RAW, &ts);
  }
}

TBENCHMARK(linux_clock_boottime) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_BOOTTIME, &ts);
  }
}

TBENCHMARK(linux_clock_process_cpu_time) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts);
  }
}

TBENCHMARK(linux_clock_thread_cpu_time) {
  timespec ts;
  for (auto _ : state) {
    ::clock_gettime(CLOCK_THREAD_CPUTIME_ID, &ts);
  }
}
