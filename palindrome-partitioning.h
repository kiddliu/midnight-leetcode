#ifndef PALINDROME_PARTITIONING_H_
#define PALINDROME_PARTITIONING_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

bool isPalindrome(std::string& s, size_t p1, size_t p2) {
  while (p1 < p2) {
    if (s[p1] != s[p2]) return false;
    ++p1, --p2;
  }

  return true;
}

std::vector<std::vector<std::string>> partition(
    std::string& s, size_t offset,
    std::unordered_map<size_t, std::vector<std::vector<std::string>>>& memo) {
  if (s.size() == 1) return {{s}};
  if (offset == s.size()) return {};

  std::vector<std::vector<std::string>> result;

  for (size_t i = offset; i < s.size(); ++i) {
    if (isPalindrome(s, offset, i)) {
      auto palindrome = s.substr(offset, i - offset + 1);

      if (memo.count(i + 1) == 0) {
        memo[i + 1] = partition(s, i + 1, memo);
      } 
      auto &partial = memo[i + 1];
      if (!partial.empty()) {
        for (auto& v : partial) {
          result.push_back({palindrome});
          result.back().insert(result.back().end(), v.begin(), v.end());
        }
      } else {
        result.push_back({palindrome});
      }
    }
  }

  return result;
}

std::vector<std::vector<std::string>> partition(std::string s) {
  // it's too late to construct the memo from zero
  // Runtime: 228 ms, faster than 20.47% of C++ online submissions for Palindrome Partitioning.
  // Memory Usage: 83.5 MB, less than 34.50% of C++ online submissions for Palindrome Partitioning.
  //
  std::unordered_map<size_t, std::vector<std::vector<std::string>>> memo;
  return partition(s, 0, memo);
}

}  // namespace solution

#endif  // PALINDROME_PARTITIONING_H_
