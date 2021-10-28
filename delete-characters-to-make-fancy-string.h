#ifndef DELETE_CHARACTERS_TO_MAKE_FANCY_STRING_H_
#define DELETE_CHARACTERS_TO_MAKE_FANCY_STRING_H_

#include <string>

namespace solution {

std::string makeFancyString(std::string s) {
  // straight forward
  // Runtime: 124 ms, faster than 96.54% of C++ online submissions for Delete Characters to Make Fancy String.
  // Memory Usage: 41.1 MB, less than 23.21% of C++ online submissions for Delete Characters to Make Fancy String.
  //
  std::string result;

  int last{0}, count{0};
  for (auto& c : s) {
    if (last != c) {
      last = c;
      count = 1;
      result.append(1, c);
    } else if (++count < 3) {
      result.append(1, c);
    }
  }

  return result;
}

}

#endif  // DELETE_CHARACTERS_TO_MAKE_FANCY_STRING_H_
