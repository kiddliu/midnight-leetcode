#ifndef NIM_GAME_H_
#define NIM_GAME_H_

namespace solution {

bool canWinNim(int n) { 
  // so obvious
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Nim Game.
  // Memory Usage: 5.9 MB, less than 9.31% of C++ online submissions for Nim Game.
  //
  return n % 4 != 0;
}

}

#endif  // NIM_GAME_H_
