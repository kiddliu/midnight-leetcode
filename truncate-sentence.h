#ifndef TRUNCATE_SENTENCE_H_
#define TRUNCATE_SENTENCE_H_

#include <string>

namespace solution {

std::string truncateSentence(std::string s, int k) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Truncate Sentence.
  // Memory Usage: 6.3 MB, less than 83.79% of C++ online submissions for Truncate Sentence.
  //
  auto offset{0}, count{0};
  for (size_t i = 1; i < s.size(); i++) {
    if (s[i] == ' ' && ++count == 5) {
      offset = i;
      break;
    }
  }

  return offset == 0 ? s : s.substr(0, offset);
}

}

#endif  // TRUNCATE_SENTENCE_H_
