#include <vector>

#include "common/common.h"

#ifndef VECTOR_SIZE
#define VECTOR_SIZE 1000
#endif

TBENCHMARK(vector_resize_no_realloc) {
  for (auto _ : state) {
    state.PauseTiming();
    std::vector<int> data(VECTOR_SIZE, -1);
    data.shrink_to_fit();
    state.ResumeTiming();
    data.resize(data.size() - 1);
  }
}

TBENCHMARK(vector_resize_realloc) {
  for (auto _ : state) {
    state.PauseTiming();
    std::vector<int> data(VECTOR_SIZE, -1);
    data.shrink_to_fit();
    state.ResumeTiming();
    data.resize(data.size() + 1);
  }
}
