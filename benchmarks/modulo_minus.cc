#include "common/common.h"

TBENCHMARK(modulo_minus_modulo) {
  int a = 7000;
  for (auto _ : state) {
    a = (a + 1) % 7171;
  }
}

TBENCHMARK(modulo_minus_minus) {
  int a = 7000;
  for (auto _ : state) {
    if (++a >= 7171) {
      a -= 7171;
    }
  }
}
