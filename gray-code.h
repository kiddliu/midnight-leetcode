#ifndef GRAY_CODE_H_
#define GRAY_CODE_H_

#include <cmath>
#include <vector>

namespace solution {

std::vector<int> grayCode(int n) {
  // just reverse the last input with highest bit to 1
  // Runtime: 4 ms, faster than 95.51% of C++ online submissions for Gray Code.
  // Memory Usage: 11.3 MB, less than 86.54% of C++ online submissions for Gray Code.
  //
  std::vector<int> result(1 << n);
  result[1] = 1;

  for (auto i{1}; i < n; ++i) {
    int num = 1 << i;
    for (auto j{num - 1}; j >= 0; --j) {
      result[2 * num - j - 1] = result[j] + num;
    }
  }

  return result;
}

}

#endif  // GRAY_CODE_H_
