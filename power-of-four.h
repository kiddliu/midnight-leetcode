#ifndef POWER_OF_FOUR_H_
#define POWER_OF_FOUR_H_

namespace solution {

bool isPowerOfFour(int n) {
  // is power of 2 and in binary form it appears at odd positions
  return (n > 0) && ((n & (n - 1)) == 0) && ((n & 0x55555555) == n);
}

}

#endif  // POWER_OF_FOUR_H_
