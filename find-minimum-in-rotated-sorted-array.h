#ifndef FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H_
#define FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H_

#include <vector>

namespace solution {

int findMin(std::vector<int>& nums) {
  // binary search...
  // Runtime: 3 ms, faster than 83.73% of C++ online submissions for Find Minimum in Rotated Sorted Array.
  // Memory Usage: 10.2 MB, less than 72.49% of C++ online submissions for Find Minimum in Rotated Sorted Array.
  //
  int size = nums.size();
  if (size == 1 || nums.front() < nums.back()) return nums.front();

  auto first{0}, last{size - 1};
  while (first < last) {
    if (nums[first] < nums[last]) return nums[first];

    auto mid{(first + last) / 2};
    if (nums[mid] >= nums[first]) {
      first = mid + 1;
    } else {
      last = mid;
    }
  }
  return nums[first];
}

}

#endif  // !FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H_
