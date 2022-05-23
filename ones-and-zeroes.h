#ifndef ONES_AND_ZEROES_H_
#define ONES_AND_ZEROES_H_

#include <string>
#include <vector>

namespace solution {

std::pair<int, int> count(std::string& str) {
  std::pair<int, int> result;

  for (auto& c : str) {
    if (c == '0') {
      ++result.first;
    } else {
      ++result.second;
    }
  }

  return result;
}

int findMaxForm(std::vector<std::string>& strs, int m, int n) {
  // DP...with iterative, optimized memory consumption
  // https://en.wikipedia.org/wiki/Knapsack_problem
  // Runtime: 293 ms, faster than 72.53% of C++ online submissions for Ones and Zeroes.
  // Memory Usage: 9.9 MB, less than 69.49% of C++ online submissions for Ones and Zeroes.
  //
  auto result{0};
  std::vector<std::vector<int>> memo(m + 1, std::vector<int>(n + 1));

  for (auto& str : strs) {
    auto w{count(str)};
    if (w.first > m || w.second > n) continue;

    for (auto i{m}; i >= w.first; --i) {
      for (auto j{n}; j >= w.second; --j) {
        memo[i][j] = std::max(memo[i][j], memo[i - w.first][j - w.second] + 1);
      }
    }
  }

  return memo[m][n];
}

}  // namespace solution

#endif  // ONES_AND_ZEROES_H_
