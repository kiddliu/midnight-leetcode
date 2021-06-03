#ifndef FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H_
#define FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H_

#include <vector>

namespace solution {

std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
  // in place sort
  // Runtime: 112 ms, faster than 14.63% of C++ online submissions for Find All Numbers Disappeared in an Array.
  // Memory Usage: 33.7 MB, less than 50.37% of C++ online submissions for Find All Numbers Disappeared in an Array.
  //
  size_t i = 0;

  while (i < nums.size()) {
    while (nums[nums[i] - 1] != nums[i]) {
      std::swap(nums[nums[i] - 1], nums[i]);
    }
    ++i;
  }

  std::vector<int> v{};
  for (size_t i = 0; i < nums.size(); i++) {
    if (nums[i] != i + 1) {
      v.push_back(i + 1);
    }
  }
  return std::move(v);
}

}

#endif  // FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H_
