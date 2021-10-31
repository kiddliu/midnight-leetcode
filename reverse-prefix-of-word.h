#ifndef REVERSE_PREFIX_OF_WORD_H_
#define REVERSE_PREFIX_OF_WORD_H_

#include <algorithm>
#include <string>

namespace solution {

std::string reversePrefix(std::string word, char ch) {
  // staight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Prefix of Word.
  // Memory Usage: 6.1 MB, less than 92.38% of C++ online submissions for Reverse Prefix of Word.
  //
  auto i = word.find(ch);

  if (i++ != std::string::npos) {
    std::reverse(word.begin(), word.begin() + i);
  }

  return word;
}

}

#endif  // REVERSE_PREFIX_OF_WORD_H_
