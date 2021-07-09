#ifndef TOEPLITZ_MATRIX_H_
#define TOEPLITZ_MATRIX_H_

#include <algorithm>
#include <unordered_map>
#include <vector>

namespace solution {

bool isToeplitzMatrix(std::vector<std::vector<int>>& matrix) {
  // why I came up with such a different idea with <algorithm>...
  // Runtime: 48 ms, faster than 6.53% of C++ online submissions for Toeplitz Matrix.
  // Memory Usage: 19.7 MB, less than 5.62% of C++ online submissions for Toeplitz Matrix.
  //
  if (matrix.size() == 1 || matrix[0].size() == 1) return true;

  std::unordered_map<int, std::vector<int>> m;
  for (size_t i = 0; i < matrix.size(); ++i) {
    for (size_t j = 0; j < matrix[0].size(); ++j) {
      m[j - i].push_back(matrix[i][j]);
    }
  }

  return std::all_of(m.cbegin(), m.cend(), [](const auto& p) {
    auto& v = p.second;
    return std::adjacent_find(v.cbegin(), v.cend(), std::not_equal_to<int>()) ==
           v.cend();
  });
}

}  // namespace solution

#endif  // TOEPLITZ_MATRIX_H_
