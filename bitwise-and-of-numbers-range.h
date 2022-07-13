#ifndef BITWISE_AND_OF_NUMBERS_RANGE_H_
#define BITWISE_AND_OF_NUMBERS_RANGE_H_

#include <bitset>
#include <cmath>

namespace solution {

int rangeBitwiseAnd(int left, int right) {
  // damn...
  // Runtime: 12 ms, faster than 78.19% of C++ online submissions for Bitwise AND of Numbers Range.
  // Memory Usage: 5.8 MB, less than 95.91% of C++ online submissions for Bitwise AND of Numbers Range.
  //
  return right > left ? rangeBitwiseAnd(left >> 1, right >> 1) << 1 : left;
}

}

#endif
