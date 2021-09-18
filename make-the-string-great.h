#ifndef MAKE_THE_STRING_GREAT_H_
#define MAKE_THE_STRING_GREAT_H_

#include <string>

namespace solution {

std::string makeGood(std::string s) {
  // erasing costs too much
  // Runtime: 4 ms, faster than 60.02% of C++ online submissions for Make The String Great.
  // Memory Usage: 6.2 MB, less than 79.73% of C++ online submissions for Make The String Great.
  //
  if (s.size() == 1) return s;
  for (auto i = 0; i < (int)s.size() - 1; ) {
    if (std::abs(s[i + 1] - s[i]) == 32) {
      s.erase(i, 2);
      if (i > 0) --i;
    } else {
      ++i;
    }
  }
  return s;
}

}

#endif  // MAKE_THE_STRING_GREAT_H_
