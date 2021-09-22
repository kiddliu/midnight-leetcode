#ifndef SPECIAL_POSITIONS_IN_A_BINARY_MATRIX_H_
#define SPECIAL_POSITIONS_IN_A_BINARY_MATRIX_H_

#include <vector>

namespace solution {

int numSpecial(std::vector<std::vector<int>>& mat) {
  // 2 passes, you can do it by one pass but you need trace back to your original answer and the solution become so complicated
  // Runtime: 16 ms, faster than 94.13% of C++ online submissions for Special Positions in a Binary Matrix.
  // Memory Usage: 13 MB, less than 57.46% of C++ online submissions for Special Positions in a Binary Matrix.
  //
  std::vector<int> rows(mat.size()), columns(mat[0].size());
  for (auto i = 0; i < mat.size(); ++i) {
    for (auto j = 0; j < mat[i].size(); ++j) {
      if (mat[i][j] == 1) {
        ++rows[i], ++columns[j];
      }
    }
  }

  auto result{0};
  for (auto i = 0; i < mat.size(); ++i) {
    for (auto j = 0; j < mat[i].size(); ++j) {
      if (mat[i][j] == 1 && rows[i] == 1 && columns[j] == 1) {
        ++result;
      }
    }
  }
  return result;
}

}

#endif  // !SPECIAL_POSITIONS_IN_A_BINARY_MATRIX_H_
