#ifndef BINARY_PREFIX_DIVISIBLE_BY_5_H_
#define BINARY_PREFIX_DIVISIBLE_BY_5_H_

#include <vector>

namespace solution {

std::vector<bool> prefixesDivBy5(std::vector<int>& nums) {
  // straight forward
  // Runtime: 8 ms, faster than 86.03% of C++ online submissions for Binary Prefix Divisible By 5.
  // Memory Usage: 14 MB, less than 45.01% of C++ online submissions for Binary Prefix Divisible By 5.
  //
  std::vector<bool> result;
  result.reserve(nums.size());

  auto decimal{0};
  for (size_t i = 0; i < nums.size(); ++i) {
    decimal = (decimal * 2 + nums[i]) % 5;
    result.push_back(decimal == 0);
  }
  return result;
}

}

#endif  // BINARY_PREFIX_DIVISIBLE_BY_5_H_
