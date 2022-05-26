#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <algorithm>
#include <vector>

namespace solution {

int minimumTotal(std::vector<std::vector<int>>& triangle) {
  // should be bottom to top
  // Runtime: 4 ms, faster than 89.57% of C++ online submissions for Triangle.
  // Memory Usage: 8.6 MB, less than 90.94% of C++ online submissions for Triangle.
  //
  int rows = triangle.size();
  for (auto i{1}; i < rows; ++i) {
    triangle[i].front() += triangle[i - 1].front();
    triangle[i].back() += triangle[i - 1].back();

    int nums = triangle[i].size() - 1;
    for (auto j{1}; j < nums; ++j) {
      triangle[i][j] += std::min(triangle[i - 1][j - 1], triangle[i - 1][j]);
    }
  }

  return *std::min_element(triangle.back().cbegin(), triangle.back().cend());
}

}

#endif  // TRIANGLE_H_
