#ifndef MINIMUM_MOVES_TO_CONVERT_STRING_H_
#define MINIMUM_MOVES_TO_CONVERT_STRING_H_

#include <algorithm>
#include <string>
#include <unordered_set>

namespace solution {

int minimumMoves(std::string s) {
  // whenevet it comes with 'minimum', try greedy...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Moves to Convert String.
  // Memory Usage: 6.2 MB, less than 98.93% of C++ online submissions for Minimum Moves to Convert String.
  //
  auto result{0};

  for (auto i = 0; i < s.size() - 2;) {
    if (s[i] == 'O') {
      ++i;
    } else {
      ++result;
      i += 3;
    }
  }

  return result;
}

}

#endif  // MINIMUM_MOVES_TO_CONVERT_STRING_H_
