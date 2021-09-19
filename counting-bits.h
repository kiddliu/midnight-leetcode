#ifndef COUNTING_BITS_H_
#define COUNTING_BITS_H_

#include <vector>

namespace solution {

std::vector<int> countBits(int n) {
  // using __builtin
  // Runtime: 7 ms, faster than 35.46% of C++ online submissions for Counting Bits.
  // Memory Usage: 7.9 MB, less than 71.70% of C++ online submissions for Counting Bits.
  //
  std::vector<int> v;
  v.reserve(n + 1);

  auto i{0};
  while (i <= n) {
    v.push_back(__builtin_popcount(i++));
  }
  return v;
}

}

#endif  // COUNTING_BITS_H_
