#ifndef ISLAND_PERIMETER_H_
#define ISLAND_PERIMETER_H_

#include <vector>

namespace solution {

int islandPerimeter(std::vector<std::vector<int>>& grid) {
  // deducting different pairs
  // Runtime: 100 ms, faster than 43.29% of C++ online submissions for Island Perimeter.
  // Memory Usage: 96.2 MB, less than 72.47% of C++ online submissions for Island Perimeter.
  //
  auto result{0};

  for (size_t i = 0; i < grid.size(); ++i) {
    for (size_t j = 0; j < grid[0].size(); j++) {
      if (grid[i][j] == 1) {
        result += 4;
        if (j + 1 < grid[0].size()) result -= grid[i][j + 1] == 1 ? 2 : 0;
        if (i + 1 < grid.size()) result -= grid[i + 1][j] == 1 ? 2 : 0;
      }
    }
  }

  return result;
}

}

#endif  // ISLAND_PERIMETER_H_
