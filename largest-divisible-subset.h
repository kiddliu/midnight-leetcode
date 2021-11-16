#ifndef LARGEST_DIVISIBLE_SUBSET_H_
#define LARGEST_DIVISIBLE_SUBSET_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<int> largestDivisibleSubset(std::vector<int>& nums) {
  // please, be patient
  // Runtime: 32 ms, faster than 97.20% of C++ online submissions for Largest Divisible Subset.
  // Memory Usage: 9.2 MB, less than 24.89% of C++ online submissions for Largest Divisible Subset.
  //
  if (nums.size() == 1) return nums;

  std::sort(nums.begin(), nums.end());

  std::vector<int> prev;
  std::vector<int> length;
  std::pair<int, int> max{-1, 0};
  for (auto i = 0; i < nums.size(); ++i) {
    if (prev.empty()) {
      prev.push_back(-1);
      length.push_back(1);
      max = {i, 1};
      continue;
    }

    std::pair<int, int> local_max{-1, 0};
    for (int j = i - 1; j >= 0; --j) {
      if (nums[i] % nums[j] == 0) {
        if (local_max.first == -1 || length[j] > local_max.second) {
          local_max = {j, length[j]};
        }
      }
    }
    if (local_max.first != -1) {
      prev.push_back(local_max.first);
      auto l = local_max.second + 1;
      length.push_back(l);
      if (l > max.second) {
        max = {i, l};
      }
    } else {
      prev.push_back(-1);
      length.push_back(1);
    }
  }

  std::vector<int> result;
  while (max.first != -1) {
    result.push_back(nums[max.first]);
    max.first = prev[max.first];
  }

  return result;
}

}

#endif  // LARGEST_DIVISIBLE_SUBSET_H_
