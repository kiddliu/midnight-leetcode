#ifndef SINGLE_NUMBER_III_H_
#define SINGLE_NUMBER_III_H_

#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>

namespace solution {

std::vector<int> singleNumber(std::vector<int>& nums) {
  // whenever it comes with bit manipulation, you must realize that a number "equals" multple bits 
  // where you can begin to run multiple different actions
  // Runtime: 4 ms, faster than 98.64% of C++ online submissions for Single Number III.
  // Memory Usage: 9.9 MB, less than 93.37% of C++ online submissions for Single Number III.
  //
  if (nums.size() == 2) return nums;

  auto xor_sum = std::accumulate(nums.cbegin(), nums.cend(), 0, std::bit_xor<int>());
  auto last_bit = xor_sum == INT_MIN ? INT_MIN : xor_sum &= -xor_sum;

  std::vector<int> v(2);
  for (auto& n : nums) {
    if (n & last_bit) {
      v[0] ^= n;
    } else {
      v[1] ^= n;
    }
  }
  return v;
}

}

#endif  // SINGLE_NUMBER_III_H_
