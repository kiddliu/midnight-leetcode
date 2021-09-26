#ifndef LARGEST_SUBSTRING_BETWEEN_TWO_EQUAL_CHARACTERS_H_
#define LARGEST_SUBSTRING_BETWEEN_TWO_EQUAL_CHARACTERS_H_

#include <array>
#include <string>

namespace solution {

int maxLengthBetweenEqualCharacters(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Largest Substring Between Two Equal Characters.
  // Memory Usage: 6.3 MB, less than 85.47% of C++ online submissions for Largest Substring Between Two Equal Characters.
  //
  std::array<int, 26> a{0};
  auto max{-1};

  for (int i = 0; i < s.size(); ++i) {
    if (a[s[i] - 'a'] == 0) {
      a[s[i] - 'a'] = i + 1;
    } else {
      max = std::max(i - a[s[i] - 'a'], max);
    }
  }

  return max;
}

}

#endif  // !LARGEST_SUBSTRING_BETWEEN_TWO_EQUAL_CHARACTERS_H_
