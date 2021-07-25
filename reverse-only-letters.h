#ifndef REVERSE_ONLY_LETTERS_H_
#define REVERSE_ONLY_LETTERS_H_

#include <string>

namespace solution {

std::string reverseOnlyLetters(std::string s) {
  // 2 ptrs
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Only Letters.
  // Memory Usage: 6.2 MB, less than 22.56% of C++ online submissions for Reverse Only Letters.
  //
  if (s.size() == 1) return s;

  for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
    while (i < s.size() && !std::isalpha(s[i])) ++i;
    while (j > -1 && !std::isalpha(s[j])) --j;
    if (i >= j) break;
    
    std::swap(s[i], s[j]);
  }
  return s;
}

}

#endif  // !REVERSE_ONLY_LETTERS_H_
