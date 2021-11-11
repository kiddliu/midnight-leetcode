#ifndef LONGEST_PALINDROMIC_SUBSTRING_H_
#define LONGEST_PALINDROMIC_SUBSTRING_H_

#include <algorithm>
#include <string>
#include <unordered_map>

namespace solution {

bool isPalindrome(std::string& s) {
  size_t p1{0}, p2{s.size() - 1};
  while (p1 < p2) {
    if (s[p1] != s[p2]) return false;
    ++p1, --p2;
  }

  return true;
}

std::string longestPalindrome(std::string s) {
  // it's a DP problem, and I bruteforce it...
  // Runtime: 1324 ms, faster than 5.01% of C++ online submissions for Longest Palindromic Substring.
  // Memory Usage: 465.8 MB, less than 5.84% of C++ online submissions for Longest Palindromic Substring.
  //
  if (s.size() == 1) return s;
  if (s.size() == 2) return s[0] == s[1] ? s : s.substr(0, 1);

  std::unordered_map<char, std::vector<int>> map;
  for (auto i = 0; i < s.size(); ++i) {
    map[s[i]].push_back(i);
  }

  std::vector<std::pair<int, int>> v;
  for (auto& i : map) {
    auto& indices = i.second;
    if (indices.size() > 1) {
      for (auto i = 0; i < indices.size() - 1; ++i) {
        for (auto j = i + 1; j < indices.size(); ++j) {
          v.emplace_back(indices[i], indices[j]);
        }
      }
    }
  }

  std::sort(
      v.begin(), v.end(),
      [](const std::pair<int, int>& first, const std::pair<int, int>& second) {
        return first.second - first.first > second.second - second.first;
      });

  for (auto& i : v) {
    auto substr = s.substr(i.first, i.second - i.first + 1);
    if (isPalindrome(substr)) {
      return substr;
    }
  }
  throw "";
}

}  // namespace solution

#endif  // LONGEST_PALINDROMIC_SUBSTRING_H_
