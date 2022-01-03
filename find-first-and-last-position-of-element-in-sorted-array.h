#ifndef FIND_FIRST_AND_LAST_POSITION_OF_ELEMENT_IN_SORTED_ARRAY_H_
#define FIND_FIRST_AND_LAST_POSITION_OF_ELEMENT_IN_SORTED_ARRAY_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<int> searchRange(std::vector<int>& nums, int target) {
  // using STL
  // Runtime: 6 ms, faster than 69.89% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
  // Memory Usage: 13.7 MB, less than 16.18% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
  //
  auto range = equal_range(nums.begin(), nums.end(), target);
  if (range.first == range.second) return {-1, -1};
  return {static_cast<int>(range.first - nums.begin()),
          static_cast<int>(range.second - nums.begin() - 1)};
}

}  // namespace solution

#endif  // !FIND_FIRST_AND_LAST_POSITION_OF_ELEMENT_IN_SORTED_ARRAY_H_
