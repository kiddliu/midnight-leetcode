#ifndef MAXIMAL_SQUARE_H_
#define MAXIMAL_SQUARE_H_

#include <vector>

namespace solution {

int maximalSquare(std::vector<std::vector<char>>& matrix) {
  // hard to realize it's a dp and it only required 1-D dp
  // Runtime: 72 ms, faster than 88.34% of C++ online submissions for Maximal Square.
  // Memory Usage: 16.4 MB, less than 93.32% of C++ online submissions for Maximal Square.
  //
  int row = matrix.size(), col = matrix.front().size();
  std::vector<int> dp(col + 1);

  auto max{0}, previous{0};
  for (auto i{1}; i <= row; ++i) {
    for (auto j{1}; j <= row; ++j) {
      auto p = dp[j];
      if (matrix[i][j]) {
        dp[j] = std::min({previous, dp[j - 1], dp[j]}) + 1;
        max = std::max(max, dp[j]);
      } else {
        dp[j] = 0;
      }
      previous = p;
    }
  }
  return max * max;
}

}  // namespace solution

#endif  // MAXIMAL_SQUARE_H_
