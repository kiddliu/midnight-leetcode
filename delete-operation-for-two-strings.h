#ifndef DELETE_OPERATION_FOR_TWO_STRINGS_H_
#define DELETE_OPERATION_FOR_TWO_STRINGS_H_

#include <string>
#include <vector>

namespace solution {

int minDistance(std::string word1, std::string word2) {
  // 1d dp...
  // Runtime: 27 ms, faster than 62.95% of C++ online submissions for Delete Operation for Two Strings.
  // Memory Usage: 6.9 MB, less than 95.84% of C++ online submissions for Delete Operation for Two Strings
  //
  std::vector<int> previous(word2.size() + 1), current(word2.size() + 1);
  for (auto i{0}; i <= word1.size(); ++i) {
    std::fill(current.begin(), current.end(), 0);
    for (auto j{0}; j <= word2.size(); ++j) {
      if (i == 0 || j == 0) {
        current[j] = i + j;
      } else if (word1[i - 1] == word2[j - 1]) {
        current[j] = previous[j - 1];
      } else {
        current[j] = 1 + std::min(previous[j], current[j - 1]);
      }
    }
    previous = current;
  }
  return previous.back();
}

}

#endif  // !DELETE_OPERATION_FOR_TWO_STRINGS_H_
