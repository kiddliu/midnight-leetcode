#ifndef LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_
#define LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_

#include <algorithm>
#include <array>
#include <string>

namespace solution {

int lengthOfLongestSubstring(std::string s) {
  // poor solution with map...
  // Runtime: 8 ms, faster than 86.29% of C++ online submissions for Longest Substring Without Repeating Characters.
  // Memory Usage: 6.9 MB, less than 96.13% of C++ online submissions for Longest Substring Without Repeating Characters.
  //
  if (s.size() < 2) return s.size();

  auto start{-1}, p{0}, length{0};
  std::array<int, 256> arr{};
  std::fill(arr.begin(), arr.end(), -1);

  while (p < s.size()) {
    if (arr[s[p]] > start) {
      start = arr[s[p]];
    }
    arr[s[p]] = p;
    length = std::max(length, p - start);
    ++p;
  }
  return length;
}

}  // namespace solution

#endif  // LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H_
