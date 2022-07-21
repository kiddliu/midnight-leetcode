#ifndef NUMBER_OF_MATCHING_SUBSEQUENCES_H_
#define NUMBER_OF_MATCHING_SUBSEQUENCES_H_

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

int numMatchingSubseq(std::string s, std::vector<std::string>& words) {
  // reiterate the vector too much...
  // Runtime: 342 ms, faster than 56.68% of C++ online submissions for Number of Matching Subsequences.
  // Memory Usage: 48.1 MB, less than 62.91% of C++ online submissions for Number of Matching Subsequences.
  //
  int length = s.size(), size = words.size(), result{0};

  std::unordered_map<char, std::vector<int>> map;
  for (auto i{0}; i < length; ++i) {
    map[s[i]].push_back(i);
  }

  for (auto& word : words) {
    auto offset{-1};
    auto found{true};

    for (auto& c : word) {
      auto& v = map[c];
      auto p = std::upper_bound(v.begin(), v.end(), offset);
      if (p == v.end()) {
        found = false;
        break;
      } else {
        offset = *p;
      }
    }

    result += found;
  }

  return result;
}

}  // namespace solution

#endif  // !NUMBER_OF_MATCHING_SUBSEQUENCES_H_
