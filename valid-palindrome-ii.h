#ifndef VALID_PALINDROME_II_H_
#define VALID_PALINDROME_II_H_

#include <string>

namespace solution {

bool validPalindrome(std::string s) {
  // naive
  // Runtime: 68 ms, faster than 23.92% of C++ online submissions for Valid Palindrome II.
  // Memory Usage: 23.1 MB, less than 52.60% of C++ online submissions for Valid Palindrome II.
  //
  if (s.size() < 3) return true;

  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] != s[s.size() - i - 1]) {
      return isPalindrome(s.substr(i, s.size() - 2 * i - 1)) ||
             isPalindrome(s.substr(i + 1, s.size() - 2 * i - 1));
    }
  }
  return true;
}

bool isPalindrome(std::string s) {
  int i = 0, j = s.size() - 1;

  while (i < j && s[i] == s[j]) {
    i++;
    j--;
  };

  return i >= j;
}

}

#endif  // VALID_PALINDROME_II_H_
