#ifndef SQUARES_OF_A_SORTED_ARRAY_H_
#define SQUARES_OF_A_SORTED_ARRAY_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<int> sortedSquares(std::vector<int>& nums) {
  // 2 ptrs
  // Runtime: 28 ms, faster than 80.86% of C++ online submissions for Squares of a Sorted Array.
  // Memory Usage: 25.9 MB, less than 80.67% of C++ online submissions for Squares of a Sorted Array.
  //
  std::vector<int> v(nums.size(), 0);

  for (size_t i = 0, j = nums.size() - 1, p = j; i <= j; --p) {
    if (std::abs(nums[i]) <= std::abs(nums[j])) {
      v[p] = nums[j] * nums[j--];
    } else {
      v[p] = nums[i] * nums[i++];
    }
  }
  return v;
}

}

#endif  // SQUARES_OF_A_SORTED_ARRAY_H_
