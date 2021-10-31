#ifndef FIND_THE_MIDDLE_INDEX_IN_ARRAY_H_
#define FIND_THE_MIDDLE_INDEX_IN_ARRAY_H_

#include <numeric>
#include <vector>

namespace solution {

int findMiddleIndex(std::vector<int>& nums) {
  // straight forward
  // Runtime: 3 ms, faster than 85.48% of C++ online submissions for Find the Middle Index in Array.
  // Memory Usage: 12.4 MB, less than 72.77% of C++ online submissions for Find the Middle Index in Array.
  //
  auto sum{std::accumulate(nums.cbegin(), nums.cend(), 0)};

  auto i{0}, left{0}, right{sum - nums[i]};
  while (left != right) {
    left += nums[i++];
    if (i == nums.size()) break;
    right -= nums[i];
  }

  return i < nums.size() ? i : -1;
}

}

#endif  // FIND_THE_MIDDLE_INDEX_IN_ARRAY_H_
