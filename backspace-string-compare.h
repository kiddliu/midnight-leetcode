#ifndef BACKSPACE_STRING_COMPARE_H_
#define BACKSPACE_STRING_COMPARE_H_

#include <stack>
#include <string>

namespace solution {

bool backspaceCompare(std::string s, std::string t) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Backspace String Compare.
  // Memory Usage: 6.3 MB, less than 67.77% of C++ online submissions for Backspace String Compare.
  //
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '#') {
      s.erase(i--, 1);
      if (i >= 0) s.erase(i--, 1);
    }
  }
  for (int i = 0; i < t.size(); ++i) {
    if (t[i] == '#') {
      t.erase(i--, 1);
      if (i >= 0) t.erase(i--, 1);
    }
  }
  return s == t;
}

}

#endif  // BACKSPACE_STRING_COMPARE_H_
