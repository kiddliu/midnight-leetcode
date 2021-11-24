#ifndef INTERVAL_LIST_INTERSECTIONS_H_
#define INTERVAL_LIST_INTERSECTIONS_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<std::vector<int>> intervalIntersection(
    std::vector<std::vector<int>>& firstList,
    std::vector<std::vector<int>>& secondList) {
  // merge sort
  // Runtime: 32 ms, faster than 72.52% of C++ online submissions for Interval List Intersections.
  // Memory Usage: 18.6 MB, less than 75.13% of C++ online submissions for Interval List Intersections.
  //
  if (firstList.empty() || secondList.empty()) return {};

  std::vector<std::vector<int>> result;

  auto i{0}, j{0};
  while (i < firstList.size() && j < secondList.size()) {
    auto min = std::max(firstList[i][0], secondList[j][0]);
    auto max = std::min(firstList[i][1], secondList[j][1]);

    if (min <= max) result.push_back({min, max});

    if (firstList[i][1] < secondList[j][1]) {
      ++i;
    } else {
      ++j;
    }
  }

  return result;
}

}  // namespace solution

#endif  // INTERVAL_LIST_INTERSECTIONS_H_
