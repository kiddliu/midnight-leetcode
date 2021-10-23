#ifndef REMOVE_ONE_ELEMENT_TO_MAKE_THE_ARRAY_STRICTLY_INCREASING_H_
#define REMOVE_ONE_ELEMENT_TO_MAKE_THE_ARRAY_STRICTLY_INCREASING_H_

#include <vector>

namespace solution {

bool canBeIncreasing(std::vector<int>& nums) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove One Element to Make the Array Strictly Increasing.
  // Memory Usage: 10.1 MB, less than 22.93% of C++ online submissions for Remove One Element to Make the Array Strictly Increasing.
  //
  auto count{0};
  for (auto i = 1; i < nums.size(); ++i) {
    if (nums[i - 1] >= nums[i]) {
      ++count;
      if (i > 1 && nums[i - 2] >= nums[i]) {
        // do this assigning can make problem again of adjacent comparison again
        nums[i] = nums[i - 1];
      }
    }
    if (count == 2) return false;
  }
  return true;
}

}

#endif  // REMOVE_ONE_ELEMENT_TO_MAKE_THE_ARRAY_STRICTLY_INCREASING_H_
