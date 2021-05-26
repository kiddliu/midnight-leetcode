#ifndef VALID_PERFECT_SQUARE_H_
#define VALID_PERFECT_SQUARE_H_

#include "sqrtx.h"

namespace solution {

bool isPerfectSquare(int num) {
  // Newton's method
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Perfect Square.
  // Memory Usage: 5.8 MB, less than 58.91% of C++ online submissions for Valid Perfect Square.
  //
  double g = num;
  while (std::fabs(g * g - num) >= 1) {
    g = (g + num / g) / 2;
  }
  return static_cast<int>(g) * static_cast<int>(g) == num;
}

}

#endif  // VALID_PERFECT_SQUARE_H_
