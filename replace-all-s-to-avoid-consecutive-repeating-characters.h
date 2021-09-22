#ifndef REPLACE_ALL_S_TO_AVOID_CONSECUTIVE_REPEATING_CHARACTERS_H_
#define REPLACE_ALL_S_TO_AVOID_CONSECUTIVE_REPEATING_CHARACTERS_H_

#include <string>

namespace solution {

std::string modifyString(std::string s) {
  // padding blank
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Replace All ?'s to Avoid Consecutive Repeating Characters.
  // Memory Usage: 6.1 MB, less than 25.20% of C++ online submissions for Replace All ?'s to Avoid Consecutive Repeating Characters.
  //
  s.insert(0, 1, ' ');
  s.push_back(' ');

  for (auto i = 1; i < s.size() - 1; ++i) {
    if (s[i] == '?') {
      auto c = 'a';
      while (c <= 'z') {
        if (c != s[i - 1] && c != s[i + 1]) {
          s[i] = c;
          break;
        }
        ++c;
      }
    }
  }

  return s.substr(1, s.size() - 2);
}

}

#endif  // !REPLACE_ALL_S_TO_AVOID_CONSECUTIVE_REPEATING_CHARACTERS_H_
