#ifndef SURFACE_AREA_OF_3D_SHAPES_H_
#define SURFACE_AREA_OF_3D_SHAPES_H_

#include <vector>

namespace solution {

int surfaceArea(std::vector<std::vector<int>>& grid) {
  // the surface of a tower is 4v + 2, just substract the connected part of adjacent towers 
  // Runtime: 60 ms, faster than 6.33% of C++ online submissions for Surface Area of 3D Shapes.
  // Memory Usage: 9.5 MB, less than 6.07% of C++ online submissions for Surface Area of 3D Shapes.
  //
  for (auto& row : grid) {
    row.insert(row.begin(), 0);
    row.push_back(0);
  }
  grid.insert(grid.begin(), std::vector<int>(grid[0].size(), 0));
  grid.emplace_back(grid[0].size(), 0);

  auto result{0};
  for (size_t i = 1; i < grid.size() - 1; ++i) {
    for (size_t j = 1; j < grid[i].size() - 1; ++j) {
      if (grid[i][j] > 0) result += 2;
    }
  }

  auto nonZero{true};
  do {
    for (size_t i = 1; i < grid.size() - 1; ++i) {
      for (size_t j = 1; j < grid[i].size() - 1; ++j) {
        if (grid[i][j] != 0) {
          if (grid[i][j - 1] == 0) ++result;
          if (grid[i][j + 1] == 0) ++result;
          if (grid[i - 1][j] == 0) ++result;
          if (grid[i + 1][j] == 0) ++result;
        }
      }
    }

    nonZero = false;
    for (size_t i = 1; i < grid.size() - 1; ++i) {
      for (size_t j = 1; j < grid[i].size() - 1; ++j) {
        if (grid[i][j] > 0) --grid[i][j];
        if (grid[i][j] > 0) nonZero = true;
      }
    }
  } while (nonZero);

  return result;
}

}

#endif  // SURFACE_AREA_OF_3D_SHAPES_H_
