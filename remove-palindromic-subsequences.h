#ifndef REMOVE_PALINDROMIC_SUBSEQUENCES_H_
#define REMOVE_PALINDROMIC_SUBSEQUENCES_H_

#include <string>

namespace solution {

bool isPalindrome(std::string& s) {
  size_t p1{0}, p2{s.size() - 1};
  while (p1 < p2) {
    if (s[p1] != s[p2]) return false;
    ++p1, --p2;
  }

  return true;
}

int removePalindromeSub(std::string s) {
  // stupid description
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Palindromic Subsequences.
  // Memory Usage: 6.1 MB, less than 96.25% of C++ online submissions for Remove Palindromic Subsequences.
  //
  return isPalindrome(s) ? 1 : 2;
}


}

#endif  // REMOVE_PALINDROMIC_SUBSEQUENCES_H_
