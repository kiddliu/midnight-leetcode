#ifndef FACTORIAL_TRAILING_ZEROES_H_
#define FACTORIAL_TRAILING_ZEROES_H_

namespace solution {

int trailingZeroes(int n) {
  // Tree to count how many 5 are out there
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Factorial Trailing Zeroes.
  // Memory Usage: 5.9 MB, less than 69.30% of C++ online submissions for Factorial Trailing Zeroes.
  //
  auto result{0};
  while (n > 0) {
    result += n / 5;
    n /= 5;
  }

  return result;
}

}

#endif // FACTORIAL_TRAILING_ZEROES_H_
