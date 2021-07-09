#ifndef PRIME_NUMBER_OF_SET_BITS_IN_BINARY_REPRESENTATION_H_
#define PRIME_NUMBER_OF_SET_BITS_IN_BINARY_REPRESENTATION_H_

#include <algorithm>
#include <array>
#include <bitset>

namespace solution {

int countPrimeSetBits(int left, int right) {
  // find operation sometime can turn into bit AND operation 
  // Runtime: 8 ms, faster than 69.91% of C++ online submissions for Prime Number of Set Bits in Binary Representation.
  // Memory Usage: 5.9 MB, less than 47.34% of C++ online submissions for Prime Number of Set Bits in Binary Representation.
  //
  auto result{0};
  for (size_t i = left; i < right; ++i) {
    result += 665772 >> std::bitset<32>(i).count() & 1;
  }
  return result;
}

}

#endif  // PRIME_NUMBER_OF_SET_BITS_IN_BINARY_REPRESENTATION_H_
