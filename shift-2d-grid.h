#ifndef SHIFT_2D_GRID_H_
#define SHIFT_2D_GRID_H_

#include <vector>

namespace solution {

std::vector<std::vector<int>> shiftGrid(std::vector<std::vector<int>>& grid, int k) {
  k %= grid.size() * grid[0].size();
  auto shiftRow{k / grid[0].size()}, shiftColumn{k % grid[0].size()};
  
  if (shiftRow > 0) {
    std::rotate(grid.rbegin(), grid.rbegin() + shiftRow, grid.rend());
  }

  if (shiftColumn > 0) {
    for (auto& v : grid) {
      std::rotate(v.rbegin(), v.rbegin() + shiftColumn, v.rend());
    }
    for (size_t c = 0; c < shiftColumn; ++c) {
      for (size_t r = 1; r < grid.size(); ++r) {
        std::swap(grid[0][c], grid[r][c]);
      }
    }
  }

  return grid;
}


}

#endif  // SHIFT_2D_GRID_H_
