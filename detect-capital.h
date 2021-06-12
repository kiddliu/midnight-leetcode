#ifndef DETECT_CAPITAL_H_
#define DETECT_CAPITAL_H_

#include <algorithm>
#include <string>

namespace solution {

bool detectCapitalUse(std::string word) {
  // naive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Detect Capital.
  // Memory Usage: 6.1 MB, less than 5.67% of C++ online submissions for Detect Capital.
  //
  if (word.size() == 1) return true;

  auto p = word.cbegin(), e = word.cend();

  if (*p > 96 || *(p + 1) > 96) {
    return std::all_of(p + 1, e, [&word](const auto& c) { return c > 96; });
  }
  return std::all_of(p, e, [&word](const auto& c) { return c < 91; });
}

}

#endif  // DETECT_CAPITAL_H_
