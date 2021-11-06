#ifndef NUMBER_OF_VALID_WORDS_IN_A_SENTENCE_H_
#define NUMBER_OF_VALID_WORDS_IN_A_SENTENCE_H_

#include <regex>
#include <sstream>
#include <string>
#include <vector>

namespace solution {

int countValidWords(std::string s) {
  // regex is slow but elegant
  // Runtime: 144 ms, faster than 5.12% of C++ online submissions for Number of Valid Words in a Sentence.
  // Memory Usage: 46.8 MB, less than 5.02% of C++ online submissions for Number of Valid Words in a Sentence.
  //
  auto result{0};

  std::string buf;
  std::stringstream ss{s};
  std::regex r{"^([a-z]+(-[a-z]+)?)?[,.!]?$"};

  while (ss >> buf) {
    result += std::regex_match(buf, r);
  }

  return result;
}

}

#endif  // NUMBER_OF_VALID_WORDS_IN_A_SENTENCE_H_
