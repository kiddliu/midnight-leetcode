#ifndef MATRIX_CELLS_IN_DISTANCE_ORDER_H_
#define MATRIX_CELLS_IN_DISTANCE_ORDER_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<std::vector<int>> allCellsDistOrder(int rows, int cols, int rCenter,
                                                int cCenter) {
  // it's not a graph problem, isn't it?
  // Runtime: 44 ms, faster than 67.35% of C++ online submissions for Matrix Cells in Distance Order.
  // Memory Usage: 16.3 MB, less than 92.58% of C++ online submissions for Matrix Cells in Distance Order.
  //
  std::vector<std::vector<int>> v;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      v.push_back({i, j});
    }
  }

  std::sort(
      v.begin(), v.end(),
      [rCenter, cCenter](const std::vector<int>& a, const std::vector<int>& b) {
        auto da = std::abs(a[0] - rCenter) + std::abs(a[1] - cCenter);
        auto db = std::abs(b[0] - rCenter) + std::abs(b[1] - cCenter);
        return da < db;
      });

  return v;
}

}  // namespace solution

#endif  // MATRIX_CELLS_IN_DISTANCE_ORDER_H_
