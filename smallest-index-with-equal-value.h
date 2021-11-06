#ifndef SMALLEST_INDEX_WITH_EQUAL_VALUE_H_
#define SMALLEST_INDEX_WITH_EQUAL_VALUE_H_

#include <vector>

namespace solution {

int smallestEqual(std::vector<int>& nums) {
  // straight forward
  // Runtime: 4 ms, faster than 98.60% of C++ online submissions for Smallest Index With Equal Value.
  // Memory Usage: 21.9 MB, less than 98.57% of C++ online submissions for Smallest Index With Equal Value.
  //
  for (auto i = 0; i < nums.size(); ++i) {
    if (i % 10 == nums[i]) {
      return i;
    }
  }

  return -1;
}

}

#endif  // SMALLEST_INDEX_WITH_EQUAL_VALUE_H_
