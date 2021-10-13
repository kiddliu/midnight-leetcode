#ifndef SECOND_LARGEST_DIGIT_IN_A_STRING_H_
#define SECOND_LARGEST_DIGIT_IN_A_STRING_H_

#include <string>

namespace solution {

int secondHighest(std::string s) {
  // straight forward
  // Runtime: 4 ms, faster than 71.72% of C++ online submissions for Second Largest Digit in a String.
  // Memory Usage: 6.7 MB, less than 84.66% of C++ online submissions for Second Largest Digit in a String.
  //
  auto max{-1}, second{-1};

  for (const auto& c : s) {
    if (c > 47 && c < 58) {
      auto n = c - 48;
      if (n > max) {
        second = max;
        max = n;
      } else if (n != max && n > second) {
        second = n;
      }
    }
  }

  return second;
}

}

#endif  // !SECOND_LARGEST_DIGIT_IN_A_STRING_H_
