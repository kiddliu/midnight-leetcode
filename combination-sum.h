#ifndef COMBINATION_SUM_H_
#define COMBINATION_SUM_H_

#include <algorithm>
#include <deque>
#include <vector>

namespace solution {

std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates,
                                             int target) {
  // kind of backtracking
  // Runtime: 24 ms, faster than 35.04% of C++ online submissions for Combination Sum.
  // Memory Usage: 14.9 MB, less than 38.60% of C++ online submissions for Combination Sum.
  //
  std::sort(candidates.begin(), candidates.end());
  if (target < candidates.front()) return {};
  if (target == candidates.front()) return {{target}};

  std::vector<std::vector<int>> result;
  std::deque<std::pair<int, std::vector<int>>> deque;
  for (auto& candidate : candidates) {
    if (candidate < target) {
      deque.push_back({candidate, {candidate}});
    } else if (candidate == target) {
      result.push_back({candidate});
      break;
    }
  }

  while (!deque.empty()) {
    auto& p = deque.front();

    for (auto& candidate : candidates) {
      auto sum = p.first + candidate;
      if ((p.second.empty() || p.second.back() <= candidate) && sum <= target) {
        std::vector<int> v{p.second};
        v.push_back(candidate);

        if (sum < target) {
          deque.push_back({sum, v});
        } else {
          result.push_back(v);
        }
      }
    }
    deque.pop_front();
  }
  return result;
}

}  // namespace solution

#endif  // !COMBINATION_SUM_H_
