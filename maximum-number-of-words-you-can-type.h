#ifndef MAXIMUM_NUMBER_OF_WORDS_YOU_CAN_TYPE_H_
#define MAXIMUM_NUMBER_OF_WORDS_YOU_CAN_TYPE_H_

#include <string>
#include <unordered_set>

namespace solution {

int canBeTypedWords(std::string text, std::string brokenLetters) {
  // straight forward, with padding blank space
  // Runtime: 4 ms, faster than 71.61% of C++ online submissions for Maximum Number of Words You Can Type.
  // Memory Usage: 6.8 MB, less than 36.62% of C++ online submissions for Maximum Number of Words You Can Type.
  //
  text.push_back(' ');
  std::unordered_set<char> s{brokenLetters.cbegin(), brokenLetters.cend()};

  auto result{0};
  for (size_t i = 0; i < text.size(); ++i) {
    if (text[i] == ' ') {
      ++result;
    } else if (s.count(text[i])) {
      i = text.find(' ', i + 1);
    }
  }

  return result;
}

}

#endif  // MAXIMUM_NUMBER_OF_WORDS_YOU_CAN_TYPE_H_
