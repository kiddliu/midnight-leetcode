#ifndef MINIMUM_OPERATIONS_TO_REDUCE_X_TO_ZERO_H_
#define MINIMUM_OPERATIONS_TO_REDUCE_X_TO_ZERO_H_

#include <numeric>
#include <vector>

namespace solution {

int minOperations(std::vector<int>& nums, int x) {
  // think it reversely by finding the longest substring with sliding window
  // Runtime: 261 ms, faster than 62.58% of C++ online submissions for Minimum Operations to Reduce X to Zero.
  // Memory Usage: 98.6 MB, less than 71.00% of C++ online submissions for Minimum Operations to Reduce X to Zero.
  //
  int target{std::accumulate(nums.cbegin(), nums.cend(), 0) - x},
      size = nums.size();
  if (target < 0) return -1;
  if (target == 0) return size;
  
  auto sum{0}, length{0};
  for (auto p1{0}, p2{0}; p2 < size; ++p2) {
    if (sum < target) {
      sum += nums[p2];
    }
    while (sum >= target) {
      if (sum == target) {
        length = std::max(length, p2 - p1 + 1);
      }
      sum -= nums[p1++];
    }
  }
  
  return length == 0 ? -1 : size - length;
}

}

#endif  // !MINIMUM_OPERATIONS_TO_REDUCE_X_TO_ZERO_H_
