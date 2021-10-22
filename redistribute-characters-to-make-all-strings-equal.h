#ifndef REDISTRIBUTE_CHARACTERS_TO_MAKE_ALL_STRINGS_EQUAL_H_
#define REDISTRIBUTE_CHARACTERS_TO_MAKE_ALL_STRINGS_EQUAL_H_

#include <array>
#include <string>
#include <vector>

namespace solution {

bool makeEqual(std::vector<std::string>& words) {
  // straight forward
  // Runtime: 10 ms, faster than 95.33% of C++ online submissions for Redistribute Characters to Make All Strings Equal.
  // Memory Usage: 11.5 MB, less than 94.21% of C++ online submissions for Redistribute Characters to Make All Strings Equal.
  //
  std::array<int, 26> a{};

  for (auto& word : words) {
    for (auto& c : word) {
      ++a[c - 'a'];
    }
  }

  for (auto& count : a) {
    if (count % words.size() != 0) return false;
  }
  return true;
}

}

#endif  // REDISTRIBUTE_CHARACTERS_TO_MAKE_ALL_STRINGS_EQUAL_H_
