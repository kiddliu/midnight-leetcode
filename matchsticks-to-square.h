#ifndef MATCHSTICKS_TO_SQUARE_H_
#define MATCHSTICKS_TO_SQUARE_H_

#include <algorithm>
#include <functional>
#include <numeric>
#include <unordered_map>
#include <vector>

namespace solution {

bool dp(std::vector<int>& matchsticks, std::vector<bool>& used, int edge, int sum, int offset, int formed) {
  if (formed == 3) return true;

  if (edge == sum) return dp(matchsticks, used, edge, 0, 0, formed + 1);

  for (auto i{offset}; i < matchsticks.size(); ++i) {
    auto new_sum{sum + matchsticks[i]};
    if (used[i] || new_sum > edge) continue;

    used[i] = true;
    if (dp(matchsticks, used, edge, new_sum, i + 1, formed)) return true;
    used[i] = false;
  }
  return false;
}

bool makesquare(std::vector<int>& matchsticks) {
  // did not expect it's a DP problem...
  // Runtime: 292 ms, faster than 58.01% of C++ online submissions for Matchsticks to Square.
  // Memory Usage: 10.2 MB, less than 48.02% of C++ online submissions for Matchsticks to Square.
  //
  if (matchsticks.size() < 4) return false;
  auto perimeter{std::accumulate(matchsticks.begin(), matchsticks.end(), 0)};
  if (perimeter % 4 != 0) return false;

  auto edge{perimeter / 4};
  std::sort(matchsticks.begin(), matchsticks.end(), std::greater<int>());
  if (matchsticks.front() > edge) return false;

  std::vector<bool> used(matchsticks.size());
  return dp(matchsticks, used, 0, edge, 0, 0, 0);
}

}

#endif  // !MATCHSTICKS_TO_SQUARE_H_
