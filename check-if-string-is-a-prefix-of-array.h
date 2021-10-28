#ifndef CHECK_IF_STRING_IS_A_PREFIX_OF_ARRAY_H_
#define CHECK_IF_STRING_IS_A_PREFIX_OF_ARRAY_H_

#include <string>
#include <vector>

namespace solution {

bool isPrefixString(std::string s, std::vector<std::string>& words) {
  // straight forward
  // Runtime: 4 ms, faster than 81.28% of C++ online submissions for Check If String Is a Prefix of Array.
  // Memory Usage: 13.8 MB, less than 85.39% of C++ online submissions for Check If String Is a Prefix of Array.
  //
  std::string prefix;

  for (auto& word : words) {
    prefix.append(word);
    if (prefix == s) {
      return true;
    } else if (prefix.size() > s.size()) {
      return false;
    }
  }
  return false;
}

}

#endif  // CHECK_IF_STRING_IS_A_PREFIX_OF_ARRAY_H_
