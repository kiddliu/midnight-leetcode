#ifndef ROTATED_DIGITS_H_
#define ROTATED_DIGITS_H_

#include <string>
#include <vector>

namespace solution {

int rotatedDigits(int n) {
  // though it beats 100% solution, I like the idea to use array for the checking of digits
  // [1, 1, 2, 0, 0, 2, 2, 0, 1, 2] and multiply with 1, if greater than 2 then it's good
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotated Digits.
  // Memory Usage: 5.9 MB, less than 79.76% of C++ online submissions for Rotated Digits.
  //
  auto count{0};
  while (n > 1) {
    count += isGood(n);
    --n;
  }
}

int isGood(int number) {
  auto perfect{false};
  while (number > 0) {
    auto m = number % 10;
    if (m == 3 || m == 4 || m == 7) return false;
    if (m == 2 || m == 5 || m == 6 || m == 9) perfect = true;
  }
  return perfect;
}

}

#endif  // ROTATED_DIGITS_H_
