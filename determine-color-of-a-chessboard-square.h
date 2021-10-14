#ifndef DETERMINE_COLOR_OF_A_CHESSBOARD_SQUARE_H_
#define DETERMINE_COLOR_OF_A_CHESSBOARD_SQUARE_H_

#include <string>

namespace solution {

bool squareIsWhite(std::string coordinates) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Determine Color of a Chessboard Square.
  // Memory Usage: 5.8 MB, less than 89.81% of C++ online submissions for Determine Color of a Chessboard Square.
  //
  return (coordinates[0] + coordinates[1]) % 2 == 0;
}

}

#endif  // !DETERMINE_COLOR_OF_A_CHESSBOARD_SQUARE_H_
