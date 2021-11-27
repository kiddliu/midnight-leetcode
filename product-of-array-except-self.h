#ifndef PRODUCT_OF_ARRAY_EXCEPT_SELF_H_
#define PRODUCT_OF_ARRAY_EXCEPT_SELF_H_

#include <vector>

namespace solution {

std::vector<int> productExceptSelf(std::vector<int>& nums) {
  // straight forward...don't know why it's medium-level
  // Runtime: 28 ms, faster than 41.64% of C++ online submissions for Product of Array Except Self.
  // Memory Usage: 25 MB, less than 35.63% of C++ online submissions for Product of Array Except Self.
  //
  auto product{1};
  std::pair<int, int> zero{0, 0};
  for (auto i{0}; i < nums.size(); ++i) {
    if (nums[i] == 0) {
      if (zero.first == 0) {
        zero = {1, i};
      } else {
        return std::vector<int>(nums.size());
      }
    } else {
      product *= nums[i];
    }
  }


  if (zero.first == 1) {
    std::vector<int> result(nums.size());
    result[zero.second] = product;
    return result;
  } else {
    std::vector<int> result;
    for (auto& n : nums) {
      result.push_back(product / n);
    }
    return result;
  }
}

}

#endif  // PRODUCT_OF_ARRAY_EXCEPT_SELF_H_
