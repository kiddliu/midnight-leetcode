#ifndef MAXIMUM_SCORE_AFTER_SPLITTING_A_STRING_H_
#define MAXIMUM_SCORE_AFTER_SPLITTING_A_STRING_H_

#include <string>

namespace solution {

int maxScore(std::string s) {
  // overkilling this problem
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Score After Splitting a String.
  // Memory Usage: 6.2 MB, less than 79.83% of C++ online submissions for Maximum Score After Splitting a String.
  //
  int zeroes{0}, ones{std::count(s.cbegin(), s.cend(), '1')}, result{0};
  
  for (auto i = 0; i < s.size() - 1; ++i) {
    if (s[i] == '0') {
      ++zeroes;
    } else {
      --ones;
    }
    result = std::max(result, zeroes + ones);
  }

  return result;
}

}

#endif  // MAXIMUM_SCORE_AFTER_SPLITTING_A_STRING_H_
