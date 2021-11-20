#ifndef SINGLE_ELEMENT_IN_A_SORTED_ARRAY_H_
#define SINGLE_ELEMENT_IN_A_SORTED_ARRAY_H_

#include <vector>

namespace solution {

int single(std::vector<int>& nums, int index) {
  if (index == 0) return nums[0] != nums[1] ? nums[0] : 0;
  if (index == nums.size() - 1)
    return nums[nums.size() - 1] != nums[nums.size() - 2]
               ? nums[nums.size() - 2]
               : 0;
  if (nums[index - 1] != nums[index] && nums[index] != nums[index + 1])
    return nums[index];
  return 0;
}

int singleNonDuplicate(std::vector<int>& nums, int begin, int end) {
  if (end - begin < 2) return single(nums, begin);

  auto mid = (begin + end) / 2;
  if (auto n = singleNonDuplicate(nums, begin, mid)) return n;
  return singleNonDuplicate(nums, mid, end);
}

int singleNonDuplicate(std::vector<int>& nums) {
  // binary search
  // stefan points out the pattern that the odd/even are pairs, just find the index where the pattern changes
  // Runtime: 8 ms, faster than 77.96% of C++ online submissions for Single Element in a Sorted Array.
  // Memory Usage: 11.1 MB, less than 38.82% of C++ online submissions for Single Element in a Sorted Array.
  //
  return singleNonDuplicate(nums, 0, nums.size());
}

}

#endif  // SINGLE_ELEMENT_IN_A_SORTED_ARRAY_H_
