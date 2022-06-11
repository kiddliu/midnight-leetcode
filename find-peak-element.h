#ifndef FIND_PEAK_ELEMENT_H_
#define FIND_PEAK_ELEMENT_H_

#include <vector>

namespace solution {

int findPeakElement(std::vector<int>& nums) {
  // binary search
  // Runtime: 3 ms, faster than 89.62% of C++ online submissions for Find Peak Element.
  // Memory Usage: 8.9 MB, less than 50.42% of C++ online submissions for Find Peak Element.
  //
  int left{0}, mid{0}, right = nums.size() - 1;
  while (left < right) {
    mid = (left + right) / 2;
    if (nums[mid] > nums[mid + 1]) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }
  return left;
}

}

#endif  // FIND_PEAK_ELEMENT_H_
