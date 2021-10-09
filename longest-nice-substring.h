#ifndef LONGEST_NICE_SUBSTRING_H_
#define LONGEST_NICE_SUBSTRING_H_

#include <string>
#include <unordered_set>

namespace solution {

std::string longestNiceSubstring(std::string s) {
  // split the string by those not nice char and recusively find if it's nice
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Longest Nice Substring.
  // Memory Usage: 12.3 MB, less than 49.23% of C++ online submissions for Longest Nice Substring.
  //
  if (s.size() == 1) return "";
  std::unordered_set<char> set(s.cbegin(), s.cend());

  for (auto i = 0; i < s.size(); ++i) {
    if (set.count(std::tolower(s[i])) > 0 && set.count(std::toupper(s[i])) > 0) continue;

    std::string left = longestNiceSubstring(s.substr(0, i));
    std::string right = longestNiceSubstring(s.substr(i + 1));

    return left.size() >= right.size() ? left : right;
  }
  return s;
}

}

#endif  // !LONGEST_NICE_SUBSTRING_H_
