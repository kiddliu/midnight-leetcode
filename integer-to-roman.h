#ifndef INTEGER_TO_ROMAN_H_
#define INTEGER_TO_ROMAN_H_

#include <algorithm>
#include <array>
#include <string>

namespace solution {

std::string intToRoman(int num) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Integer to Roman.
  // Memory Usage: 5.9 MB, less than 77.50% of C++ online submissions for Integer to Roman.
  //
  std::string result;

  std::array<char, 7> r{'I', 'V', 'X', 'L', 'C', 'D', 'M'};
  auto offset{0};
  while (num > 0) {
    std::string local;
    auto n{num % 10}, u{n % 5};
    switch (u) {
      case 0:
        if (n > 0) local.insert(0, 1, r[offset + 1]);
        break;
      case 1:
      case 2:
      case 3:
        local.append(u, r[offset]);
        if (n > 5) local.append(1, r[offset + 1]);
        break;
      case 4:
        local.append(1, r[offset]);
        local.insert(0, 1, n > 5 ? r[offset + 2] : r[offset + 1]);
        break;
    }
    result.append(local);
    num /= 10;
    offset += 2;
  }
  std::reverse(result.begin(), result.end());

  return result;
}

}  // namespace solution

#endif  // INTEGER_TO_ROMAN_H_
