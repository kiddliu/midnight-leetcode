#ifndef KEYBOARD_ROW_H_
#define KEYBOARD_ROW_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

std::vector<std::string> findWords(std::vector<std::string>& words) {
  // XOR is perfect for diffing, my solution is naive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Keyboard Row.
  // Memory Usage: 6.9 MB, less than 58.77% of C++ online submissions for Keyboard Row.
  //
  int row[26]{2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3,
               3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3};

  std::vector<std::string> v;
  for (const auto& word : words) {
    auto first = word[0] > 96 ? word[0] - 97 : word[0] - 65;
    if (std::all_of(word.cbegin(), word.cend(), [&](const auto& c) {
          return row[first] == row[c > 96 ? c - 97 : c - 65];
    })) {
      v.push_back(word);
    }
  }
  return v;
}

}

#endif  // KEYBOARD_ROW_H_
