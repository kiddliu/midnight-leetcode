#ifndef SORT_ARRAY_BY_PARITY_II_H_
#define SORT_ARRAY_BY_PARITY_II_H_

#include <vector>

namespace solution {

std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
  // in place, 2 ptrs
  // Runtime: 24 ms, faster than 42.97% of C++ online submissions for Sort Array By Parity II.
  // Memory Usage: 21.5 MB, less than 64.79% of C++ online submissions for Sort Array By Parity II.
  //
  size_t i{0}, j{1};
  while (j != nums.size() - 1) {
    while (nums[i] % 2 == 0) i += 2;
    while (nums[j] % 2 == 1) j += 2;

    std::swap(nums[i], nums[j]);
  }
  return nums;
}

}

#endif  // SORT_ARRAY_BY_PARITY_II_H_
