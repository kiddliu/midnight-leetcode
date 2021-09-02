#ifndef LUCKY_NUMBERS_IN_A_MATRIX_H_
#define LUCKY_NUMBERS_IN_A_MATRIX_H_

#include <algorithm>
#include <iterator>
#include <vector>

namespace solution {

std::vector<int> luckyNumbers(std::vector<std::vector<int>>& matrix) {
  // straight forward
  // Runtime: 24 ms, faster than 46.58% of C++ online submissions for Lucky Numbers in a Matrix.
  // Memory Usage: 11.7 MB, less than 21.22% of C++ online submissions for Lucky Numbers in a Matrix.
  //
  std::vector<int> mins(matrix.size(), INT_MAX), maxs(matrix[0].size(), 0), result;

  for (size_t i = 0; i < matrix.size(); ++i) {
    for (size_t j = 0; j < matrix[i].size(); ++j) {
      mins[i] = std::min(mins[i], matrix[i][j]);
      maxs[j] = std::max(maxs[j], matrix[i][j]);
    }
  }

  std::sort(mins.begin(), mins.end());
  std::sort(maxs.begin(), maxs.end());

  std::set_intersection(mins.cbegin(), mins.cend(), maxs.cbegin(), maxs.cend(),
                        std::back_inserter(result));

  return result;
}


}


#endif  // LUCKY_NUMBERS_IN_A_MATRIX_H_
