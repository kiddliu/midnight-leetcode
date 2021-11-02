#ifndef MAXIMUM_DIFFERENCE_BETWEEN_INCREASING_ELEMENTS_H_
#define MAXIMUM_DIFFERENCE_BETWEEN_INCREASING_ELEMENTS_H_

#include <vector>

namespace solution {

int maximumDifference(std::vector<int>& nums) {
  // straight forward
  // Runtime: 4 ms, faster than 84.24% of C++ online submissions for Maximum Difference Between Increasing Elements.
  // Memory Usage: 8.3 MB, less than 41.82% of C++ online submissions for Maximum Difference Between Increasing Elements.
  //
  auto min{nums[0]}, result{-1};

  for (auto i = 1; i < nums.size(); ++i) {
    result = std::max(result, nums[i] - min);
    min = std::min(min, nums[i]);
  }
  return result == 0 ? -1 : result;
}

}

#endif  // MAXIMUM_DIFFERENCE_BETWEEN_INCREASING_ELEMENTS_H_
