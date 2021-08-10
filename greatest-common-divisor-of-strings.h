#ifndef GREATEST_COMMON_DIVISOR_OF_STRINGS_H_
#define GREATEST_COMMON_DIVISOR_OF_STRINGS_H_

#include <numeric>
#include <string>

namespace solution {

int gcdi(int a, int b) { return b == 0 ? a : gcdi(b, a % b); }

std::string gcdOfStrings(std::string str1, std::string str2) {
  // godlike str1 + str2 == str2 + str1
  // Runtime: 4 ms, faster than 75.86% of C++ online submissions for Greatest Common Divisor of Strings.
  // Memory Usage: 7 MB, less than 84.31% of C++ online submissions for Greatest Common Divisor of Strings.
  //
  if (str1.size() == str2.size()) {
    return str1 == str2 ? str1 : "";
  }

  auto gcd = gcdi(str1.size(), str2.size());
  auto gcds = str1.substr(0, gcd);

  for (size_t i = 0; i < str1.size(); i += gcd) {
    if (str1.substr(i, gcd) != gcds) return "";
  }
  for (size_t i = 0; i < str2.size(); i += gcd) {
    if (str2.substr(i, gcd) != gcds) return "";
  }
  return gcds;
}

}

#endif  // GREATEST_COMMON_DIVISOR_OF_STRINGS_H_
