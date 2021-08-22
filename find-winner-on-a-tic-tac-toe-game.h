#ifndef FIND_WINNER_ON_A_TIC_TAC_TOE_GAME_H_
#define FIND_WINNER_ON_A_TIC_TAC_TOE_GAME_H_

#include <string>
#include <vector>

namespace solution {

bool check(char (&m)[3][3], char &&c) {
  for (size_t i = 0; i < 3; ++i) {
    if (m[i][0] == m[i][1] && m[i][0] == m[i][2] && m[i][0] == c) return true;
    if (m[0][i] == m[1][i] && m[0][i] == m[2][i] && m[0][i] == c) return true;
  }
  if (m[0][0] == m[1][1] && m[0][0] == m[2][2] && m[0][0] == c) return true;
  if (m[0][2] == m[1][1] && m[0][2] == m[2][0] && m[0][2] == c) return true;

  return false;
}

std::string tictactoe(std::vector<std::vector<int>>& moves) {
  // boring..
  // Runtime: 4 ms, faster than 47.43% of C++ online submissions for Find Winner on a Tic Tac Toe Game.
  // Memory Usage: 8.4 MB, less than 54.69% of C++ online submissions for Find Winner on a Tic Tac Toe Game.
  //
  if (moves.size() < 5) return "Pending";

  char m[3][3]{};
  for (size_t i = 0; i < moves.size(); ++i) {
    m[moves[i][0]][moves[i][1]] = i % 2 == 0 ? 'X' : 'O';
  }

  if (moves.size() % 2 == 1) {
    return check(m, 'X') ? "A" : (moves.size() == 9 ? "Draw" : "Pending");
  } else {
    return check(m, 'O') ? "B" : "Pending";
  }
}


}


#endif  // FIND_WINNER_ON_A_TIC_TAC_TOE_GAME_H_
