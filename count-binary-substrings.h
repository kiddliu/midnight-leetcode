#ifndef COUNT_BINARY_SUBSTRINGS_H_
#define COUNT_BINARY_SUBSTRINGS_H_

#include <string>
#include <vector>

namespace solution {


int countBinarySubstrings(std::string s) {
  // naive
  // Runtime: 20 ms, faster than 93.66% of C++ online submissions for Count Binary Substrings.
  // Memory Usage: 10.5 MB, less than 40.49% of C++ online submissions for Count Binary Substrings.
  //
  auto c1{0}, c2{1}, result{0};
  for (size_t i = 1; i < s.size(); ++i) {
    if (s[i - 1] == s[i]) {
      ++c2;
    } else {
      result += std::min(c1, c2);
      c1 = c2;
      c2 = 1;
    }
  }

  return result + std::min(c1, c2);
}

}

#endif  // COUNT_BINARY_SUBSTRINGS_H_
