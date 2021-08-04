#ifndef AVAILABLE_CAPTURES_FOR_ROOK_H_
#define AVAILABLE_CAPTURES_FOR_ROOK_H_

#include <vector>

namespace solution {

int numRookCaptures(std::vector<std::vector<char>>& board) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Available Captures for Rook.
  // Memory Usage: 6.8 MB, less than 70.73% of C++ online submissions for Available Captures for Rook.
  //
  for (int i = 0; i < board.size(); ++i) {
    for (int j = 0; j < board[i].size(); ++j) {
      if (board[i][j] == 'R') {
        auto line{i}, column{j}, result{0};
        while (--line > -1) {
          if (board[line][column] == 'B') {
            break;
          } else if (board[line][column] == 'p') {
            ++result;
            break;
          }
        }
        line = i, column = j;
        while (++line < board.size()) {
          if (board[line][column] == 'B') {
            break;
          } else if (board[line][column] == 'p') {
            ++result;
            break;
          }
        }
        line = i, column = j;
        while (--column > -1) {
          if (board[line][column] == 'B') {
            break;
          } else if (board[line][column] == 'p') {
            ++result;
            break;
          }
        }
        line = i, column = j;
        while (++column < board[i].size()) {
          if (board[line][column] == 'B') {
            break;
          } else if (board[line][column] == 'p') {
            ++result;
            break;
          }
        }

        return result;
      }
    }
  }
  return 0;
}

}

#endif  // AVAILABLE_CAPTURES_FOR_ROOK_H_
