#ifndef SEARCH_A_2D_MATRIX_II_H_
#define SEARCH_A_2D_MATRIX_II_H_

#include <algorithm>
#include <vector>

namespace solution {

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
  // with lower_bound
  // Runtime: 208 ms, faster than 36.09% of C++ online submissions for Search a 2D Matrix II.
  // Memory Usage: 14.7 MB, less than 98.00% of C++ online submissions for Search a 2D Matrix II.
  //
  auto result{false};
  auto last_offset{-1};

  for (auto& row : matrix) {
    if (target < row.front()) break;
    if (target > row.back()) continue;

    std::vector<int>::iterator begin{row.begin()}, end{row.end()};

    if (last_offset != -1) {
      auto p = begin + last_offset;
      if (*p == target) return true;
      if (*p > target) {
        end = p;
      } else {
        begin = p;
      }
    }

    auto lower = std::lower_bound(begin, end, target);
    if (lower != row.end() && *lower == target) return true;
    last_offset = std::distance(row.begin(), lower);
  }

  return result;
}

}

#endif  // SEARCH_A_2D_MATRIX_II_H_
