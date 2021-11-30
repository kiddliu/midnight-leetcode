#ifndef FOUR_SUM_H_
#define FOUR_SUM_H_

#include <algorithm>
#include <unordered_set>
#include <vector>

namespace solution {

std::vector<std::vector<int>> twoSum(std::vector<int>& nums, int start,
                                     int target) {
  std::vector<std::vector<int>> result;
  std::unordered_set<int> set;

  for (auto i = start; i < nums.size(); ++i) {
    if (result.empty() || result.back()[1] != nums[i]) {
      if (set.count(target - nums[i])) {
        result.push_back({nums[i], target - nums[i]});
      }
    }
    set.insert(nums[i]);
  }
  return result;
}

std::vector<std::vector<int>> kSum(std::vector<int>& nums, int k, int start,
                                   int target) {
  std::vector<std::vector<int>> result;
  if (nums.size() == start) return result;
  auto avg = start / k;
  if (nums[start] > avg || nums.back() < avg) return result;

  if (k == 2) return twoSum(nums, start, target);

  for (auto i = start; i < nums.size(); ++i) {
    if (i == start || nums[i - 1] != nums[i]) {
      for (auto& sub : kSum(nums, k - 1, i + 1, target - nums[i])) {
        std::vector<int> v;
        v.push_back(nums[i]);
        v.insert(v.cend(), sub.cbegin(), sub.cend());
        result.push_back(v);
      }
    }
  }

  return result;
}

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
  // recursive with kSum
  // Runtime: 72 ms, faster than 52.58% of C++ online submissions for 4Sum.
  // Memory Usage: 30.4 MB, less than 19.20% of C++ online submissions for 4Sum.
  //
  std::sort(nums.begin(), nums.end());
  return kSum(nums, 4, 0, target);
}

}  // namespace solution

#endif  // FOUR_SUM_H_
