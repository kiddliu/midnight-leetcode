#ifndef ZIGZAG_CONVERSION_H_
#define ZIGZAG_CONVERSION_H_

#include <string>
#include <vector>

namespace solution {

std::string convert(std::string s, int numRows) {
  // straight forward
  // Runtime: 8 ms, faster than 86.91% of C++ online submissions for Zigzag Conversion.
  // Memory Usage: 10.7 MB, less than 48.04% of C++ online submissions for Zigzag Conversion.
  //
  if (s.size() <= numRows || numRows == 1) return s;

  std::vector<std::string> v(numRows);
  auto m{2 * numRows - 2}, offset{0};

  for (auto i = 0; i < s.size(); ++i) {
    offset = i % m;
    v[offset < numRows ? offset : m - offset].push_back(s[i]);
  }

  std::string result;

  for (auto& sub : v) {
    result.append(sub);
  }

  return result;
}

}

#endif  // ZIGZAG_CONVERSION_H_
