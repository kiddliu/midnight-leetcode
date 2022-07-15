#ifndef MAX_AREA_OF_ISLAND_H_
#define MAX_AREA_OF_ISLAND_H_

#include <array>
#include <deque>
#include <vector>

namespace solution {

int areaOfIsland(std::vector<std::vector<int>>& grid, int i, int j) {
  if (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() &&
      grid[i][j] == 1) {
    grid[i][j] = 0;
    return 1 + areaOfIsland(grid, i + 1, j) + areaOfIsland(grid, i - 1, j) +
           areaOfIsland(grid, i, j - 1) + areaOfIsland(grid, i, j + 1);
  }
  return 0;
}

int maxAreaOfIsland(std::vector<std::vector<int>>& grid) {
  // DFS
  // Runtime: 34 ms, faster than 41.28% of C++ online submissions for Max Area of Island.
  // Memory Usage: 23.2 MB, less than 67.07% of C++ online submissions for Max Area of Island.
  //
  int result{0}, row = grid.size(), col = grid[0].size();

  for (auto i{0}; i < row; ++i) {
    for (auto j{0}; j < col; ++j) {
      if (grid[i][j] == 1) {
        result = std::max(result, areaOfIsland(grid, i, j));
      }
    }
  }

  return result;
}

}

#endif  // !MAX_AREA_OF_ISLAND_H_
