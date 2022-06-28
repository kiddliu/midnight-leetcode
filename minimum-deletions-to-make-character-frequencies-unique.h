#ifndef MINIMUM_DELETIONS_TO_MAKE_CHARACTER_FREQUENCIES_UNIQUE_H_
#define MINIMUM_DELETIONS_TO_MAKE_CHARACTER_FREQUENCIES_UNIQUE_H_

#include <string>
#include <unordered_map>
#include <unordered_set>

namespace solution {

int minDeletions(std::string s) {
  // straight forward...
  // Runtime: 148 ms, faster than 26.47% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique.
  // Memory Usage: 17.4 MB, less than 37.41% of C++ online submissions for Minimum Deletions to Make Character Frequencies Unique.
  //
  std::unordered_map<char, int> frequencies;
  for (auto& c : s) {
    ++frequencies[c];
  }

  std::unordered_set<int> set;
  auto result{0};
  for (auto& [c, f] : frequencies) {
    while (f && set.count(f) != 0) {
      --f, ++result;
    }
    set.insert(f);
  }
  return result;
}

}  // namespace solution

#endif  // !MINIMUM_DELETIONS_TO_MAKE_CHARACTER_FREQUENCIES_UNIQUE_H_
