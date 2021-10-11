#ifndef FIND_NEAREST_POINT_THAT_HAS_THE_SAME_X_OR_Y_COORDINATE_H_
#define FIND_NEAREST_POINT_THAT_HAS_THE_SAME_X_OR_Y_COORDINATE_H_

#include <vector>

namespace solution {

int nearestValidPoint(int x, int y, std::vector<std::vector<int>>& points) {
  // straight forward
  // Runtime: 198 ms, faster than 34.91% of C++ online submissions for Find Nearest Point That Has the Same X or Y Coordinate.
  // Memory Usage: 59.3 MB, less than 96.84% of C++ online submissions for Find Nearest Point That Has the Same X or Y Coordinate.
  //
  auto distance{INT_MAX}, index{-1};
  for (auto i = 0; i < points.size(); ++i) {
    if (points[i][0] == x || points[i][1] == y) {
      auto d = std::abs(points[i][0] - x) + std::abs(points[i][1] - y);
      if (d < distance) {
        distance = d;
        index = i;
      }
    }
  }

  return index;
}

}

#endif  // !FIND_NEAREST_POINT_THAT_HAS_THE_SAME_X_OR_Y_COORDINATE_H_
