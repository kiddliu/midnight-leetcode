#ifndef CHECK_IF_ALL_CHARACTERS_HAVE_EQUAL_NUMBER_OF_OCCURRENCES_H_
#define CHECK_IF_ALL_CHARACTERS_HAVE_EQUAL_NUMBER_OF_OCCURRENCES_H_

#include <array>
#include <string>

namespace solution {

bool areOccurrencesEqual(std::string s) {
  // straight forward
  // Runtime: 4 ms, faster than 73.70% of C++ online submissions for Check if All Characters Have Equal Number of Occurrences.
  // Memory Usage: 6.6 MB, less than 85.98% of C++ online submissions for Check if All Characters Have Equal Number of Occurrences.
  // 
  if (s.size() < 3) return true;

  std::array<int, 26> a{};
  for (auto& c : s) {
    ++a[c - 'a'];
  }

  auto occurrence{0};
  for (auto& i : a) {
    if (i > 0) {
      if (occurrence == 0) {
        occurrence = i;
      } else if (occurrence != i) {
        return false;
      }
    }
  }
  return true;
}

}

#endif  // CHECK_IF_ALL_CHARACTERS_HAVE_EQUAL_NUMBER_OF_OCCURRENCES_H_
