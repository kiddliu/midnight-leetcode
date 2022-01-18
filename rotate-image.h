#ifndef ROTATE_IMAGE_H_
#define ROTATE_IMAGE_H_

#include <algorithm>
#include <vector>

namespace solution {

void rotate(std::vector<std::vector<int>>& matrix) {
  // cannot use bit manipulation as the sign is hard to deal with
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate Image.
  // Memory Usage: 7.1 MB, less than 32.43% of C++ online submissions for Rotate Image.
  //
  if (matrix.size() == 1) return;

  int n = matrix.size();
  std::reverse(matrix.begin(), matrix.end());
  for (size_t i = 0; i < n; ++i) {
    for (size_t j = 0; j < i; ++j) {
      std::swap(matrix[i][j], matrix[j][i]);
    }
  }
}

}

#endif  // !ROTATE_IMAGE_H_
