#ifndef LONGEST_PALINDROME_H_
#define LONGEST_PALINDROME_H_

#include <algorithm>
#include <string>
#include <unordered_map>

namespace solution {

int longestPalindrome(std::string s) {
  // i need to focus on the problem pattern more
  // reading the number of odds, deduct from the size of the string and plus 1 would give the result
  // Runtime: 8 ms, faster than 6.51% of C++ online submissions for Longest Palindrome.
  // Memory Usage: 6.8 MB, less than 9.34% of C++ online submissions for Longest Palindrome.
  if (s.size() == 1) return 1;

  // for this part, use an array and let the char be the key would do the trick
  std::unordered_map<char, int> m;
  for (const auto& c : s) {
    if (m.find(c) != m.end()) {
      m[c] += 1;
    } else {
      m.insert({c, 1});
    }
  }
  if (m.size() == 1) return (*m.cbegin()).second;

  std::vector<int> v;
  for (const auto& p : m) {
    v.push_back(p.second);
  }
  std::sort(v.begin(), v.end(), std::greater<int>());

  // completely useless couting
  auto result{0};
  bool oddHandled{false};
  for (const auto& i : v) {
    if (i % 2 == 0) {
      result += i;
    } else {
      if (!oddHandled) {
        result += i;
        oddHandled = true;
      } else if (i > 1) {
        result += i - 1;
      } else {
        break;
      }
    }
  }
  return result;
}

}

#endif  // LONGEST_PALINDROME_H_
