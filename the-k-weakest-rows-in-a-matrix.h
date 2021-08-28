#ifndef THE_K_WEAKEST_ROWS_IN_A_MATRIX_H_
#define THE_K_WEAKEST_ROWS_IN_A_MATRIX_H_

#include <algorithm>
#include <iterator>
#include <vector>

namespace solution {

std::vector<int> kWeakestRows(std::vector<std::vector<int>>& mat, int k) {
  // can improve the count
  // Runtime: 11 ms, faster than 71.20% of C++ online submissions for The K Weakest Rows in a Matrix.
  // Memory Usage: 10.4 MB, less than 92.14% of C++ online submissions for The K Weakest Rows in a Matrix.
  //
  std::vector<int> v;

  for (size_t i = 0; i < mat.size(); ++i) {
    v.push_back((std::count(mat[i].cbegin(), mat[i].cend(), 1) << 8) + i);
  }

  std::sort(v.begin(), v.end());
  v.resize(k);
  for (auto& i : v) {
    i = i & 0xff;
  }
  return v;
}


}

#endif  // THE_K_WEAKEST_ROWS_IN_A_MATRIX_H_
