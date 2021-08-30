#ifndef COUNT_NEGATIVE_NUMBERS_IN_A_SORTED_MATRIX_H_
#define COUNT_NEGATIVE_NUMBERS_IN_A_SORTED_MATRIX_H_

#include <algorithm>
#include <vector>

namespace solution {

int countNegatives(std::vector<std::vector<int>>& grid) {
  // straight forward
  // Runtime: 19 ms, faster than 15.49% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
  // Memory Usage: 10.5 MB, less than 45.81% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
  //
  auto result{0};
  for (const auto& row : grid) {
    result += std::upper_bound(row.crbegin(), row.crend(), -1) - row.crbegin();
  }
  return result;
}


}

#endif  // COUNT_NEGATIVE_NUMBERS_IN_A_SORTED_MATRIX_H_
