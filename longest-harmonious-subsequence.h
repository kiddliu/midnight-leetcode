#ifndef LONGEST_HARMONIOUS_SUBSEQUENCE_H_
#define LONGEST_HARMONIOUS_SUBSEQUENCE_H_

#include <algorithm>
#include <map>
#include <set>
#include <vector>

namespace solution {

int findLHS(std::vector<int>& nums) {
  // naive, should sort and uses 2 ptrs to find the range
  // Runtime: 96 ms, faster than 46.39% of C++ online submissions for Longest Harmonious Subsequence.
  // Memory Usage: 41.5 MB, less than 43.93% of C++ online submissions for Longest Harmonious Subsequence.
  //
  std::sort(nums.begin(), nums.end());
  std::map<int, int> m;
  for (const auto& n : nums) {
    m[n]++;
  }
  if (m.size() == 1) return 0;

  auto r{0};
  auto p = m.cbegin(), e = m.cend();
  while (p != e) {
    std::pair<int, int> p1 = *p, p2 = p1;
    if (++p == e) {
      break;
    } else {
      p2 = *p;
    }

    if (p2.first - p1.first == 1) {
      r = std::max(r, p1.second + p2.second);
    }
  }
  return r;
}

}

#endif  // LONGEST_HARMONIOUS_SUBSEQUENCE_H_
