#ifndef ARITHMETIC_SLICES_H_
#define ARITHMETIC_SLICES_H_

#include <vector>

namespace solution {

int count(int c) {
  auto result{0};
  for (auto i{3}; i <= c; i++) {
    result += c - i + 1;
  }
  return result;
}

int numberOfArithmeticSlices(std::vector<int>& nums) {
  // sliding window...
  // Runtime: 3 ms, faster than 66.63% of C++ online submissions for Arithmetic Slices.
  // Memory Usage: 7.2 MB, less than 88.02% of C++ online submissions for Arithmetic Slices.
  //
  if (nums.size() < 3) return 0;
  auto result{0}, c{2}, diff{nums[1] - nums[0]};

  for (auto i{2}; i < nums.size(); ++i) {
    if (diff == nums[i] - nums[i - 1]) {
      ++c;
    } else {
      result += count(c);
      c = 2;
      diff = nums[i] - nums[i - 1];
    }
  }
  result += count(c);
  return result;
}

}

#endif  // ARITHMETIC_SLICES_H_
