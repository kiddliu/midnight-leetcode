#ifndef REVERSE_INTEGER_H_
#define REVERSE_INTEGER_H_

#include <limits>

namespace solution {

int reverse(int x) {
  // Push digits and check if overflow
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
  // Memory Usage: 5.9 MB, less than 27.50% of C++ online submissions for Reverse Integer.
  //
  long long result = 0;
  while (x != 0) {
    result *= 10ll;
    if (result > INT_MAX || result < INT_MIN) return 0;
    result += x % 10;
    x = x / 10;
  }
  return static_cast<int>(result);
}

}

#endif REVERSE_INTEGER_H_
