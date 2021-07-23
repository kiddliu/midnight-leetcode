#ifndef MONOTONIC_ARRAY_H_
#define MONOTONIC_ARRAY_H_

#include <vector>

namespace solution {

bool isMonotonic(std::vector<int>& nums) {
  // direct
  // Runtime: 60 ms, faster than 83.20% of C++ online submissions for Monotonic Array.
  // Memory Usage: 52.7 MB, less than 46.15% of C++ online submissions for Monotonic Array.
  //
  if (nums.size() < 3) return true;

  auto pattern{-1};
  for (size_t i = 0; i < nums.size() - 1; ++i) {
    if (pattern == -1) {
      if (nums[i + 1] != nums[i]) pattern = nums[i + 1] > nums[i];
    } else if (nums[i + 1] != nums[i] && pattern != nums[i + 1] > nums[i]) {
      return false;
    }
  }
  return true;
}

}

#endif  // MONOTONIC_ARRAY_H_
