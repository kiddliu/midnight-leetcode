#ifndef MAXIMUM_ASCENDING_SUBARRAY_SUM_H_
#define MAXIMUM_ASCENDING_SUBARRAY_SUM_H_

#include <vector>

namespace solution {

int maxAscendingSum(std::vector<int>& nums) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Ascending Subarray Sum.
  // Memory Usage: 8.5 MB, less than 41.28% of C++ online submissions for Maximum Ascending Subarray Sum.
  // 
  auto sum{nums[0]}, max{nums[0]};
  for (auto i = 1; i < nums.size(); ++i) {
    if (nums[i] > nums[i - 1]) {
      sum += nums[i];
    } else {
      max = std::max(sum, max);
      sum = nums[i];
    }
  }

  return std::max(sum, max);
}

}

#endif  // !MAXIMUM_ASCENDING_SUBARRAY_SUM_H_
