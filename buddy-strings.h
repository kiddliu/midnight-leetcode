#ifndef BUDDY_STRINGS_H_
#define BUDDY_STRINGS_H_

#include <algorithm>
#include <string>

namespace solution {

bool buddyStrings(std::string s, std::string goal) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Buddy Strings.
  // Memory Usage: 7.2 MB, less than 8.46% of C++ online submissions for Buddy Strings.
  //
  if (s.size() != goal.size() || s.size() == 1) return false;
  if (s == goal)
    return std::any_of(s.cbegin(), s.cend(), [s](const auto& c) {
      return std::count(s.cbegin(), s.cend(), c) >= 2;
    });

  auto count{0};
  auto good{false};
  char c1{}, c2{};
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] != goal[i]) {
      if (count == 2) return false;
      if (count == 1 && c1 == goal[i] && c2 == s[i]) good = true;
      if (count == 0) c1 = s[i], c2 = goal[i];
      ++count;
    }
  }
  return good;
}

}  // namespace solution

#endif  // BUDDY_STRINGS_H_
