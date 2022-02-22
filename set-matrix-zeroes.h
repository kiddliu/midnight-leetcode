#ifndef SET_MATRIX_ZEROES_H_
#define SET_MATRIX_ZEROES_H_

#include <vector>

namespace solution {

void setZeroes(std::vector<std::vector<int>>& matrix) {
  // with additional space
  // Runtime: 16 ms, faster than 72.52% of C++ online submissions for Set Matrix Zeroes.
  // Memory Usage: 13.3 MB, less than 19.62% of C++ online submissions for Set Matrix Zeroes.
  //
  std::vector<std::pair<int, int>> v;
  for (size_t i{0}; i < matrix.size(); ++i) {
    for (size_t j{0}; j < matrix[i].size(); ++j) {
      if (matrix[i][j] == 0) v.push_back({i, j});
    }
  }

  for (auto& p : v) {
    for (size_t j{0}; j < matrix[p.first].size(); ++j) {
      matrix[p.first][j] = 0;
    }
    for (size_t i{0}; i < matrix.size(); ++i) {
      matrix[i][p.second] = 0;
    }
  }
}

}

#endif  // !SET_MATRIX_ZEROES_H_
