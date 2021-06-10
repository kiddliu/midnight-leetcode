#ifndef BASE_7_H_
#define BASE_7_H_

#include <string>

namespace solution {

std::string convertToBase7(int num) {
  // modulo is not correct for negative numbers
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Base 7.
  // Memory Usage: 6 MB, less than 32.54% of C++ online submissions for Base 7.
  //
  if (num == 0) return "0";
  std::string r;

  auto n = num;
  if (n < 0) n = 0 - n;
  while (n != 0) {
    r.insert(0, 1, n % 7 + 48);
    n /= 7;
  }

  if (num < 0) {
    r.insert(0, 1, '-');
  }
  
  return r;
}

}

#endif  // BASE_7_H_
