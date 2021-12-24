#ifndef MERGE_INTERVALS_H_
#define MERGE_INTERVALS_H_

#include <algorithm>
#include <deque>
#include <vector>

namespace solution {

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
  // why Pochmann's mind is so neat?
  // Runtime: 12 ms, faster than 98.58% of C++ online submissions for Merge Intervals.
  // Memory Usage: 14.2 MB, less than 81.35% of C++ online submissions for Merge Intervals.
  //
  if (intervals.size() == 1) return intervals;

  std::sort(
      intervals.begin(), intervals.end(),
      [](const std::vector<int>& first, const std::vector<int>& second) {
              return first[0] != second[0] ? first[0] < second[0]
                                           : first[1] < second[1];
    });

  std::vector<std::vector<int>> result;
  for (auto& interval : intervals) {
    if (!result.empty() && interval[0] <= result.back()[1]) {
      result.back()[1] = std::max(interval[1], result.back()[1]);
    } else {
      result.push_back(interval);
    }
  }

  return result;
}

}  // namespace solution

#endif  // MERGE_INTERVALS_H_
