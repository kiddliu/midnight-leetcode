#ifndef MAXIMUM_XOR_OF_TWO_NUMBERS_IN_AN_ARRAY_H_
#define MAXIMUM_XOR_OF_TWO_NUMBERS_IN_AN_ARRAY_H_

#include <unordered_set>
#include <vector>

namespace solution {

int findMaximumXOR(std::vector<int>& nums) {
  // i have to admit that i'm dumb
  // Runtime: 424 ms, faster than 45.95% of C++ online submissions for Maximum XOR of Two Numbers in an Array.
  // Memory Usage: 74.5 MB, less than 53.05% of C++ online submissions for Maximum XOR of Two Numbers in an Array.
  //
  auto result{0};
  std::unordered_set<int> pre;
  for (int i = 31; i >= 0; i--) {
    result <<= 1;
    pre.clear();
    for (auto n : nums) pre.insert(n >> i);
    for (auto p : pre)
      if (pre.count((result ^ 1) ^ p)) {
        result++;
        break;
      }
  }
  return result;
}

}

#endif  // !MAXIMUM_XOR_OF_TWO_NUMBERS_IN_AN_ARRAY_H_
