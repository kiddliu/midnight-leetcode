#ifndef REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_H_
#define REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_H_

#include <string>

namespace solution {

std::string removeDuplicates(std::string s) {
  // with string as stack
  // Runtime: 16 ms, faster than 82.08% of C++ online submissions for Remove All Adjacent Duplicates In String.
  // Memory Usage: 11 MB, less than 29.81% of C++ online submissions for Remove All Adjacent Duplicates In String.
  //
  std::string result;

  for (const auto& c : s) {
    if (result.empty() || result.back() != c) {
      result.push_back(c);
    } else {
      result.pop_back();
    }
  }

  return result;
}


}


#endif  // REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_H_
