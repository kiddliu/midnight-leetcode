#ifndef TRANSPOSE_MATRIX_H_
#define TRANSPOSE_MATRIX_H_

#include <vector>

namespace solution {

std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& matrix) {
  // simple solution, can do this in place
  // Runtime: 16 ms, faster than 29.77% of C++ online submissions for Transpose Matrix.
  // Memory Usage: 10.5 MB, less than 94.22% of C++ online submissions for Transpose Matrix.
  //
  std::vector<std::vector<int>> result(matrix[0].size(),
                                       std::vector<int>(matrix.size(), 0));

  for (size_t i = 0; i < matrix.size(); ++i) {
    for (size_t j = 0; j < matrix[i].size(); ++j) {
      result[j][i] = matrix[i][j];
    }
  }
  return result;
}

}

#endif  // TRANSPOSE_MATRIX_H_
