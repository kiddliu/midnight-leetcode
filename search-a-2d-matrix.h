#ifndef SEARCH_A_2D_MATRIX_H_
#define SEARCH_A_2D_MATRIX_H_

#include <algorithm>
#include <unordered_map>
#include <vector>

namespace solution {

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
  // using STL...
  // Runtime: 3 ms, faster than 87.81% of C++ online submissions for Search a 2D Matrix.
  // Memory Usage: 9.9 MB, less than 5.43% of C++ online submissions for Search a 2D Matrix.
  //
  if (matrix.front().front() > target || matrix.back().back() < target)
    return false;

  std::vector<int> v;
  std::unordered_map<int, std::vector<int>> map;
  for (auto& m : matrix) {
    if (m.front() == target) return true;
    map[m.front()] = m;
    v.push_back(m.front());
  }

  auto i = *(std::upper_bound(v.cbegin(), v.cend(), target) - 1);
  return std::binary_search(map[i].cbegin(), map[i].cend(), target);
}

}

#endif  // SEARCH_A_2D_MATRIX_H_
