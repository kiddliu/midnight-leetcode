#ifndef CHECK_IF_IT_IS_A_STRAIGHT_LINE_H_
#define CHECK_IF_IT_IS_A_STRAIGHT_LINE_H_

#include <vector>

namespace solution {

double calcSlope(std::vector<std::vector<int>>& c, size_t first, size_t second) {
  return c[first][0] - c[second][0] == 0
             ? DBL_MAX
             : static_cast<double>((c[first][1] - c[second][1])) / (c[first][0] - c[second][0]);
}

bool checkStraightLine(std::vector<std::vector<int>>& c) {
  // straight forward
  // Runtime: 8 ms, faster than 87.17% of C++ online submissions for Check If It Is a Straight Line.
  // Memory Usage: 9.9 MB, less than 95.05% of C++ online submissions for Check If It Is a Straight Line.
  //
  auto slope{calcSlope(c, 0, 1)};

  for (size_t i = 2; i < c.size(); ++i) {
    if (slope != calcSlope(c, 0, i)) return false;
  }

  return true;
}


}

#endif  // CHECK_IF_IT_IS_A_STRAIGHT_LINE_H_
