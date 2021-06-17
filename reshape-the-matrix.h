#ifndef RESHAPE_THE_MATRIX_H_
#define RESHAPE_THE_MATRIX_H_

#include <initializer_list>
#include <vector>

namespace solution {

std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
  // naive
  // Runtime: 8 ms, faster than 94.09% of C++ online submissions for Reshape the Matrix.
  // Memory Usage: 11 MB, less than 35.23% of C++ online submissions for Reshape the Matrix.
  //
  if (mat.size() * mat[0].size() != r * c) return mat;

  std::vector<std::vector<int>> v;
  std::vector<int> t;
  for (size_t i = 0; i < mat.size(); ++i) {
    for (size_t j = 0; j < mat[0].size(); ++j) {
      t.push_back(mat[i][j]);

      if (t.size() == c) {
        v.push_back(std::move(t));
      }
    }
  }

  return v;
}

}

#endif  // RESHAPE_THE_MATRIX_H_
