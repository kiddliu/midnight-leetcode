#ifndef BINARY_NUMBER_WITH_ALTERNATING_BITS_H_
#define BINARY_NUMBER_WITH_ALTERNATING_BITS_H_

namespace solution {

bool hasAlternatingBits(int n) {
  // right shift twice to determine if everything except the first bit is the same
  // then minus 1 to determine if there's only a single bit
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Number with Alternating Bits.
  // Memory Usage: 5.9 MB, less than 21.96% of C++ online submissions for Binary Number with Alternating Bits.
  //
  return !((n ^= n >> 2) & n - 1); 
}

}

#endif  // BINARY_NUMBER_WITH_ALTERNATING_BITS_H_
