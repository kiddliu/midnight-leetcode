#ifndef SINGLE_NUMBER_H_
#define SINGLE_NUMBER_H_

#include <unordered_set>
#include <vector>

namespace solution {

int singleNumber(std::vector<int>& nums) {
  // XOR every element because A XOR A = 0, 0 XOR Z = Z
  // Runtime: 16 ms, faster than 83.42% of C++ online submissions for Single Number.
  // Memory Usage: 16.9 MB, less than 78.42% of C++ online submissions for Single Number.
  //
  auto result{0};
  for (auto& num : nums) {
    result ^= num;
  }
  return result;
}

}


#endif  // SINGLE_NUMBER_H_