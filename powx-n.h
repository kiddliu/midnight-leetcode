#ifndef POWX_N_H_
#define POWX_N_H_

#include <cstdlib>

namespace solution {

double myPow(double x, int n) {
  // also hard to deal with floating numbers and overflows
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pow(x, n).
  // Memory Usage: 5.8 MB, less than 80.39% of C++ online submissions for Pow(x, n).
  //
  if (n == 0) return 1.;
  if (n == INT_MIN) {
    x = 1 / x / x, n = -(n / 2);
  } else if (n < 1) {
    x = 1 / x, n = -n;
  }

  return n % 2 == 0 ? myPow(x * x, n / 2) : x * myPow(x * x, n / 2);
}

}

#endif  // !POWX_N_H_
