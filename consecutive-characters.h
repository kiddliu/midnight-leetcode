#ifndef CONSECUTIVE_CHARACTERS_H_
#define CONSECUTIVE_CHARACTERS_H_

#include <algorithm>
#include <array>
#include <string>

namespace solution {

int maxPower(std::string s) {
  // straight forward
  // Runtime: 3 ms, faster than 73.23% of C++ online submissions for Consecutive Characters.
  // Memory Usage: 6.7 MB, less than 73.34% of C++ online submissions for Consecutive Characters.
  //
  auto last{' '};
  auto count{0}, result{0};

  for (auto i = 0; i < s.size(); ++i) {
    if (s[i] == last) {
      ++count;
    } else {
      last = s[i];
      result = std::max(result, count);
      count = 1;
    }
  }

  return std::max(result, count);
}

}

#endif  // CONSECUTIVE_CHARACTERS_H_
