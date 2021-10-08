#ifndef CHECK_IF_ARRAY_IS_SORTED_AND_ROTATED_H_
#define CHECK_IF_ARRAY_IS_SORTED_AND_ROTATED_H_

#include <vector>

namespace solution {

bool check(std::vector<int>& nums) {
  // straight forward
  // should count the only >=, otherwise it's false
  // Runtime: 4 ms, faster than 50.47% of C++ online submissions for Check if Array Is Sorted and Rotated.
  // Memory Usage: 8.5 MB, less than 11.55% of C++ online submissions for Check if Array Is Sorted and Rotated.
  //
  auto offset{0};
  while (true) {
    auto bound = offset + nums.size();
    while (++offset < bound) {
      if (nums[offset % nums.size()] < nums[(offset - 1) % nums.size()]) {
        break;
      }
    }
    if (offset == bound) {
      return true;
    } else if (offset >= nums.size()) {
      return false;
    }
  }

  return false;
}

}

#endif  // !CHECK_IF_ARRAY_IS_SORTED_AND_ROTATED_H_
