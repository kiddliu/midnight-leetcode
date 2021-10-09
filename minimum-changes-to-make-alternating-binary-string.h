#ifndef MINIMUM_CHANGES_TO_MAKE_ALTERNATING_BINARY_STRING_H_
#define MINIMUM_CHANGES_TO_MAKE_ALTERNATING_BINARY_STRING_H_

#include <string>

namespace solution {

int minOperations(std::string s) {
  // just compare it with the 2 final good alternating strings and find which one requires the least changes
  // Runtime: 4 ms, faster than 83.83% of C++ online submissions for Minimum Changes To Make Alternating Binary String.
  // Memory Usage: 7 MB, less than 75.19% of C++ online submissions for Minimum Changes To Make Alternating Binary String.
  //
  auto d1{0}, d2{0};
  for (auto i = 0; i < s.size(); ++i) {
    d1 += s[i] - '0' == i % 2;
    d2 += s[i] - '0' == (i + 1) % 2;
  }
  return std::min(d1, d2);
}

}

#endif  // !MINIMUM_CHANGES_TO_MAKE_ALTERNATING_BINARY_STRING_H_
