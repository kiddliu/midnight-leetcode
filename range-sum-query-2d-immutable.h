#ifndef RANGE_SUM_QUERY_2D_IMMUTABLE_H_
#define RANGE_SUM_QUERY_2D_IMMUTABLE_H_

#include <vector>

namespace solution {

class NumMatrix {
 public:
  NumMatrix(std::vector<std::vector<int>>& matrix) {
    // geometry...
    // Runtime: 569 ms, faster than 59.23% of C++ online submissions for Range Sum Query 2D - Immutable.
    // Memory Usage: 148 MB, less than 48.14% of C++ online submissions for Range Sum Query 2D - Immutable.
    //
    int m = matrix.size(), n = matrix[0].size();
    sum_ = std::vector<std::vector<int>>(m + 1, std::vector<int>(n + 1));

    for (auto i{0}; i < m; ++i) {
      for (auto j{0}; j < n; ++j) {
        sum_[i + 1][j + 1] =
            sum_[i + 1][j] + sum_[i][j + 1] + matrix[i][j] - sum_[i][j];
      }
    }
  }

  int sumRegion(int row1, int col1, int row2, int col2) {
    return sum_[row2 + 1][col2 + 1] + sum_[row1][col1] -
           sum_[row2 + 1][col1] - sum_[row1][col2 + 1];
  }

 private:
  std::vector<std::vector<int>> sum_;
};

}  // namespace solution

#endif  // !RANGE_SUM_QUERY_2D_IMMUTABLE_H_
