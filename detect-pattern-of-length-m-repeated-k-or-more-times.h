#ifndef DETECT_PATTERN_OF_LENGTH_M_REPEATED_K_OR_MORE_TIMES_H_
#define DETECT_PATTERN_OF_LENGTH_M_REPEATED_K_OR_MORE_TIMES_H_

#include <vector>

namespace solution {


bool containsPattern(std::vector<int>& arr, int m, int k) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Detect Pattern of Length M Repeated K or More Times.
  // Memory Usage: 8.3 MB, less than 54.15% of C++ online submissions for Detect Pattern of Length M Repeated K or More Times.
  //
  if (arr.size() < m * k) return false;

  for (auto i = 0; i <= arr.size() - m * k; ++i) {
    auto o1{i}, o2{i + m}, c1{1}, c2{0};
    while (c1 < k) {
      while (c2 < m) {
        if (arr[o1++] == arr[o2++]) {
          ++c2;
        } else {
          break;
        }
      }
      if (c2 != m) break;
      ++c1, c2 = 0;
    }
    if (c1 == k) return true;
  }

  return false;
}


}

#endif  // !DETECT_PATTERN_OF_LENGTH_M_REPEATED_K_OR_MORE_TIMES_H_
