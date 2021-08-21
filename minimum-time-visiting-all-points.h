#ifndef MINIMUM_TIME_VISITING_ALL_POINTS_H_
#define MINIMUM_TIME_VISITING_ALL_POINTS_H_

#include <vector>

namespace solution {

int minTimeToVisitAllPoints(std::vector<std::vector<int>>& p) {
  // straight forward
  // Runtime: 8 ms, faster than 79.95% of C++ online submissions for Minimum Time Visiting All Points.
  // Memory Usage: 10.2 MB, less than 20.19% of C++ online submissions for Minimum Time Visiting All Points.
  //
  auto result{0};
  for (size_t i = 1; i < p.size(); ++i) {
    result += std::max(std::abs(p[i][1] - p[i - 1][1]),
                       std::abs(p[i][0] - p[i - 1][0]));
  }
  return result;
}


}


#endif  // MINIMUM_TIME_VISITING_ALL_POINTS_H_
