#ifndef SPECIAL_ARRAY_WITH_X_ELEMENTS_GREATER_THAN_OR_EQUAL_X_H_
#define SPECIAL_ARRAY_WITH_X_ELEMENTS_GREATER_THAN_OR_EQUAL_X_H_

#include <algorithm>
#include <vector>

namespace solution {

int specialArray(std::vector<int>& nums) {
  // sort and compare the index with the partial array size
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Special Array With X Elements Greater Than or Equal X.
  // Memory Usage: 8.3 MB, less than 55.49% of C++ online submissions for Special Array With X Elements Greater Than or Equal X.
  //
  std::sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size() && (i == 0 || nums.size() - i > nums[i - 1]);
       ++i) {
    if (nums[i] != 0 && nums[i] >= nums.size() - i) {
      return nums.size() - i;
    }
  }
  return -1;
}

}

#endif  // !SPECIAL_ARRAY_WITH_X_ELEMENTS_GREATER_THAN_OR_EQUAL_X_H_
