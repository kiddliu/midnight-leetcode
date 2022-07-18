#ifndef HOUSE_ROBBER_H_
#define HOUSE_ROBBER_H_

#include <vector>

namespace solution {

int rob(std::vector<int>& nums) {
  // still a DP...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for House Robber II.
  // Memory Usage: 7.7 MB, less than 97.58% of C++ online submissions for House Robber II.
  //
  return nums.size() > 2 ? std::max(rob(nums, 0, nums.size() - 2),
                                    rob(nums, 1, nums.size() - 1))
                         : nums.front();
}

int rob(std::vector<int>& nums, int start, int end) {
  if (nums.empty()) return 0;

  auto prev1{0}, prev2{0};
  while (start <= end) {
    auto tmp = prev1;
    prev1 = std::max(prev2 + nums[start++], prev1);
    prev2 = tmp;
  }
  return prev1;
}

}  // namespace solution

#endif  // HOUSE_ROBBER_H_
