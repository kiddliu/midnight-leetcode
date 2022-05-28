#ifndef LONGEST_CONSECUTIVE_SEQUENCE_H_
#define LONGEST_CONSECUTIVE_SEQUENCE_H_

#include <unordered_map>
#include <vector>

namespace solution {

int longestConsecutive(std::vector<int>& nums) {
  // fucking brilliant...
  // Runtime: 187 ms, faster than 50.81% of C++ online submissions for Longest Consecutive Sequence.
  // Memory Usage: 52.1 MB, less than 5.04% of C++ online submissions for Longest Consecutive Sequence.
  //
  std::unordered_map<int, int> m;
  auto result{0};

  for (auto& n : nums) {
    if (m[n]) continue;

    m[n] = m[n + m[n + 1]] = m[n - m[n - 1]] = m[n + 1] + m[n - 1] + 1;
    result = std::max(result, m[n]);
  }
  return result;
}

}

#endif  // LONGEST_CONSECUTIVE_SEQUENCE_H_
