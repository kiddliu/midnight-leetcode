#ifndef BUILD_ARRAY_FROM_PERMUTATION_H_
#define BUILD_ARRAY_FROM_PERMUTATION_H_

#include <vector>

namespace solution {

std::vector<int> buildArray(std::vector<int>& nums) {
  // what's the point of this question...in-placing?
  // Runtime: 16 ms, faster than 61.12% of C++ online submissions for Build Array from Permutation.
  // Memory Usage: 16.1 MB, less than 99.26% of C++ online submissions for Build Array from Permutation.
  //
  std::vector<int> ans(nums.size());

  for (auto i = 0; i < nums.size(); ++i) {
    ans[i] = nums[nums[i]];
  }

  return ans;
}

}

#endif  // BUILD_ARRAY_FROM_PERMUTATION_H_
