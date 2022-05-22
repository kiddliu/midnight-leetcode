#ifndef PALINDROMIC_SUBSTRINGS_H_
#define PALINDROMIC_SUBSTRINGS_H_

#include <string>

namespace solution {

int countSubstrings(std::string s) {
  // an interesting way to look at palindrome is to examine from the center
  // Runtime: 4 ms, faster than 84.41% of C++ online submissions for Palindromic Substrings.
  // Memory Usage: 6.2 MB, less than 82.67% of C++ online submissions for Palindromic Substrings.
  //
  int result{0}, size = s.size();

  for (auto i{0}; i < size; ++i) {
    for (auto j{0}; i - j >= 0 && i + j < size && s[i - j] == s[i + j]; ++j)
      ++result;
    for (auto j{0}; i - 1 - j >= 0 && i + j < size && s[i - 1 - j] == s[i + j];
         ++j)
      ++result;
  }

  return result;
}

}  // namespace solution

#endif  // PALINDROMIC_SUBSTRINGS_H_
