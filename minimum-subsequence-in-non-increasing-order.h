#ifndef MINIMUM_SUBSEQUENCE_IN_NON_INCREASING_ORDER_H_
#define MINIMUM_SUBSEQUENCE_IN_NON_INCREASING_ORDER_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

std::vector<int> minSubsequence(std::vector<int>& nums) {
  // straight forward
  // Runtime: 4 ms, faster than 92.76% of C++ online submissions for Minimum Subsequence in Non-Increasing Order.
  // Memory Usage: 10.5 MB, less than 98.68% of C++ online submissions for Minimum Subsequence in Non-Increasing Order.
  //
  std::sort(nums.begin(), nums.end(), std::greater<int>());

  auto sum{std::accumulate(nums.cbegin(), nums.cend(), 0)}, size{0}, partial{0};

  while (partial < sum) {
    partial += nums[size];
    sum -= nums[size];
    ++size;
  }
  nums.resize(size);
  return nums;
}


}

#endif  // MINIMUM_SUBSEQUENCE_IN_NON_INCREASING_ORDER_H_
