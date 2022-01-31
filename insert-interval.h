#ifndef INSERT_INTERVAL_H_
#define INSERT_INTERVAL_H_

#include <vector>

namespace solution {

std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals,
                                     std::vector<int>& newInterval) {
  // it should be an easy-level problem
  // Runtime: 8 ms, faster than 99.05% of C++ online submissions for Insert Interval.
  // Memory Usage: 17.1 MB, less than 76.00% of C++ online submissions for Insert Interval.
  //
  if (intervals.empty()) return {newInterval};

  std::vector<std::vector<int>> result;
  auto i{0};
  while (i < intervals.size() && intervals[i].back() < newInterval.front()) {
    result.push_back(intervals[i++]);
  }
  while (i < intervals.size() && intervals[i].front() <= newInterval.back()) {
    newInterval.front() = std::min(newInterval.front(), intervals[i].front());
    newInterval.back() = std::max(newInterval.back(), intervals[i].back());
    ++i;
  }
  result.push_back(newInterval);
  while (i < intervals.size()) {
    result.push_back(intervals[i++]);
  }
  return result;
}

}  // namespace solution

#endif  // !INSERT_INTERVAL_H_
