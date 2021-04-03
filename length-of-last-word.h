#ifndef LENGTH_OF_LAST_WORD_H_
#define LENGTH_OF_LAST_WORD_H_

#include <string>

namespace solution {

int lengthOfLastWord(std::string s) {
  // Brute force
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Length of Last Word.
  // Memory Usage: 6.6 MB, less than 17.97% of C++ online submissions for Length of Last Word.
  //
  if (s.size() == 1) {
    return s[0] == ' ' ? 0 : 1;
  }

  auto rbegin = s.crbegin(), rend = s.crend();
  while (*rbegin == ' ' && rbegin != rend) {
    ++rbegin;
  }
  if (rbegin == rend) return 0;
  auto it = rbegin;

  while (it != rend) {
    if (*it != ' ') {
      ++it;
    } else {
      break;
    }
  }

  return it - rbegin;
}

}

#endif  // LENGTH_OF_LAST_WORD_H_
