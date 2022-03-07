#ifndef WORD_SEARCH_H_
#define WORD_SEARCH_H_

#include <string>
#include <unordered_set>
#include <vector>

namespace solution {

bool lookup(std::vector<std::vector<char>>& board, int i, int j,
            std::string& word, int offset = 0) {
  if (offset == word.size()) return true;
  if (i < 0 || i == board.size()) return false;
  if (j < 0 || j == board[i].size()) return false;
  if (board[i][j] != word[offset]) return false;
  
  board[i][j] = '#';
  auto result = lookup(board, i - 1, j, word, offset + 1) ||
                lookup(board, i + 1, j, word, offset + 1) ||
                lookup(board, i, j - 1, word, offset + 1) ||
                lookup(board, i, j + 1, word, offset + 1);
  board[i][j] = word[offset];
  return result;
}

bool exist(std::vector<std::vector<char>>& board, std::string word) {
  // DFS...
  // Runtime: 269 ms, faster than 86.44% of C++ online submissions for Word Search.
  // Memory Usage: 7.9 MB, less than 91.81% of C++ online submissions for Word Search.
  //
  for (auto i{0}; i < board.size(); ++i) {
    for (auto j{0}; j < board[i].size(); ++j) {
      if (lookup(board, i, j, word)) {
        return true;
      }
    }
  }

  return false;
}

}

#endif  // WORD_SEARCH_H_
