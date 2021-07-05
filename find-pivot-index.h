#ifndef FIND_PIVOT_INDEX_H_
#define FIND_PIVOT_INDEX_H_

#include <numeric>
#include <vector>

namespace solution {

int pivotIndex(std::vector<int>& nums) {
  // naive
  // Runtime: 20 ms, faster than 82.73% of C++ online submissions for Find Pivot Index.
  // Memory Usage: 31 MB, less than 64.71% of C++ online submissions for Find Pivot Index.
  //
  if (nums.size() == 1) return 0;
  
  auto left{0}, right = std::accumulate(nums.cbegin() + 1, nums.cend(), 0);
  for (size_t i = 0; i < nums.size(); ++i) {
    if (left == right) return i;
    left += nums[i];
    right -= nums[i];
  }
  return -1;
}

}

#endif  // FIND_PIVOT_INDEX_H_
