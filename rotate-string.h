#ifndef ROTATE_STRING_H_
#define ROTATE_STRING_H_

#include <string>

namespace solution {

bool rotateString(std::string s, std::string goal) {
  // still cannot think through every corner case
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate String.
  // Memory Usage: 6.2 MB, less than 33.42% of C++ online submissions for Rotate String.
  //
  return s == goal || goal.size() == s.size() &&
                          (s + s).substr(1).find(goal) != std::string::npos;
}

}

#endif  // ROTATE_STRING_H_
