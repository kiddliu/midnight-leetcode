#ifndef SELF_DIVIDING_NUMBERS_H_
#define SELF_DIVIDING_NUMBERS_H_

#include <vector>

namespace solution {

std::vector<int> selfDividingNumbers(int left, int right) {
  // naive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Self Dividing Numbers.
  // Memory Usage: 6.5 MB, less than 54.75% of C++ online submissions for Self Dividing Numbers.
  //
  std::vector<int> v;

  for (int i = left; i <= right; ++i) {
    if (i < 10) {
      v.push_back(i);
      continue;
    }
    if (i % 10 == 0) continue;

    auto j = i, m = 0;
    while (j != 0) {
      m = j % 10;
      if (m == 0 || i % m != 0) break;
      j /= 10;
    }
    if (j == 0) {
      v.push_back(i);
    }
  }

  return v;
}

}

#endif  // SELF_DIVIDING_NUMBERS_H_
