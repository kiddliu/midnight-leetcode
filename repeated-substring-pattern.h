#ifndef REPEATED_SUBSTRING_PATTERN_H_
#define REPEATED_SUBSTRING_PATTERN_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

bool repeatedSubstringPattern(std::string s) {
  // naive solution, thanks to the power of the computer god!
  // a smart solution is concat the s and s, remove the head and tail char
  // then check if it can be found again as the pattern repeat itself just by some offset
  // really smart idea...i've joined an army crying why they could come up with such idea
  // seeking for the nature of the problem is true beauty of problem solving
  // 
  // Runtime: 56 ms, faster than 24.69% of C++ online submissions for Repeated Substring Pattern.
  // Memory Usage: 15.6 MB, less than 34.03% of C++ online submissions for Repeated Substring Pattern.
  // 
  if (s.size() == 1) return false;
  if (s.size() == 2) return s[0] == s[1];

  std::vector<bool> flag(s.size() + 1, true);
  flag[0] = flag[1] = false;
  for (int i = 2; i * i <= s.size(); ++i) {
    if (flag[i]) {
      for (int j = i * i; j <= s.size(); j += i) {
        flag[j] = false;
      }
    }
  }

  if (flag[s.size()]) {
    return std::all_of(s.cbegin(), s.cend(),
                       [&s](const char& c) { return c == s[0]; });
  }

  for (size_t i = 2; i <= s.size() / 2; ++i) {
    if (s.size() % i != 0) continue;
    auto sub = s.substr(0, i);
    auto offset = i;

    auto fault{false};
    while (offset + i <= s.size()) {
      if (sub != s.substr(offset, i)) {
        fault = true;
        break;
      }
      offset += i;
    }
    if (!fault) return true;
  }
  return false;
}

}

#endif  // REPEATED_SUBSTRING_PATTERN_H_
