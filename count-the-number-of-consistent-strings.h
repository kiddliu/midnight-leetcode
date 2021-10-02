#ifndef COUNT_THE_NUMBER_OF_CONSISTENT_STRINGS_H_
#define COUNT_THE_NUMBER_OF_CONSISTENT_STRINGS_H_

#include <array>
#include <string>
#include <vector>

namespace solution {

int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
  // with array
  // Runtime: 40 ms, faster than 98.50% of C++ online submissions for Count the Number of Consistent Strings.
  // Memory Usage: 30.1 MB, less than 61.48% of C++ online submissions for Count the Number of Consistent Strings.
  //
  std::array<char, 26> a{};
  for (const auto& c : allowed) ++a[c - 'a'];

  auto count{0};
  for (const auto& word : words) {
    auto bad{false};
    for (const auto& c : word) {
      if (a[c - 'a'] == 0) {
        bad = true;
        break;
      }
    }
    count += bad == false;
  }
  return count;
}

}

#endif  // !COUNT_THE_NUMBER_OF_CONSISTENT_STRINGS_H_
