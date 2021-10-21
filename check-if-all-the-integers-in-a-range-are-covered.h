#ifndef CHECK_IF_ALL_THE_INTEGERS_IN_A_RANGE_ARE_COVERED_H_
#define CHECK_IF_ALL_THE_INTEGERS_IN_A_RANGE_ARE_COVERED_H_

#include <array>
#include <vector>

namespace solution {

bool isCovered(std::vector<std::vector<int>>& ranges, int left, int right) {
  // straight forward
  // Runtime: 4 ms, faster than 75.71% of C++ online submissions for Check if All the Integers in a Range Are Covered.
  // Memory Usage: 8.7 MB, less than 87.94% of C++ online submissions for Check if All the Integers in a Range Are Covered.
  //
  std::array<int, 51> a{};

  for (auto& r : ranges) {
    auto begin{r[0]}, end{r[1]};
    while (begin <= end) {
      ++a[begin];
    }
  }

  while (left <= right) {
    if (a[left] == 0) return false;
  }
  return true;
}

}

#endif  // CHECK_IF_ALL_THE_INTEGERS_IN_A_RANGE_ARE_COVERED_H_
