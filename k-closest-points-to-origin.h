#ifndef K_CLOSEST_POINTS_TO_ORIGIN_H_
#define K_CLOSEST_POINTS_TO_ORIGIN_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>>& points,
                                       int k) {
  // should not be a medium problem
  // Runtime: 176 ms, faster than 61.53% of C++ online submissions for K Closest Points to Origin.
  // Memory Usage: 49.2 MB, less than 88.82% of C++ online submissions for K Closest Points to Origin.
  //
  std::sort(points.begin(), points.end(),
            [](const std::vector<int>& first, const std::vector<int>& second) {
              return (first[0] * first[0] + first[1] * first[1]) <
                     (second[0] * second[0] + second[1] * second[1]);
            });

  return std::vector<std::vector<int>>(points.begin(), points.begin() + k);
}

}

#endif  // !K_CLOSEST_POINTS_TO_ORIGIN_H_
