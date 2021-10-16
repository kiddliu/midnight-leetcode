#ifndef CHECK_IF_THE_SENTENCE_IS_PANGRAM_H_
#define CHECK_IF_THE_SENTENCE_IS_PANGRAM_H_

#include <string>
#include <unordered_set>

namespace solution {

bool checkIfPangram(std::string sentence) {
  // unordered_set
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if the Sentence Is Pangram.
  // Memory Usage: 7.2 MB, less than 22.21% of C++ online submissions for Check if the Sentence Is Pangram.
  //
  if (sentence.size() < 26) return false;

  return std::unordered_set<char>(sentence.cbegin(), sentence.cend()).size() ==
         26;
}

}

#endif  // CHECK_IF_THE_SENTENCE_IS_PANGRAM_H_
