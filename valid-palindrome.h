#ifndef VALID_PALINDROME_H_
#define VALID_PALINDROME_H_

#include <cctype>
#include <string>

namespace solution {

bool isPalindrome(std::string s) {
  // Two iterators
  // Runtime: 4 ms, faster than 94.66% of C++ online submissions for Valid Palindrome.
  // Memory Usage: 7.3 MB, less than 48.62% of C++ online submissions for Valid Palindrome.
  //
  if (s.size() == 1) return true;

  auto begin = s.cbegin(), rbegin = s.cend() - 1;
  do {
    while (begin < s.cend() && !std::isalnum(*begin)) ++begin;
    while (rbegin > s.cbegin() && !std::isalnum(*rbegin)) --rbegin;
    
    if (begin >= rbegin) return true;

    if (std::tolower(*begin) == std::tolower(*rbegin)) {
      ++begin;
      --rbegin;
    } else {
      return false;
    }
  } while (rbegin > begin);

  return true;
}

}


#endif  // VALID_PALINDROME_H_
