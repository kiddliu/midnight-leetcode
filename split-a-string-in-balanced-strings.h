#ifndef SPLIT_A_STRING_IN_BALANCED_STRINGS_H_
#define SPLIT_A_STRING_IN_BALANCED_STRINGS_H_

#include <string>

namespace solution {

int balancedStringSplit(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Split a String in Balanced Strings.
  // Memory Usage: 6.1 MB, less than 97.87% of C++ online submissions for Split a String in Balanced Strings.
  //
  auto result{0}, t{0};

  for (const auto& c : s) {
    t += c == 'L' ? 1 : -1;
    result += t == 0;
  }
  return result;
}

}


#endif  // SPLIT_A_STRING_IN_BALANCED_STRINGS_H_
