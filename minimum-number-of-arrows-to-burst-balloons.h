#ifndef MINIMUM_NUMBER_OF_ARROWS_TO_BURST_BALLOONS_H_
#define MINIMUM_NUMBER_OF_ARROWS_TO_BURST_BALLOONS_H_

#include <algorithm>
#include <vector>

namespace solution {

int findMinArrowShots(std::vector<std::vector<int>>& points) {
  // algorithm comes before the data structure
  // Runtime: 400 ms, faster than 80.44% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.
  // Memory Usage: 89.8 MB, less than 27.03% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.
  //
  if (points.size() == 1) return 1;

  std::sort(points.begin(), points.end(),
            [](const std::vector<int>& first, const std::vector<int>& second) {
              return first[1] < second[1];
            });
  auto result{0}, arrow{0};
  for (auto& p : points) {
    if (result == 0 || p[0] > arrow) {
      ++result;
      arrow = p[1];
    }
  }
  return result;
}

}

#endif  // !MINIMUM_NUMBER_OF_ARROWS_TO_BURST_BALLOONS_H_
