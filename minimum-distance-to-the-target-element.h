#ifndef MINIMUM_DISTANCE_TO_THE_TARGET_ELEMENT_H_
#define MINIMUM_DISTANCE_TO_THE_TARGET_ELEMENT_H_

#include <vector>

namespace solution {

int getMinDistance(std::vector<int>& nums, int target, int start) {
  // straight forward
  // Runtime: 8 ms, faster than 48.44% of C++ online submissions for Minimum Distance to the Target Element.
  // Memory Usage: 9.6 MB, less than 75.37% of C++ online submissions for Minimum Distance to the Target Element.
  //
  if (nums[start] == target) return 0;

  auto diff{1};
  while (true) {
    if (start + diff < nums.size() && nums[start + diff] == target) return diff;
    if (start - diff > -1 && nums[start - diff] == target) return diff;
  }
  throw 1;
}

}

#endif  // MINIMUM_DISTANCE_TO_THE_TARGET_ELEMENT_H_
