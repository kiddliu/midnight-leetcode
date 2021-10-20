#ifndef SUBSTRINGS_OF_SIZE_THREE_WITH_DISTINCT_CHARACTERS_H_
#define SUBSTRINGS_OF_SIZE_THREE_WITH_DISTINCT_CHARACTERS_H_

#include <string>
#include <unordered_set>

namespace solution {

int countGoodSubstrings(std::string s) {
  // brute force
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Substrings of Size Three with Distinct Characters.
  // Memory Usage: 6.2 MB, less than 43.78% of C++ online submissions for Substrings of Size Three with Distinct Characters.
  // 
  if (s.size() < 3) return 0;
  auto count{0};

  for (auto i = 0; i < s.size() - 2; ++i) {
    count += s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2];
  }

  return count;
}

}

#endif  // SUBSTRINGS_OF_SIZE_THREE_WITH_DISTINCT_CHARACTERS_H_
