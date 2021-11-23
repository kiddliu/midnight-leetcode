#ifndef THREE_SUM_CLOSEST_H_
#define THREE_SUM_CLOSEST_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

int threeSumClosest(std::vector<int>& nums, int target) {
  // naive
  // Runtime: 8 ms, faster than 83.14% of C++ online submissions for 3Sum Closest.
  // Memory Usage: 9.8 MB, less than 62.23% of C++ online submissions for 3Sum Closest.
  //
  if (nums.size() == 3) return std::accumulate(nums.begin(), nums.end(), 0);

  std::sort(nums.begin(), nums.end());

  std::pair<int, int> min{INT_MAX, INT_MAX};
  for (auto i = 0; i < nums.size() - 2; ++i) {
    for (auto j = i + 1; j < nums.size() - 1; ++j) {
      auto third = target - nums[i] - nums[j];
      auto begin = nums.cbegin() + j + 1;
      auto lower = std::lower_bound(begin, nums.cend(), third);

      if (lower == begin) {
        auto offset = *lower - third;
        if (offset < min.first) {
          min = {offset, target + offset};
        } else {
          break;
        }
      } else if (lower == nums.cend()) {
        auto offset = third - *(lower - 1);
        if (offset < min.first) {
          min = {offset, target - offset};
        } else if (std::accumulate(nums.crbegin(), nums.crbegin() + 2, 0) <
                   target) {
          break;
        }
      } else {
        auto offset1 = *lower - third;
        if (offset1 == 0) return target;

        auto offset2 = third - *(lower - 1);
        if (offset1 > offset2) {
          if (offset2 < min.first) min = {offset2, target - offset2};
        } else {
          if (offset1 < min.first) min = {offset1, target + offset1};
        }
      }
    }
  }

  return min.second;
}  // namespace solution

#endif  // THREE_SUM_CLOSEST_H_
