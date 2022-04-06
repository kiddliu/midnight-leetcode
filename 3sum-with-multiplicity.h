#ifndef THREE_SUM_WITH_MULTIPLICITY_H_
#define THREE_SUM_WITH_MULTIPLICITY_H_

#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace solution {

int threeSumMulti(std::vector<int>& nums, int target) {
  // 2 ptrs...
  // Runtime: 20 ms, faster than 79.25% of C++ online submissions for 3Sum With Multiplicity.
  // Memory Usage: 10.5 MB, less than 74.83% of C++ online submissions for 3Sum With Multiplicity.
  //
  std::unordered_map<int, int> map;
  for (auto n : nums) ++map[n];
  auto result = 0;
  for (auto& p1 : map)
    for (auto& p2 : map) {
      int i = p1.first, j = p2.first, k = target - i - j;
      if (!map.count(k)) continue;

      if (i == j && j == k)
        result += map[i] * (map[i] - 1) * (map[i] - 2) / 6;
      else if (i == j && j != k)
        result += map[i] * (map[i] - 1) / 2 * map[k];
      else if (i < j && j < k)
        result += map[i] * map[j] * map[k];
    }
  return result % 1000000007;
}

}

#endif  // !THREE_SUM_WITH_MULTIPLICITY_H_
