#ifndef HAMMING_DISTANCE_H_
#define HAMMING_DISTANCE_H_

namespace solution {

int hammingDistance(int x, int y) {
  // naive solution, __builtin_popcount not work must have ABM instruction set
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Hamming Distance.
  // Memory Usage: 6 MB, less than 20.95% of C++ online submissions for Hamming Distance.
  //
  return __builtin_popcount(x ^ y);
}

}

#endif  // HAMMING_DISTANCE_H_
