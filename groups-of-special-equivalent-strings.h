#ifndef GROUPS_OF_SPECIAL_EQUIVALENT_STRINGS_H_
#define GROUPS_OF_SPECIAL_EQUIVALENT_STRINGS_H_

#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

namespace solution {

int numSpecialEquivGroups(std::vector<std::string>& words) {
  // should generate signature of each word into set to count individuals
  // Runtime: 28 ms, faster than 12.50% of C++ online submissions for Groups of Special-Equivalent Strings.
  // Memory Usage: 8.8 MB, less than 33.25% of C++ online submissions for Groups of Special-Equivalent Strings.
  //
  std::vector<std::string> v;
  std::transform(words.cbegin(), words.cend(), std::back_inserter(v), [](const auto& word) {
    std::string s1, s2;
    for (size_t i = 0; i < word.size(); ++i) {
      if (i % 2 == 0) {
        s1.append(1, word[i]);
      } else {
        s2.append(1, word[i]);
      }
    }
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 + "  " + s2;
  });

  auto count{0};
  for (size_t i = 0; i < v.size(); ++i) {
    if (!v[i].empty()) {
      ++count;
      for (size_t j = i + 1; j < v.size(); ++j) {
        if (v[i] == v[j]) {
          v[j].clear();
        }
      }
    }
  }
  return count;
}

}  // namespace solution

#endif  // GROUPS_OF_SPECIAL_EQUIVALENT_STRINGS_H_
