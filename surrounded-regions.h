#ifndef SURROUNDED_REGIONS_H_
#define SURROUNDED_REGIONS_H_

#include <array>
#include <stack>
#include <vector>

namespace solution {

void solve(std::vector<std::vector<char>>& board) {
  // reference issue...
  // Runtime: 14 ms, faster than 76.64% of C++ online submissions for Surrounded Regions.
  // Memory Usage: 10 MB, less than 53.24% of C++ online submissions for Surrounded Regions.
  //
  int m = board.size() - 1, n = board[0].size() - 1;
  std::array<int, 5> dir{0, 1, 0, -1, 0};

  std::stack<std::pair<int, int>> s;
  for (auto row{0}; row <= m; ++row) {
    for (auto col{0}; col <= n; ++col) {
      if ((row == 0 || row == m || col == 0 || col == n) &&
          board[row][col] == 'O') {
        board[row][col] = 'B';
        s.push({row, col});

        while (!s.empty()) {
          auto [r, c] = s.top();
          s.pop();

          for (auto i{0}; i < 4; ++i) {
            auto nr{r + dir[i]}, nc{c + dir[i + 1]};
            if (nr >= 0 && nr < m && nc >= 0 && nc < n &&
                board[nr][nc] == 'O') {
              board[nr][nc] = 'B';
              s.push({nr, nc});
            }
          }
        }
      }
    }
  }

  for (auto row{0}; row <= m; ++row) {
    for (auto col{0}; col <= n; ++col) {
      board[row][col] = board[row][col] == 'B' ? 'O' : 'X';
    }
  }
}

}  // namespace solution

#endif  // SURROUNDED_REGIONS_H_
