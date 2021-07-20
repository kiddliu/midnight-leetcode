#ifndef PROJECTION_AREA_OF_3D_SHAPES_H_
#define PROJECTION_AREA_OF_3D_SHAPES_H_

#include <vector>

namespace solution {

int projectionArea(std::vector<std::vector<int>>& grid) {
  // use the first line to record max Y, and get max X when traversing as usual
  // for Z just count non-zeros
  // Runtime: 4 ms, faster than 98.22% of C++ online submissions for Projection Area of 3D Shapes.
  // Memory Usage: 9.2 MB, less than 86.59% of C++ online submissions for Projection Area of 3D Shapes.
  //
  auto result{0};
  for (size_t i = 0; i < grid.size(); ++i) {
    auto max{-1};
    for (size_t j = 0; j < grid[i].size(); j++) {
      result += grid[i][j] != 0 ? 1 : 0;
      max = std::max(grid[i][j], max);
      if (i != 0) grid[0][j] = std::max(grid[i][j], grid[0][j]);
    }
    result += max;
  }
  for (size_t j = 0; j < grid[0].size(); j++) {
    result += grid[0][j];
  }
  return result;
}

}

#endif  // PROJECTION_AREA_OF_3D_SHAPES_H_
