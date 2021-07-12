#ifndef NUMBER_OF_LINES_TO_WRITE_STRING_H_
#define NUMBER_OF_LINES_TO_WRITE_STRING_H_

#include <string>
#include <vector>

namespace solution {

std::vector<int> numberOfLines(std::vector<int>& widths, std::string s) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Lines To Write String.
  // Memory Usage: 6.9 MB, less than 78.10% of C++ online submissions for Number of Lines To Write String.
  //
  auto lineCount{1}, length{0};
  for (const auto& c : s) {
    if (length + widths[c - 'a'] > 100) {
      length = widths[c - 'a'];
      ++lineCount;
    } else {
      length += widths[c - 'a'];
    }
  }
  return std::vector<int>{lineCount, length};
}

}

#endif  // NUMBER_OF_LINES_TO_WRITE_STRING_H_
