#ifndef MAXIMUM_PRODUCT_OF_THREE_NUMBERS_H_
#define MAXIMUM_PRODUCT_OF_THREE_NUMBERS_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

int maximumProduct(std::vector<int>& nums) {
  // naive
  // Runtime: 36 ms, faster than 86.70% of C++ online submissions for Maximum Product of Three Numbers.
  // Memory Usage: 27.8 MB, less than 16.69% of C++ online submissions for Maximum Product of Three Numbers.
  //
  if (nums.size() == 3)
    return std::accumulate(nums.cbegin(), nums.cend(), 1,
                           std::multiplies<int>());

  std::sort(nums.begin(), nums.end());

  if (nums.front() > 0 || nums.back() < 0)
    return std::accumulate(nums.crbegin(), nums.crbegin() + 3, 1,
                           std::multiplies<int>());

  auto first2 = nums[0] * nums[1],
       last2 = nums[nums.size() - 2] * nums[nums.size() - 3];

  return nums.back() * std::max(first2, last2);
}

}

#endif  // MAXIMUM_PRODUCT_OF_THREE_NUMBERS_H_
