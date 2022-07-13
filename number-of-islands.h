#ifndef NUMBER_OF_ISLANDS_H_
#define NUMBER_OF_ISLANDS_H_

#include <deque>
#include <vector>

namespace solution {

int numIslands(std::vector<std::vector<char>>& grid) {
  // should use the loop trick to BFS the neighbors
  // Runtime: 50 ms, faster than 58.97% of C++ online submissions for Number of Islands.
  // Memory Usage: 18.2 MB, less than 16.15% of C++ online submissions for Number of Islands.
  //
  int result{0}, row = grid.size(), col = grid[0].size();

  for (auto i{0}; i < row; ++i) {
    for (auto j{0}; j < row; ++j) {
      if (grid[i][j] == '1') {
        ++result;

        std::deque<std::pair<int, int>> deque;
        deque.emplace_back(i, j);

        while (int size = deque.size()) {
          while (size--) {
            auto [r, c] = deque.front();
            grid[r][c] = 'x';

            if (r - 1 >= 0 && grid[r - 1][c] == '1')
              deque.emplace_back(r - 1, c);
            if (c - 1 >= 0 && grid[r][c - 1] == '1')
              deque.emplace_back(r, c - 1);
            if (r + 1 < row && grid[r + 1][c] == '1')
              deque.emplace_back(r + 1, c);
            if (c + 1 < col && grid[r][c + 1] == '1')
              deque.emplace_back(r, c + 1);

            deque.pop_front();
          }
        }
      }
    }
  }

  return result;
}

}  // namespace solution

#endif  // !NUMBER_OF_ISLANDS_H_
