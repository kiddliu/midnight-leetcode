#ifndef SMALLEST_STRING_WITH_SWAPS_H_
#define SMALLEST_STRING_WITH_SWAPS_H_\

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

int find_root(std::vector<int>& roots, int index) {
  return roots[index] < 0 ? index : roots[index] = find_root(roots, roots[index]);
}

std::string smallestStringWithSwaps(std::string s, std::vector<std::vector<int>>& pairs) {
  // union find
  // Runtime: 153 ms, faster than 93.23% of C++ online submissions for Smallest String With Swaps.
  // Memory Usage: 49.2 MB, less than 79.61% of C++ online submissions for Smallest String With Swaps.
  //
  std::vector<int> roots(s.size(), -1);

  for (auto& p : pairs) {
    auto r1{find_root(roots, p.front())}, r2{find_root(roots, p.back())};
    if (r1 != r2) roots[r2] = r1;
  }

  std::vector<std::vector<int>> groups(s.size());
  for (auto i{0}; i < s.size(); ++i) {
    groups[find_root(roots, i)].push_back(i);
  }
  for (auto& group : groups) {
    std::string string;
    for (auto& i : group) {
      string.push_back(s[i]);
    }
    std::sort(string.begin(), string.end());
    for (auto i{0}; i < group.size(); ++i) {
      s[group[i]] = string[i];
    }
  }
  return s;
}

}

#endif  // !SMALLEST_STRING_WITH_SWAPS_H_
