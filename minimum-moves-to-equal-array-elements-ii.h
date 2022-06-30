#ifndef MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_II_H_
#define MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_II_H_

#include <algorithm>
#include <vector>

namespace solution {

int minMoves2(std::vector<int>& nums) {
  // eventually all numbers are made to median but the result won't require the median value
  // Runtime: 12 ms, faster than 81.10% of C++ online submissions for Minimum Moves to Equal Array Elements II.
  // Memory Usage: 10.8 MB, less than 59.76% of C++ online submissions for Minimum Moves to Equal Array Elements II.
  //
  int result{0}, size = nums.size();

  std::sort(nums.begin(), nums.end());
  for (auto i{0}; i < size - i - 1; ++i) {
    result += nums[size - i - 1] - nums[i];
  }

  return result;
}

}

#endif  // !MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_II_H_
