#ifndef REPLACE_ALL_DIGITS_WITH_CHARACTERS_H_
#define REPLACE_ALL_DIGITS_WITH_CHARACTERS_H_

#include <string>

namespace solution {

std::string replaceDigits(std::string s) {
  // stright forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Replace All Digits with Characters.
  // Memory Usage: 6 MB, less than 79.98% of C++ online submissions for Replace All Digits with Characters.
  //
  if (s.size() == 1) return s;

  for (auto i = 1; i < s.size(); i += 2) {
    s[i] += s[i - 1] - '0';
  }
  return s;
}

}

#endif  // REPLACE_ALL_DIGITS_WITH_CHARACTERS_H_
