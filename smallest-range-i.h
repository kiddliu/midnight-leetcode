#ifndef SMALLEST_RANGE_I_H_
#define SMALLEST_RANGE_I_H_

#include <vector>

namespace solution {

int smallestRangeI(std::vector<int>& nums, int k) {
  // max - min
  // Runtime: 16 ms, faster than 63.26% of C++ online submissions for Smallest Range I.
  // Memory Usage: 15.3 MB, less than 88.59% of C++ online submissions for Smallest Range I.
  //
  if (nums.size() == 1) return 0;

  auto max{nums[0]}, min{nums[0]};
  for (size_t i = 1; i < nums.size(); ++i) {
    max = std::max(max, nums[i]);
    min = std::min(min, nums[i]);
  }

  return std::max(max - min - k * 2, 0);
}

}

#endif  // SMALLEST_RANGE_I_H_
