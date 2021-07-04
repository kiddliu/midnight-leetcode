#ifndef TO_LOWER_CASE_H_
#define TO_LOWER_CASE_H_

#include <string>

namespace solution {

std::string toLowerCase(std::string s) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
  // Memory Usage: 6.1 MB, less than 36.98% of C++ online submissions for To Lower Case.
  //
  for (auto& i : s) {
    if (i >= 'A' && i <= 'Z') i += ('a' - 'A');
  }
  return s;
}

}

#endif  // TO_LOWER_CASE_H_
