#ifndef MAXIMUM_SUBARRAY_H_
#define MAXIMUM_SUBARRAY_H_

#include <vector>

namespace solution {

int maxSubArray(std::vector<int>& nums) {
  // Dynamic Programming
  // Runtime: 8 ms, faster than 48.26% of C++ online submissions for Maximum Subarray.
  // Memory Usage: 13 MB, less than 85.58% of C++ online submissions for Maximum Subarray.
  //
  if (nums.size() == 1) return nums[0];

  auto max = nums[0], current = nums[0];

  for (size_t i = 1; i < nums.size(); ++i) {
    current = std::max(nums[i], current + nums[i]);
    max = std::max(max, current);
  }

  return max;
}

}  // namespace solution

#endif  // MAXIMUM_SUBARRAY_H_
