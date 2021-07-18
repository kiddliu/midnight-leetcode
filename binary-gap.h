#ifndef BINARY_GAP_H_
#define BINARY_GAP_H_

#include <algorithm>

namespace solution {

int binaryGap(int n) {
  // one pass
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Gap.
  // Memory Usage: 5.9 MB, less than 79.56% of C++ online submissions for Binary Gap.
  //
  auto result{0}, length{-32};
  while (n > 0) {
    auto m = n % 2;
    if (m == 1) {
      result = std::max(result, length);
      length = 0;
    }
    ++length, n /= 2;
  }
  return result;
}

}

#endif  // BINARY_GAP_H_
