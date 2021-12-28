#ifndef NEXT_PERMUTATION_H_
#define NEXT_PERMUTATION_H_

#include <algorithm>
#include <vector>

namespace solution {

void nextPermutation(std::vector<int>& nums) {
  // begin to solve STL?
  // Runtime: 4 ms, faster than 75.35% of C++ online submissions for Next Permutation.
  // Memory Usage: 12.1 MB, less than 73.03% of C++ online submissions for Next Permutation.
  //
  if (nums.size() == 1) return;

  int i = nums.size() - 2;
  while (i >= 0 && nums[i] >= nums[i + 1]) --i;

  if (i >= 0) {
    int j = nums.size() - 1;
    while (nums[j] <= nums[i]) --j;
    std::swap(nums[i], nums[j]);
  }

  std::reverse(nums.begin() + i + 1, nums.end());
}

}

#endif  // NEXT_PERMUTATION_H_
