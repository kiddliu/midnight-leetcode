#ifndef GET_MAXIMUM_IN_GENERATED_ARRAY_H_
#define GET_MAXIMUM_IN_GENERATED_ARRAY_H_

#include <array>

namespace solution {

int getMaximumGenerated(int n) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Get Maximum in Generated Array.
  // Memory Usage: 5.8 MB, less than 91.14% of C++ online submissions for Get Maximum in Generated Array.
  //
  if (n < 2) return n;
  std::array<int, 101> a{0,1};

  auto max{0};
  for (auto i = 2; i <= n; ++i) {
    if (i % 2 == 0) {
      a[i] = a[i / 2];
    } else {
      a[i] = a[i / 2] + a[i / 2 + 1];
    }
    max = std::max(max, a[i]);
  }

  return max;
}

}

#endif  // !GET_MAXIMUM_IN_GENERATED_ARRAY_H_
