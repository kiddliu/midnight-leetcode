#ifndef LONG_PRESSED_NAME_H_
#define LONG_PRESSED_NAME_H_

#include <string>

namespace solution {

bool isLongPressedName(std::string name, std::string typed) {
  // naive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Long Pressed Name.
  // Memory Usage: 6.4 MB, less than 11.77% of C++ online submissions for Long Pressed Name.
  //
  if (name.size() > typed.size()) return false;

  size_t i = 0, j = 0;
  while (i < name.size() && j < typed.size()) {
    if (name[i] == typed[j]) {
      i++, j++;
    } else if (i != 0 && name[i - 1] == typed[j]) {
      j++;
    } else {
      return false;
    }
  }
  if (i < name.size()) return false;
  while (j < typed.size()) {
    if (typed[j] != name[i - 1]) return false;
    ++j;
  }
  return true;
}

}

#endif  // LONG_PRESSED_NAME_H_
