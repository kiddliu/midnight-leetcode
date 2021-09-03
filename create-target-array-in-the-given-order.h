#ifndef CREATE_TARGET_ARRAY_IN_THE_GIVEN_ORDER_H_
#define CREATE_TARGET_ARRAY_IN_THE_GIVEN_ORDER_H_

#include <vector>

namespace solution {

std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index) {
  // why not STL?
  // Runtime: 4 ms, faster than 49.17% of C++ online submissions for Create Target Array in the Given Order.
  // Memory Usage: 8.5 MB, less than 61.44% of C++ online submissions for Create Target Array in the Given Order.
  //
  std::vector<int> result;

  for (size_t i = 0; i < nums.size(); ++i) {
    result.insert(nums.begin() + index[i], nums[i]);
  }

  return result;
}

}


#endif  // CREATE_TARGET_ARRAY_IN_THE_GIVEN_ORDER_H_
