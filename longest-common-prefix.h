#ifndef LONGEST_COMMON_PREFIX_H_
#define LONGEST_COMMON_PREFIX_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

std::string longestCommonPrefix(std::vector<std::string>& strs) {
  if (strs.size() == 0) return "";
  if (std::any_of(strs.cbegin(), strs.cend(),
                  [](const std::string& s) { return s.empty(); })) {
    return "";
  }

  // Vertical scanning
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Longest Common Prefix.
  // Memory Usage: 9 MB, less than 97.40% of C++ online submissions for Longest Common Prefix.
  //
  using SCI = std::string::const_iterator;
  std::vector<SCI> iters;
  std::transform(
    strs.cbegin() + 1,
    strs.cend(),
    std::back_inserter(iters),
    [](const std::string& s) { return s.cbegin(); }
  );

  std::string result;
  for (auto& c : strs[0]) {
    if (std::all_of(iters.cbegin(), iters.cend(), [c](const SCI& i) { return c == *i; })) {
      result.append({c});
      std::for_each(iters.begin(), iters.end(), [c](SCI& i) { ++i; });
    } else {
      break;
    }
  }

  return result;
}

}

#endif  // LONGEST_COMMON_PREFIX_H_
