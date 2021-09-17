#ifndef SHUFFLE_STRING_H_
#define SHUFFLE_STRING_H_

#include <string>
#include <vector>

namespace solution {

std::string restoreString(std::string s, std::vector<int>& indices) {
  // straight forward
  // Runtime: 4 ms, faster than 94.37% of C++ online submissions for Shuffle String.
  // Memory Usage: 15.1 MB, less than 94.46% of C++ online submissions for Shuffle String.
  //
  std::string result(s.size(), ' ');
  for (size_t i = 0; i < s.size(); ++i) {
    result[indices[i]] = s[i];
  }
  return result;
}

}

#endif  // SHUFFLE_STRING_H_
