#ifndef HEIGHT_CHECKER_H_
#define HEIGHT_CHECKER_H_

#include <algorithm>
#include <vector>

namespace solution {

int heightChecker(std::vector<int>& heights) {
  // counting sort is sorting, too
  // Runtime: 4 ms, faster than 56.73% of C++ online submissions for Height Checker.
  // Memory Usage: 8.3 MB, less than 22.72% of C++ online submissions for Height Checker.
  //
  std::vector<int> v{heights.cbegin(), heights.cend()};
  std::sort(v.begin(), v.end());

  auto result{0};
  for (size_t i = 0; i < heights.size(); ++i) {
    result += heights[i] != v[i];
  }
  return result;
}

}

#endif  // HEIGHT_CHECKER_H_
