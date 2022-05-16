#ifndef SHORTEST_PATH_IN_BINARY_MATRIX_H_
#define SHORTEST_PATH_IN_BINARY_MATRIX_H_

#include <array>
#include <queue>
#include <vector>

namespace solution {

int shortestPathBinaryMatrix(std::vector<std::vector<int>>& grid) {
  int m = grid.size(), n = grid[0].size();
  if (m == 1 && n == 1 && grid[0][0] == 0) return 1;
  if (grid[0][0] || grid[m - 1][n - 1]) return -1;
  grid[0][0] = -1;

  std::queue<std::pair<int, int>> cells;
  cells.push({0, 0});

  std::array<int, 9> directions{0, 1, 1, 0, -1, 1, -1, -1, 0};
  while (cells.size()) {
    for (int i = cells.size(); i > 0; --i) {
      auto& c = cells.front(); cells.pop();

      for (auto d{0}; d < 8; ++d) {
        auto x{c.first + directions[d]}, y{c.second + directions[d + 1]};

        if (x == m - 1 && y == n - 1) return 1 - grid[c.first][c.second];

        if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 0) {
          grid[x][y] = grid[c.first][c.second] - 1;
          cells.push({x, y});
        }
      }
    }
  }

  return -1;
}

}  // namespace solution

#endif  // !SHORTEST_PATH_IN_BINARY_MATRIX_H_
