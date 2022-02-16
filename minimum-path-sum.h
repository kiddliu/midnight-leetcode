#ifndef MINIMUM_PATH_SUM_H_
#define MINIMUM_PATH_SUM_H_

#include <vector>

namespace solution {

int minPathSum(std::vector<std::vector<int>>& grid) {
  // exactly the same as unique-paths-ii
  // Runtime: 7 ms, faster than 92.07% of C++ online submissions for Minimum Path Sum.
  // Memory Usage: 9.7 MB, less than 86.95% of C++ online submissions for Minimum Path Sum.
  //
  for (auto i{1}; i < grid.size(); ++i) {
    grid[i][0] += grid[i - 1][0];
  }
  for (auto i{1}; i < grid[0].size(); ++i) {
    grid[0][i] += grid[0][i - 1];
  }

  for (auto i{1}; i < grid.size(); ++i) {
    for (auto j{1}; j < grid[0].size(); ++j) {
      grid[i][j] += std::min(grid[i - 1][j], grid[i][j - 1]);
    }
  }

  return grid[grid.size() - 1][grid[0].size() - 1];
}

}

#endif  // MINIMUM_PATH_SUM_H_
