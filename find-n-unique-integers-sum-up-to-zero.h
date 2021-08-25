#ifndef FIND_N_UNIQUE_INTEGERS_SUM_UP_TO_ZERO_H_
#define FIND_N_UNIQUE_INTEGERS_SUM_UP_TO_ZERO_H_

#include <vector>

namespace solution {

std::vector<int> sumZero(int n) {
  // why question this?
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
  // Memory Usage: 6.7 MB, less than 51.66% of C++ online submissions for Find N Unique Integers Sum up to Zero.
  //
  if (n == 1) return {0};

  auto size = n / 2;
  std::vector<int> v;
  v.reserve(n);
  for (int i = 1; i <= size; ++i) {
    v.push_back(i);
    v.push_back(-i);
  }

  if (n % 2 == 1) v.push_back(0);
  return v;
}


}

#endif  // FIND_N_UNIQUE_INTEGERS_SUM_UP_TO_ZERO_H_
