#ifndef PASCALS_TRIANGLE_II_H_
#define PASCALS_TRIANGLE_II_H_

#include <utility>
#include <vector>

namespace solution {

std::vector<int> getRow(int rowIndex) {
  // Brute force
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle II.
  // Memory Usage: 6.4 MB, less than 61.90% of C++ online submissions for Pascal's Triangle II.
  //
  if (rowIndex == 0) return std::vector<int>{1};
  if (rowIndex == 1) return std::vector<int>{1, 1};

  auto index = 2;
  std::vector<int> temp{1, 2, 1};
  while (index++ < rowIndex) {
    std::vector<int> result{1};
    for (size_t i = 1; i < temp.size(); ++i) {
      result.push_back(temp[i] + temp[i - 1]);
    }
    result.push_back(1);
    temp = std::move(result);
  }
  return temp;
}

}

#endif  // PASCALS_TRIANGLE_II_H_
