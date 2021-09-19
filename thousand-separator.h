#ifndef THOUSAND_SEPARATOR_H_
#define THOUSAND_SEPARATOR_H_

#include <string>

namespace solution {

std::string thousandSeparator(int n) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Thousand Separator.
  // Memory Usage: 6 MB, less than 57.89% of C++ online submissions for Thousand Separator.
  //
  if (n == 0) return "0";

  std::string s;
  auto counter{0};
  while (n > 0) {
    if (counter > 0 && counter % 3 == 0) s.insert(0, 1, '.');
    s.insert(0, 1, (n % 10) + '0'), n /= 10;
    ++counter;
  }

  return s;
}

}

#endif  // !THOUSAND_SEPARATOR_H_
