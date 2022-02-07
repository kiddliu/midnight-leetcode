#ifndef SPIRAL_MATRIX_II_H_
#define SPIRAL_MATRIX_II_H_

#include <array>
#include <vector>

namespace solution {

std::vector<std::vector<int>> generateMatrix(int n) {
  // pretty much the same
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Spiral Matrix II.
  // Memory Usage: 6.6 MB, less than 63.80% of C++ online submissions for Spiral Matrix II.
  //
  if (n == 1) return {{1}};

  std::vector<std::vector<int>> result(n, std::vector<int>(n));
  std::array<std::array<int, 2>, 4> directions{
      {{{0, 1}}, {{1, 0}}, {{0, -1}}, {{-1, 0}}}};

  std::array<int, 2> steps{n, n - 1};
  int x{0}, y{-1}, value{0}, current_direction{0};

  while (steps[current_direction % 2]) {
    for (auto i{0}; i < steps[current_direction % 2]; ++i) {
      x += directions[current_direction][0];
      y += directions[current_direction][1];
      result[x][y] = ++value;
    }
    steps[current_direction % 2]--;
    current_direction = (current_direction + 1) % 4;
  }

  return result;
}

}

#endif  // !SPIRAL_MATRIX_II_H_
