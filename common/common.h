#include <iostream>

#include "benchmark/benchmark.h"

#define TBENCHMARK(name)                          \
  static void BM_##name(benchmark::State& state); \
  BENCHMARK(BM_##name);                           \
  static void BM_##name(benchmark::State& state)
