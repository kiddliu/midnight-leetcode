#ifndef REVERSE_STRING_H_
#define REVERSE_STRING_H_

#include <algorithm>
#include <string>

namespace solution {

std::string reverseStr(std::string s, int k) {
  // naive
  // Runtime: 8 ms, faster than 18.01% of C++ online submissions for Reverse String II.
  // Memory Usage: 7.4 MB, less than 23.50% of C++ online submissions for Reverse String II.
  //
  auto p = s.begin();
  while (p != s.end()) {
    auto diff = s.end() - p;

    if (diff >= k) {
      std::reverse(p, p + k);
      if (diff > 2 * k) {
        p += 2 * k;
      } else {
        break;
      }
    } else {
      std::reverse(p, s.end());
      break;
    }
  }
  return s;
}

}

#endif  // REVERSE_STRING_H_
