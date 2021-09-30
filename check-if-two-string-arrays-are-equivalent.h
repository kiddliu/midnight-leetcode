#ifndef CHECK_IF_TWO_STRING_ARRAYS_ARE_EQUIVALENT_H_
#define CHECK_IF_TWO_STRING_ARRAYS_ARE_EQUIVALENT_H_

#include <string>
#include <vector>

namespace solution {

bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
  // straight forward
  // Runtime: 4 ms, faster than 80.05% of C++ online submissions for Check If Two String Arrays are Equivalent.
  // Memory Usage: 11.6 MB, less than 28.68% of C++ online submissions for Check If Two String Arrays are Equivalent.
  //
  std::string w1, w2;
  for (const auto& s : word1) {
    w1.append(s);
  }
  for (const auto& s : word2) {
    w2.append(s);
  }
  return w1 == w2;
}

}

#endif  // !CHECK_IF_TWO_STRING_ARRAYS_ARE_EQUIVALENT_H_
