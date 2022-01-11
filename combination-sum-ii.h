#ifndef COMBINATION_SUM_II_H_
#define COMBINATION_SUM_II_H_

#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<std::vector<int>> combinationSum2(
    std::vector<int>& candidates, int target, int offset,
    std::unordered_map<int, std::vector<std::vector<int>>>&
        memo) {
  if (offset == candidates.size() || target < 0 ||
      std::accumulate(candidates.begin() + offset, candidates.end(), 0) <
          target)
    return {};

  auto key = (target << 8) + offset + 1;
  if (memo.count(key) == 0) {
    memo[key] = combinationSum2(candidates, target, offset + 1, memo);
  }
  auto first{memo[key]};

  if (candidates[offset] <= target) {
    key = ((target - candidates[offset]) << 8) + offset + 1;
    if (memo.count(key) == 0) {
      memo[key] = combinationSum2(candidates, target - candidates[offset],
                                  offset + 1, memo);
    }
    auto second{memo[key]};
    if (second.empty()) {
      if (candidates[offset] == target) {
        second.push_back({target});
      }
    } else {
      for (auto& v : second) {
        v.push_back(candidates[offset]);
      }
    }
    first.insert(first.end(), second.begin(), second.end());
  }
  return first;
}

std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates,
                                              int target) {
  std::unordered_map<int, std::vector<std::vector<int>>> memo;
  auto result = combinationSum2(candidates, target, 0, memo);
  for (auto& v : result) {
    std::sort(v.begin(), v.end());
  }
  std::sort(result.begin(), result.end());
  result.erase(std::unique(result.begin(), result.end()), result.end());
  return result;
}

}  // namespace solution

#endif  // !COMBINATION_SUM_II_H_
