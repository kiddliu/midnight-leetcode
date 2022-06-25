#ifndef NON_DECREASING_ARRAY_H_
#define NON_DECREASING_ARRAY_H_

#include <vector>

namespace solution {

bool checkPossibility(std::vector<int>& nums) {
  // check consecutive 3 numbers if the current is smaller than previous
  // Runtime: 25 ms, faster than 95.24% of C++ online submissions for Non-decreasing Array.
  // Memory Usage: 27.1 MB, less than 12.14% of C++ online submissions for Non-decreasing Array.
  //
  int size = nums.size(), count{0};
  for (auto i{1}; i < size && count < 2; ++i) {
    if (nums[i - 1] > nums[i]) {
      ++count;
      if (i < 2 || nums[i - 2] <= nums[i]) {
        nums[i - 1] = nums[i];
      } else {
        nums[i] = nums[i - 1];
      }
    }
  }

  return count < 2;
}

}

#endif  // NON_DECREASING_ARRAY_H_
