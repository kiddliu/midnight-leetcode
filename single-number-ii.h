#ifndef SINGLE_NUMBER_II_H_
#define SINGLE_NUMBER_II_H_

#include <vector>

namespace solution {

int singleNumber(std::vector<int>& nums) {
  // 有必要复习一下数字电路了
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Single Number II.
  // Memory Usage: 9.5 MB, less than 87.36% of C++ online submissions for Single Number II.
  //
  auto first{0}, second {0};

  for (auto& n : nums) {
    first = (first ^ n) & ~second;
    second = (second ^ n) & ~first;
  }
  return first;
}

}

#endif  // SINGLE_NUMBER_II_H_
