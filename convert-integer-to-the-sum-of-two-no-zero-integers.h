#ifndef CONVERT_INTEGER_TO_THE_SUM_OF_TWO_NO_ZERO_INTEGERS_H_
#define CONVERT_INTEGER_TO_THE_SUM_OF_TWO_NO_ZERO_INTEGERS_H_

#include <vector>

namespace solution {

bool isNonZero(int num, int& move, bool increase) {
  move = 1;
  auto n{num};
  if (num < 10) return true;

  while (n > 0) {
    if (n % 10 != 0) {
      n /= 10;
      move *= 10;
    } else {
      move = increase ? (n + 1) * move + 1 - num : num - n * move + 1;
      return false;
    }
  }

  move = 1;
  return true;
}

std::vector<int> getNoZeroIntegers(int n) {
  // not sure if anyone is the same with me
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Convert Integer to the Sum of Two No-Zero Integers.
  // Memory Usage: 6.3 MB, less than 31.52% of C++ online submissions for Convert Integer to the Sum of Two No-Zero Integers.
  //
  auto i{1};
  while (i < n) {
    auto m1{0}, m2{0};
    auto first = isNonZero(i, m1, true), second = isNonZero(n - i, m2, false);
    if (first && second) {
      return {i, n - i};
    } else {
      i += std::max(m1, m2);
    }
  }

  return {};
}

}

#endif  // CONVERT_INTEGER_TO_THE_SUM_OF_TWO_NO_ZERO_INTEGERS_H_
