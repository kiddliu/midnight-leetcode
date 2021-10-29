#ifndef NUMBER_OF_STRINGS_THAT_APPEAR_AS_SUBSTRINGS_IN_WORD_H_
#define NUMBER_OF_STRINGS_THAT_APPEAR_AS_SUBSTRINGS_IN_WORD_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

int numOfStrings(std::vector<std::string>& patterns, std::string word) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Strings That Appear as Substrings in Word.
  // Memory Usage: 8.6 MB, less than 88.85% of C++ online submissions for Number of Strings That Appear as Substrings in Word.
  //
  return std::count_if(
      patterns.cbegin(), patterns.cend(),
      [&word](const auto& p) { return word.find(p) != std::string::npos; });
}

}

#endif  // NUMBER_OF_STRINGS_THAT_APPEAR_AS_SUBSTRINGS_IN_WORD_H_
