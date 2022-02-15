#ifndef UNIQUE_PATHS_II_H_
#define UNIQUE_PATHS_II_H_

#include <vector>

namespace solution {

int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
  // reuse the source grid
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths II.
  // Memory Usage: 7.6 MB, less than 86.72% of C++ online submissions for Unique Paths II.
  //
  if (obstacleGrid[0][0] == 1) return 0;
  obstacleGrid[0][0] = 1;

  for (auto i{1}; i < obstacleGrid.size(); ++i) {
    obstacleGrid[i][0] =
        (obstacleGrid[i][0] == 0 && obstacleGrid[i - 1][0] == 1) ? 1 : 0;
  }
  for (auto i{1}; i < obstacleGrid[0].size(); ++i) {
    obstacleGrid[0][i] =
        (obstacleGrid[0][i] == 0 && obstacleGrid[0][i - 1] == 1) ? 1 : 0;
  }

  for (auto i{1}; i < obstacleGrid.size(); ++i) {
    for (auto j{1}; j < obstacleGrid[0].size(); ++j) {
      if (obstacleGrid[i][j] == 0) {
        obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
      } else {
        obstacleGrid[i][j] = 0;
      }
    }
  }

  return obstacleGrid[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1];
}

}


#endif  // !UNIQUE_PATHS_II_H_
