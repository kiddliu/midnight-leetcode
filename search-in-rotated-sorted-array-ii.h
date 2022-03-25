#ifndef SEARCH_IN_ROTATED_SORTED_ARRAY_II_H_
#define SEARCH_IN_ROTATED_SORTED_ARRAY_II_H_

#include <algorithm>
#include <vector>

namespace solution {

bool search(std::vector<int>& nums, int target) {
  // have to deal with duplicates
  // Runtime: 7 ms, faster than 72.05% of C++ online submissions for Search in Rotated Sorted Array II.
  // Memory Usage: 14 MB, less than 31.80% of C++ online submissions for Search in Rotated Sorted Array II.
  //
  if (nums.size() == 1) return nums[0] == target;
  auto begin{nums.cbegin()}, end{nums.cend() - 1};

  while (*begin == *end) {
    if (*begin == target) return true;
    ++begin, --end;
  }
  if (begin > end) return false;

  auto result = std::lower_bound(
      begin, end, target, [&begin, &end](const int& value, const int& target) {
        if (target >= *begin) {
          return value < target && value >= *begin;
        } else {
          return value > *end || value < target;
        }
      });
  return *result == target;
}

}  // namespace solution

#endif  // !SEARCH_IN_ROTATED_SORTED_ARRAY_II_H_
