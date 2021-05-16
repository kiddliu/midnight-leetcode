#ifndef POWER_OF_TWO_H_
#define POWER_OF_TWO_H_

namespace solution {

bool isPowerOfTwo(int n) {
  // brute force, power of 2 binary form has only 1 '1' bit, should use n & (n - 1)
  // Runtime: 4 ms, faster than 29.24% of C++ online submissions for Power of Two.
  // Memory Usage: 5.8 MB, less than 85.97% of C++ online submissions for Power of Two.
  // 
  if (n < 1) return false;

  while (n != 1) {
    if (n % 2 != 0) {
      return false;
    }
    n = n >> 1;
  }

  return true;
}

}

#endif  // POWER_OF_TWO_H_
