#ifndef LONGEST_INCREASING_SUBSEQUENCE_H_
#define LONGEST_INCREASING_SUBSEQUENCE_H_

#include <algorithm>
#include <vector>

namespace solution {

int lengthOfLIS(std::vector<int>& nums) {
  // it's a DP, but optimized
  // Runtime: 11 ms, faster than 91.38% of C++ online submissions for Longest Increasing Subsequence.
  // Memory Usage: 10.4 MB, less than 88.72% of C++ online submissions for Longest Increasing Subsequence.
  //
  std::vector<int> result;

  for (auto& n : nums) {
    auto i = std::lower_bound(result.begin(), result.end(), n);
    if (i == result.end()) {
      result.push_back(n);
    } else {
      *i = n;
    }
  }

  return result.size();
}

}  // namespace solution

#endif  // !LONGEST_INCREASING_SUBSEQUENCE_H_
