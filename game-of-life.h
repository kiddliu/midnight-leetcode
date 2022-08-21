#ifndef GAME_OF_LIFE_H_
#define GAME_OF_LIFE_H_

#include <vector>

namespace solution {

void gameOfLife(std::vector<std::vector<int>>& board) {
  // brute force && inplacing
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Game of Life.
  // Memory Usage: 6.9 MB, less than 60.71% of C++ online submissions for Game of Life.
  //
  int row = board.size(), col = board.front().size();

  for (auto i{0}; i < row; ++i) {
    for (auto j{0}; j < col; ++j) {
      auto count{0};

      auto r{std::min(row, i + 2)}, c{std::min(col, j + 2)};
      for (auto ii{std::max(0, i - 1)}; ii < r; ++ii) {
        for (auto jj{std::max(0, j - 1)}; jj < c; ++jj) {
          count += board[ii][jj] & 1;
        }
      }

      if (count == 3 || count - board[i][j] == 3) {
        board[i][j] |= 2;
      }
    }
  }

  for (auto i{0}; i < row; ++i) {
    for (auto j{0}; j < col; ++j) {
      board[i][j] >>= 1;
    }
  }
}

}

#endif  // !GAME_OF_LIFE_H_
