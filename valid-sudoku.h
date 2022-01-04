#ifndef VALID_SUDOKU_H_
#define VALID_SUDOKU_H_

#include <format>
#include <string>
#include <unordered_set>
#include <vector>

namespace solution {

bool isValidSudoku(std::vector<std::vector<char>>& board) {
  // stefan rocks
  // Runtime: 44 ms, faster than 8.88% of C++ online submissions for Valid Sudoku.
  // Memory Usage: 20 MB, less than 35.62% of C++ online submissions for Valid Sudoku.
  //
  std::unordered_set<std::string> set;

  for (size_t i = 0; i < board.size(); ++i) {
    for (size_t j = 0; j < board[i].size(); ++j) {
      if (board[i][j] != '.') {
        if (!set.insert(std::to_string(board[i][j]) + " in row " + std::to_string(i)).second ||
            !set.insert(std::to_string(board[i][j]) + " in column " + std::to_string(j)).second ||
            !set.insert(std::to_string(board[i][j]) + " in block " + std::to_string(i / 3) + "-" + std::to_string(j / 3)).second)
          return false;
      }
    }
  }
  return true;
}

}

#endif  // !VALID_SUDOKU_H_
