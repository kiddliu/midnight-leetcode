#ifndef XOR_OPERATION_IN_AN_ARRAY_H_
#define XOR_OPERATION_IN_AN_ARRAY_H_

namespace solution {

int xorOperation(int n, int start) {
  // brute force, can use o(1) method by shifting right by 1, and divided by 4
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for XOR Operation in an Array.
  // Memory Usage: 6 MB, less than 18.90% of C++ online submissions for XOR Operation in an Array.
  //
  auto i{0}, result{0};
  while (i < n) {
    result ^= start + i * n;
  }
  return result;
}

}

#endif  // XOR_OPERATION_IN_AN_ARRAY_H_
