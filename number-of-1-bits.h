#ifndef NUMBER_OF_1_BITS_H_
#define NUMBER_OF_1_BITS_H_

#include <cstdint>

namespace solution {

int hammingWeight(uint32_t n) {
  // Brute force
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of 1 Bits.
  // Memory Usage: 6 MB, less than 40.83% of C++ online submissions for Number of 1 Bits.
  //
  auto result{0};
  while (n != 0) {
    result += n & 1;
    n = n >> 1;
  }
  return result;
}

}

#endif  // NUMBER_OF_1_BITS_H_
