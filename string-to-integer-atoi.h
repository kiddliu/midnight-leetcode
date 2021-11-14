#ifndef STRING_TO_INTEGER_ATOI_H_
#define STRING_TO_INTEGER_ATOI_H_

#include <string>

namespace solution {

int myAtoi(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for String to Integer (atoi).
  // Memory Usage: 6.9 MB, less than 87.61% of C++ online submissions for String to Integer (atoi).
  //
  if (s.size() == 0) return 0;

  auto n{LLONG_MAX};
  auto sign{1}, i{0};
  while (i < s.size() && s[i] == ' ') i++;

  if (s[i] == '-' || s[i] == '+') {
    sign = s[i] == '-' ? -1 : 1;
    ++i;
  }

  if (std::isdigit(s[i])) {
    n = s[i] - '0';
    ++i;
  } else {
    return 0;
  }

  while (i < s.size()) {
    if (std::isdigit(s[i])) {
      n = n * 10 + s[i++] - '0';
      if (n > INT_MAX) return sign ? INT_MAX : INT_MIN;
    } else {
      break;
    }
  }

  return static_cast<int>(n * sign);
}

}

#endif  // STRING_TO_INTEGER_ATOI_H_
