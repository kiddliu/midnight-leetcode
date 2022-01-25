#ifndef SPIRAL_MATRIX_H_
#define SPIRAL_MATRIX_H_

#include <array>
#include <vector>

namespace solution {

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
  // the same idea used in walking robot on 2d plane
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Spiral Matrix.
  // Memory Usage: 6.9 MB, less than 29.02% of C++ online submissions for Spiral Matrix.
  //
  std::array<std::array<int, 2>, 4> directions{
      {{{0, 1}}, {{1, 0}}, {{0, -1}}, {{-1, 0}}}};

  std::array<int, 2> steps{static_cast<int>(matrix.size()),
                           static_cast<int>(matrix[0].size() - 1)};
  int x{0}, y{-1}, current_direction{0};
  std::vector<int> result;

  while (steps[current_direction % 2]) {
    for (auto i{0}; i < steps[current_direction % 2]; ++i) {
      x += directions[current_direction][0];
      y += directions[current_direction][1];
      result.push_back(matrix[x][y]);
    }
    steps[current_direction % 2]--;
    current_direction = (current_direction + 1) % 4;
  }

  return result;
}

}

#endif  // SPIRAL_MATRIX_H_
