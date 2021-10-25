#ifndef COUNT_SQUARE_SUM_TRIPLES_H_
#define COUNT_SQUARE_SUM_TRIPLES_H_

#include <cmath>

namespace solution {

int countTriples(int n) {
  // straight forward
  // Runtime: 3 ms, faster than 93.06% of C++ online submissions for Count Square Sum Triples.
  // Memory Usage: 5.9 MB, less than 80.03% of C++ online submissions for Count Square Sum Triples.
  //
  auto count{0};

  for (auto i = 1; i < n - 1; ++i) {
    for (auto j = i + 1; j < n && i * i >= 2 * j + 1; ++j) {
      auto square = i * i + j * j;
      auto root = static_cast<int>(std::sqrt(square));
      if (root <= n && root * root == square) {
        count += 2;
      }
    }
  }

  return count;
}

}

#endif  // COUNT_SQUARE_SUM_TRIPLES_H_
