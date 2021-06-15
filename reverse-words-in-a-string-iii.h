#ifndef REVERSE_WORDS_IN_A_STRING_III_H_
#define REVERSE_WORDS_IN_A_STRING_III_H_

#include <algorithm>
#include <string>

namespace solution {

std::string reverseWords(std::string s) {
  // naive
  // Runtime: 12 ms, faster than 94.79% of C++ online submissions for Reverse Words in a String III.
  // Memory Usage: 9.8 MB, less than 53.50% of C++ online submissions for Reverse Words in a String III.
  //
  auto i = s.begin();
  std::size_t p = 0, c = p, e = s.size();

  do {
    c = s.find(' ', p);
    if (c == std::string::npos) {
      c = e;
    }
    std::reverse(i + p, i + c);
    p = c + 1;
  } while (c != e);

  return s;
}

}

#endif  // REVERSE_WORDS_IN_A_STRING_III_H_
