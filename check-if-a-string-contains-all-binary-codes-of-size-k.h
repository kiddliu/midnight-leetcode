#ifndef CHECK_IF_A_STRING_CONTAINS_ALL_BINARY_CODES_OF_SIZE_K_H_
#define CHECK_IF_A_STRING_CONTAINS_ALL_BINARY_CODES_OF_SIZE_K_H_

#include <cmath>
#include <string>
#include <vector>

namespace solution {

bool hasAllCodes(std::string s, int k) {
  // hashing
  // Runtime: 59 ms, faster than 94.41% of C++ online submissions for Check If a String Contains All Binary Codes of Size K.
  // Memory Usage: 18.7 MB, less than 93.17% of C++ online submissions for Check If a String Contains All Binary Codes of Size K.
  //
  if (s.size() < k) return false;

  int size = s.size() - k + 1, hash = std::stoi(s.substr(0, k), nullptr, 2),
      result = 1 << k, mask = result - 1;
  std::vector<bool> v(result--);
  v[hash] = true;

  for (auto i{1}; i < size; ++i) {
    hash = ((hash << 1) & mask) | s[i + k - 1] - '0';
    if (!v[hash]) {
      v[hash] = true;

      if (--result == 0) return true;
    }
  }
  return false;
}

}

#endif  // !CHECK_IF_A_STRING_CONTAINS_ALL_BINARY_CODES_OF_SIZE_K_H_
