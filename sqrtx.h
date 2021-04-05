#ifndef SQRTX_H_
#define SQRTX_H_

#include <cmath>

namespace solution {

int mySqrt(int x) {
  // Newton's method
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
  // Memory Usage: 5.8 MB, less than 67.32% of C++ online submissions for Sqrt(x).
  // 
  if (x < 2) return x;

  double g = x;
  while (std::fabs(g * g - x) >= 1) {
    g = (g + x / g) / 2;
  }
  return static_cast<int>(g);
}

}  // namespace solution

#endif  // SQRTX_H_
