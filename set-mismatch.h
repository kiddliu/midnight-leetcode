#ifndef SET_MISMATCH_H_
#define SET_MISMATCH_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<int> findErrorNums(std::vector<int>& nums) {
  // in-place sorting
  // Runtime: 28 ms, faster than 75.69% of C++ online submissions for Set Mismatch.
  // Memory Usage: 21.4 MB, less than 87.64% of C++ online submissions for Set Mismatch.
  //
  std::vector<int> v;

  for (size_t i = 0; i < nums.size(); ++i) {
    if (nums[i] != i + 1) {
      while (nums[nums[i] - 1] != nums[i]) {
        std::swap(nums[nums[i] - 1], nums[i]);
      }
    }
  }
  for (size_t i = 0; i < nums.size(); ++i) {
    if (nums[i] != i + 1) {
      v.push_back(nums[i]);
      v.push_back(i + 1);
      break;
    }
  }
  return v;
}

}

#endif  // SET_MISMATCH_H_
