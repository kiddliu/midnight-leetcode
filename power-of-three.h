#ifndef POWER_OF_THREE_H_
#define POWER_OF_THREE_H_

namespace solution {

bool isPowerOfThree(int n) {
  // brute force
  // Runtime: 20 ms
  // Memory Usage : 5.9 MB
  //
  if (n < 1) return false;

  while (n % 3 == 0) {
    n /= 3;
  }

  return n == 1;
}

}  // namespace solution

#endif  // POWER_OF_THREE_H_
