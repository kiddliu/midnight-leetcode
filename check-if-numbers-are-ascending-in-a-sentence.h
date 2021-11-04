#ifndef CHECK_IF_NUMBERS_ARE_ASCENDING_IN_A_SENTENCE_H_
#define CHECK_IF_NUMBERS_ARE_ASCENDING_IN_A_SENTENCE_H_

#include <string>

namespace solution {

bool areNumbersAscending(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if Numbers Are Ascending in a Sentence.
  // Memory Usage: 6.5 MB, less than 15.34% of C++ online submissions for Check if Numbers Are Ascending in a Sentence.
  //
  auto i{0}, num{0};

  while (i < s.size()) {
    if (std::isdigit(s[i])) {
      auto latest = std::stoi(s.substr(i, s.find_first_of(' ', i)));
      if (latest <= num) return false;
    }

    i = s.find_first_of(' ', i);
    if (i != std::string::npos) i++;
  }

  return true;
}

}

#endif  // CHECK_IF_NUMBERS_ARE_ASCENDING_IN_A_SENTENCE_H_
