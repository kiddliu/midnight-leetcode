#ifndef DIVISOR_GAME_H_
#define DIVISOR_GAME_H_

namespace solution {

bool divisorGame(int n) {
  // since the odd number can only be multiplied by odd numbers
  // and in this case n - x can give Alice the even number
  // then always make Bob an odd number can make Alice win
  return n % 2 == 0;
}

}

#endif  // DIVISOR_GAME_H_
