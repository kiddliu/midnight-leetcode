#ifndef RANGE_ADDITION_II_H_
#define RANGE_ADDITION_II_H_

#include <algorithm>
#include <vector>

namespace solution {

int maxCount(int m, int n, std::vector<std::vector<int>>& ops) {
  // naive
  // Runtime: 12 ms, faster than 59.18% of C++ online submissions for Range Addition II.
  // Memory Usage: 11 MB, less than 51.93% of C++ online submissions for Range Addition II.
  //
  for (auto& op : ops) {
    m = std::min(m, op[0]);
    n = std::min(n, op[1]);
  }
  return m * n;
}

}

#endif  // RANGE_ADDITION_II_H_
