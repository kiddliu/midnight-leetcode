#ifndef DIVIDE_TWO_INTEGERS_H_
#define DIVIDE_TWO_INTEGERS_H_

#include <cstdlib>

namespace solution {

int divide(int dividend, int divisor) {
  // how interesting is the primitive types
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Divide Two Integers.
  // Memory Usage: 5.9 MB, less than 73.83% of C++ online submissions for Divide Two Integers.
  //
  if (dividend == INT_MIN && divisor == -1) return INT_MAX;

  unsigned int abs_dividend = std::abs(dividend),
               abs_divisor = std::abs(divisor), result{0};

  for (int i = 31; i >= 0; i--) {
    if ((abs_dividend >> i) >= abs_divisor) {
      abs_dividend -= abs_divisor << i;
      result += 1 << i;
    }
  }

  return dividend > 0 == divisor > 0 ? result : -result;
}

}

#endif  // DIVIDE_TWO_INTEGERS_H_
