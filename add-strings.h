#ifndef ADD_STRINGS_H_
#define ADD_STRINGS_H_

#include <string>

namespace solution {

std::string addStrings(std::string num1, std::string num2) {
  // naive, don't know why it takes 20ms as it's quite similar to the 0ms solutions
  // possibly due to the extention of the underlying string container
  // Runtime: 20 ms, faster than 14.27% of C++ online submissions for Add Strings.
  // Memory Usage: 6.8 MB, less than 50.54% of C++ online submissions for Add Strings.
  //
  auto l = std::move(num1.size() >= num2.size() ? num1 : num2);
  auto s = std::move(num1.size() > 0 ? num1 : num2);
  auto p1 = l.crbegin(), e1 = l.crend(),
       p2 = s.crbegin(), e2 = s.crend();
  auto carry{0};

  std::string result;
  while (p1 != e1) {
    auto n = *p1 - '0';
    if (p2 != e2) n += *p2 - '0';
    n += carry;
    if (n > 9) {
      n -= 10;
      carry = 1;
    } else {
      carry = 0;
    }
    result.insert(0, 1, n + '0');
    ++p1;
    if (p2 != e2) ++p2;
  }

  if (carry) {
    result.insert(0, 1, '1');
  }
  return result;
}

}

#endif  // ADD_STRINGS_H_
