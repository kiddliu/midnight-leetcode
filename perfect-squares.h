#ifndef PERFECT_SQUARES_H_
#define PERFECT_SQUARES_H_

#include <unordered_map>

namespace solution {

int numSquares(int n) {
  // Stefan is a beast...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Perfect Squares.
  // Memory Usage: 6 MB, less than 93.52% of C++ online submissions for Perfect Squares.
  //
  while (n % 4 == 0) n /= 4;
  if (n % 8 == 7) return 4;
  int a = -1, b = sqrt(n);
  n -= b * b;
  b += b + 1; // the upper bound is (b + 1) ^ 2 - b ^ 2 = 2 * b + 1;
  while (a <= b) {
    if (n < 0)
      n += b -= 2;
    else if (n > 0)
      n -= a += 2;
    else
      return a < 0 ? 1 : 2;
  }
  return 3;
}

}

#endif  // !PERFECT_SQUARES_H_
