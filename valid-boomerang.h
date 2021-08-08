#ifndef VALID_BOOMERANG_H_
#define VALID_BOOMERANG_H_

#include <vector>

namespace solution {

bool isBoomerang(std::vector<std::vector<int>>& points) {
  // straight forward
  // Runtime: 4 ms, faster than 48.86% of C++ online submissions for Valid Boomerang.
  // Memory Usage: 10.4 MB, less than 51.14% of C++ online submissions for Valid Boomerang.
  //
  return (points[0] != points[1] && points[1] != points[2]) &&
         ((points[2][1] - points[1][1]) * (points[1][0] - points[0][0]) !=
          (points[1][1] - points[0][1]) * (points[2][0] - points[1][0]));
}

}

#endif  // VALID_BOOMERANG_H_
