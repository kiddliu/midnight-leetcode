#ifndef LARGEST_TRIANGLE_AREA_H_
#define LARGEST_TRIANGLE_AREA_H_

#include <cmath>
#include <vector>

namespace solution {

double largestTriangleArea(std::vector<std::vector<int>>& points) {
  // Heron's method
  // Runtime: 16 ms, faster than 51.28% of C++ online submissions for Largest Triangle Area.
  // Memory Usage: 7.6 MB, less than 62.24% of C++ online submissions for Largest Triangle Area.
  //
  auto result{0.};
  for (size_t i = 0; i < points.size(); ++i) {
    for (size_t j = i + 1; j < points.size(); ++j) {
      for (size_t k = j + 1; k < points.size(); ++k) {
        auto area =
            std::fabs(
                (points[i][0] - points[k][0]) * (points[j][1] - points[i][1]) -
                (points[i][0] - points[j][0]) * (points[k][1] - points[i][1])) *
            .5;
        result = std::max(result, area);
      }
    }
  }
  return result;
}

}

#endif  // LARGEST_TRIANGLE_AREA_H_
