#ifndef MINIMUM_OPERATIONS_TO_MAKE_THE_ARRAY_INCREASING_H_
#define MINIMUM_OPERATIONS_TO_MAKE_THE_ARRAY_INCREASING_H_

#include <vector>

namespace solution {

int minOperations(std::vector<int>& nums) {
  // straight forward
  // Runtime: 11 ms, faster than 86.19% of C++ online submissions for Minimum Operations to Make the Array Increasing.
  // Memory Usage: 15.8 MB, less than 78.98% of C++ online submissions for Minimum Operations to Make the Array Increasing.
  //
  if (nums.size() == 1) return 0;

  auto result{0};
  for (auto i = 1; i < nums.size(); ++i) {
    if (nums[i] <= nums[i - 1]) {
      auto n = nums[i - 1] + 1;
      result += n - nums[i];
      nums[i] = n;
    }
  }
  return result;
}

}

#endif  // MINIMUM_OPERATIONS_TO_MAKE_THE_ARRAY_INCREASING_H_
