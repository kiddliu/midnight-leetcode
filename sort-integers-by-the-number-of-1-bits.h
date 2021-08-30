#ifndef SORT_INTEGERS_BY_THE_NUMBER_OF_1_BITS_H_
#define SORT_INTEGERS_BY_THE_NUMBER_OF_1_BITS_H_

#include <algorithm>
#include <bitset>
#include <vector>

namespace solution {

std::vector<int> sortByBits(std::vector<int>& arr) {
  // straight forward
  // Runtime: 8 ms, faster than 82.92% of C++ online submissions for Sort Integers by The Number of 1 Bits.
  // Memory Usage: 10.2 MB, less than 66.91% of C++ online submissions for Sort Integers by The Number of 1 Bits.
  //
  for (auto& i : arr) {
    i = (__builtin_popcount(i) << 14) + i;
  }
  std::sort(arr.begin(), arr.end());
  for (auto& i : arr) {
    i = i & 0x3fff;
  }
  return arr;
}

}

#endif  // SORT_INTEGERS_BY_THE_NUMBER_OF_1_BITS_H_
