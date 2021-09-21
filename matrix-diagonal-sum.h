#ifndef MATRIX_DIAGONAL_SUM_H_
#define MATRIX_DIAGONAL_SUM_H_

#include <vector>

namespace solution {

int diagonalSum(std::vector<std::vector<int>>& mat) {
  // straight forward
  // Runtime: 8 ms, faster than 98.58% of C++ online submissions for Matrix Diagonal Sum.
  // Memory Usage: 11.2 MB, less than 91.98% of C++ online submissions for Matrix Diagonal Sum.
  //
  auto sum{0};
  for (auto i = 0; i < mat.size(); ++i) {
    sum += mat[i][i];
    if (i != mat[i].size() - 1 - i) sum += mat[i][mat[i].size() - 1 - i];
  }
  return sum;
}

}

#endif  // !MATRIX_DIAGONAL_SUM_H_
