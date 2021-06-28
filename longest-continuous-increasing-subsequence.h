#ifndef LONGEST_CONTINUOUS_INCREASING_SUBSEQUENCE_H_
#define LONGEST_CONTINUOUS_INCREASING_SUBSEQUENCE_H_

#include <vector>

namespace solution {

int findLengthOfLCIS(std::vector<int>& nums) {
  // naive
  // Runtime: 12 ms, faster than 50.16% of C++ online submissions for Longest Continuous Increasing Subsequence.
  // Memory Usage: 11 MB, less than 58.01% of C++ online submissions for Longest Continuous Increasing Subsequence.
  //
  auto r{1}, c{1}, last{nums[0]};
  auto p = nums.cbegin() + 1, e = nums.cend();
  while (p != e) {
    if (*p > last) {
      ++c;
    } else {
      if (c > r) r = c;
      c = 1;
    }

    last = *p;
    ++p;
  }

  return c > r ? c : r;
}

}

#endif  // LONGEST_CONTINUOUS_INCREASING_SUBSEQUENCE_H_
