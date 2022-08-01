#ifndef UGLY_NUMBER_II_H_
#define UGLY_NUMBER_II_H_

#include <vector>

namespace solution {

int nthUglyNumber(int n) {
  // fucking genius...
  // Runtime: 7 ms, faster than 90.04% of C++ online submissions for Ugly Number II.
  // Memory Usage: 7.7 MB, less than 66.71% of C++ online submissions for Ugly Number II.
  //
  std::vector<int> ugly(n, 1);
  int c2 = 2, c3 = 3, c5 = 5;
  int i2 = 0, i3 = 0, i5 = 0;
  for (int i = 1; i < n; ++i) {
    int last = ugly[i] = std::min(c2, std::min(c3, c5));
    while (c2 <= last) c2 = 2 * ugly[++i2];
    while (c3 <= last) c3 = 3 * ugly[++i3];
    while (c5 <= last) c5 = 5 * ugly[++i5];
  }
  return ugly[n - 1];
}

}

#endif  // !UGLY_NUMBER_II_H_
