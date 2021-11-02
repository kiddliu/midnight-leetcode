#ifndef CONVERT_1D_ARRAY_INTO_2D_ARRAY_H_
#define CONVERT_1D_ARRAY_INTO_2D_ARRAY_H_

#include <vector>

namespace solution {

std::vector<std::vector<int>> construct2DArray(std::vector<int>& original, int m, int n) {
  // straight forward
  // Runtime: 100 ms, faster than 96.36% of C++ online submissions for Convert 1D Array Into 2D Array.
  // Memory Usage: 85.4 MB, less than 82.52% of C++ online submissions for Convert 1D Array Into 2D Array.
  //
  if (original.size() != m * n) return {};

  std::vector<std::vector<int>> result(m, std::vector<int>(n));

  for (auto i = 0; i < original.size(); ++i) {
    result[i / n][i % n] = original[i];
  }

  return result;
}

}

#endif  // CONVERT_1D_ARRAY_INTO_2D_ARRAY_H_
