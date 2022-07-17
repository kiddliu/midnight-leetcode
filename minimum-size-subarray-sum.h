#ifndef MINIMUM_SIZE_SUBARRAY_SUM_H_
#define MINIMUM_SIZE_SUBARRAY_SUM_H_

#include <limits>
#include <vector>

namespace solution {

int minSubArrayLen(int target, std::vector<int>& nums) {
  // sliding window...
  // Runtime: 54 ms, faster than 29.86% of C++ online submissions for Minimum Size Subarray Sum.
  // Memory Usage: 28.3 MB, less than 20.91% of C++ online submissions for Minimum Size Subarray Sum.
  //
  int size = nums.size();
  if (size == 1) return nums.front() == target;

  auto result{std::numeric_limits<int>::max()}, sum{nums.front()}, i{0}, j{i};
  
  while (j < size) {
    while (sum < target && j < size) {
      sum += nums[++j];
    }
    if (sum >= target) result = std::max(result, j - i + 1);
    sum -= nums[i++];
  }

  return result;
}

}

#endif  // !MINIMUM_SIZE_SUBARRAY_SUM_H_
