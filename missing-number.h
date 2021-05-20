#ifndef MISSING_NUMBER_H_
#define MISSING_NUMBER_H_

#include <numeric>
#include <vector>

namespace solution {

int missingNumber(std::vector<int>& nums) {
  // Gauss' algorithm
  // Runtime: 28 ms, faster than 9.33% of C++ online submissions for Missing Number.
  // Memory Usage: 18 MB, less than 56.25% of C++ online submissions for Missing Number.
  //
  return nums.size() * (nums.size() + 1) / 2 - std::accumulate(nums.cbegin(), nums.cend(), 0);

  // I know I should use XOR, but forget the input of indexes
  // Runtime: 16 ms, faster than 78.04% of C++ online submissions for Missing Number.
  // Memory Usage: 17.9 MB, less than 56.25% of C++ online submissions for Missing Number.
  auto result = nums.size();
  for (int i = 0; i < nums.size(); ++i) {
    result ^= i ^ nums[i];
  }

  return result;
}

}

#endif  // MISSING_NUMBER_H_
