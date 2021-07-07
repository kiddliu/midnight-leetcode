#ifndef MIN_COST_CLIMBING_STAIRS_H_
#define MIN_COST_CLIMBING_STAIRS_H_

#include <algorithm>
#include <unordered_map>
#include <vector>

namespace solution {

inline size_t key(int i, int j) { return (size_t)i << 32 | (unsigned int)j; }

int minCostClimbingStairs(std::vector<int>& cost, int start, int end,
                          std::unordered_map<size_t, int>& m) {
  auto k = key(start, end);
  if (m.find(k) != m.end()) return m[k];
  if (end - start < 3) {
    m[k] = cost[start];
    return cost[start];
  }

  auto r = std::min(minCostClimbingStairs(cost, start, end - 2, m) + cost[end - 2],
                    minCostClimbingStairs(cost, start, end - 1, m) + cost[end - 1]);
  m[k] = r;
  return r;
}

int minCostClimbingStairs(std::vector<int>& cost) {
  // unordered_map saves the day!!!
  // Runtime: 8 ms, faster than 63.28% of C++ online submissions for Min Cost Climbing Stairs.
  // Memory Usage: 17.8 MB, less than 5.05% of C++ online submissions for Min Cost Climbing Stairs.
  //
  std::unordered_map<size_t, int> m;

  auto r = std::min(minCostClimbingStairs(cost, 0, cost.size(), m),
                    minCostClimbingStairs(cost, 1, cost.size(), m));
  return r;
}

}  // namespace solution

#endif  // MIN_COST_CLIMBING_STAIRS_H_
