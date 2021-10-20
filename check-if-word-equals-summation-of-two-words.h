#ifndef CHECK_IF_WORD_EQUALS_SUMMATION_OF_TWO_WORDS_H_
#define CHECK_IF_WORD_EQUALS_SUMMATION_OF_TWO_WORDS_H_

#include <algorithm>
#include <numeric>
#include <string>

namespace solution {

bool isSumEqual(std::string firstWord, std::string secondWord, std::string targetWord) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if Word Equals Summation of Two Words.
  // Memory Usage: 6 MB, less than 54.27% of C++ online submissions for Check if Word Equals Summation of Two Words.
  //
  auto to_num = [](std::string& word) {
    for (auto& c : word) {
      c -= 49;
    }
    return std::stoi(word);
  };

  return to_num(firstWord) + to_num(secondWord) == to_num(targetWord);
}

}

#endif  // CHECK_IF_WORD_EQUALS_SUMMATION_OF_TWO_WORDS_H_
