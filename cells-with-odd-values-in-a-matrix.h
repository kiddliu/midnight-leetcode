#ifndef CELLS_WITH_ODD_VALUES_IN_A_MATRIX_H_
#define CELLS_WITH_ODD_VALUES_IN_A_MATRIX_H_

#include <algorithm>
#include <vector>

namespace solution {

int oddCells(int m, int n, std::vector<std::vector<int>>& indices) {
  // using vector<bool> may improve the memory space
  // Runtime: 4 ms, faster than 81.98% of C++ online submissions for Cells with Odd Values in a Matrix.
  // Memory Usage: 7.7 MB, less than 75.63% of C++ online submissions for Cells with Odd Values in a Matrix.
  //
  std::vector<int> row(m, 0), column(n, 0);

  for (const auto& c : indices) {
    ++row[c[0]];
    ++column[c[1]];
  }

  auto oddRows = std::count_if(row.cbegin(), row.cend(),
                               [](const int& i) { return i % 2 == 1; });
  auto oddColumns = std::count_if(column.cbegin(), column.cend(),
                                  [](const int& i) { return i % 2 == 1; });

  return oddRows * (n - oddColumns) + (m - oddRows) * oddColumns;
}

}

#endif  // CELLS_WITH_ODD_VALUES_IN_A_MATRIX_H_
