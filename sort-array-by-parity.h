#ifndef SORT_ARRAY_BY_PARITY_H_
#define SORT_ARRAY_BY_PARITY_H_

#include <vector>

namespace solution {

std::vector<int> sortArrayByParity(std::vector<int>& nums) {
  // 2 pointers, in-place
  // Runtime: 8 ms, faster than 83.09% of C++ online submissions for Sort Array By Parity.
  // Memory Usage: 16.1 MB, less than 81.52% of C++ online submissions for Sort Array By Parity.
  //
  if (nums.size() == 1) return nums;

  for (int i = 0, j = nums.size() - 1; i < j; ++i, --j) {
    while (i < nums.size() && nums[i] % 2 == 0) ++i;
    while (j > -1 && nums [j] % 2 == 1) --j;
    if (i >= j) break;

    std::swap(nums[i], nums[j]);
  }

  return nums;
}

}

#endif  // SORT_ARRAY_BY_PARITY_H_
