#ifndef THREE_SUM_H_
#define THREE_SUM_H_

#include <algorithm>
#include <unordered_map>
#include <set>
#include <vector>

namespace solution {

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
  // with map to do the lookup, but it seems slower than the bruteforcing
  // Runtime: 116 ms, faster than 41.68% of C++ online submissions for 3Sum.
  // Memory Usage: 27.8 MB, less than 19.94% of C++ online submissions for 3Sum.
  //
  std::vector<std::vector<int>> result;
  if (nums.size() < 3) return result;

  std::sort(nums.begin(), nums.end());
  if (nums.front() > 0 || nums.back() < 0) return result;

  std::unordered_map<int, int> s;
  for (auto& n : nums) {
    ++s[n];
  }

  int i = 0, j = nums.size() - 1;
  while (i < j) {
    auto first{nums[i]};
    j = nums.size() - 1;
    while (i < j) {
      auto second = nums[j];
      auto third = -first - second;

      if (third < first ||
          third == first && (s[third] < 2 || third == second && s[third] < 3))
        goto move;
      if (third > second || third == second && s[third] < 2) break;
      if (s[third] == 1) result.push_back({first, third, second});
    move:
      while (--j >= 0 && nums[j] == second) {
      }
    }
    while (++i <= nums.size() - 1 && nums[i] == first) {
    }
  }

  return result;
}

}  // namespace solution

#endif  // THREE_SUM_H_
