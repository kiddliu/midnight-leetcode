#ifndef CHECK_IF_ONE_STRING_SWAP_CAN_MAKE_STRINGS_EQUAL_H_
#define CHECK_IF_ONE_STRING_SWAP_CAN_MAKE_STRINGS_EQUAL_H_

#include <string>
#include <vector>

namespace solution {

bool areAlmostEqual(std::string s1, std::string s2) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check if One String Swap Can Make Strings Equal.
  // Memory Usage: 6.3 MB, less than 26.82% of C++ online submissions for Check if One String Swap Can Make Strings Equal.
  //
  if (s1 == s2) return true;

  std::vector<int> indices;
  for (auto i = 0; i < s1.size(); ++i) {
    if (s1[i] != s2[i]) {
      indices.push_back(i);
    }
  }

  return indices.size() == 2 && s1[indices[0]] == s2[indices[1]] && s1[indices[1]] == s2[indices[0]];
}

}

#endif  // !CHECK_IF_ONE_STRING_SWAP_CAN_MAKE_STRINGS_EQUAL_H_
