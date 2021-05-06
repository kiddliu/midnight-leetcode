#ifndef REVERSE_BITS_H_
#define REVERSE_BITS_H_

#include <cstdint>

namespace solution {

uint32_t reverseBits(uint32_t n) {
  // Bit by bit
  // Runtime: 4 ms, faster than 51.37% of C++ online submissions for Reverse Bits.
  // Memory Usage: 5.9 MB, less than 77.22% of C++ online submissions for Reverse Bits.
  //
  uint32_t result{0};
  auto offset{32};
  while (offset-- > 0) {
    result = result << 1;
    result += n & 1;
    n = n >> 1;
  }
  return result;
}

}

#endif  // REVERSE_BITS_H_
