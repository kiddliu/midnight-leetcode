#ifndef RUNNING_SUM_OF_1D_ARRAY_H_
#define RUNNING_SUM_OF_1D_ARRAY_H_

#include <utility>
#include <vector>

namespace solution {

std::vector<int> runningSum(std::vector<int>& nums) {
  // straight forward
  // Runtime: 3 ms, faster than 62.42% of C++ online submissions for Running Sum of 1d Array.
  // Memory Usage: 8.3 MB, less than 94.21% of C++ online submissions for Running Sum of 1d Array.
  //
  for (size_t i = 1; i < nums.size(); ++i) {
    nums[i] += nums[i - 1];
  }
  return nums;
}

}

#endif  // RUNNING_SUM_OF_1D_ARRAY_H_
