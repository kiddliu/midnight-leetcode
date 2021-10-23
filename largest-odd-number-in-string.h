#ifndef LARGEST_ODD_NUMBER_IN_STRING_H_
#define LARGEST_ODD_NUMBER_IN_STRING_H_

#include <string>

namespace solution {

std::string largestOddNumber(std::string num) {
  // straight forward
  // Runtime: 19 ms, faster than 98.26% of C++ online submissions for Largest Odd Number in String.
  // Memory Usage: 14.9 MB, less than 69.53% of C++ online submissions for Largest Odd Number in String.
  //
  for (int i = num.size() - 1; i >= 0; --i) {
    if ((num[i] - '0') % 2 == 1) return num.substr(0, i);
  }
  return std::string{};
}

}

#endif  // LARGEST_ODD_NUMBER_IN_STRING_H_
