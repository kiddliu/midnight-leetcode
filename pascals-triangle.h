#ifndef PASCAL_TRIANGLE_H_
#define PASCAL_TRIANGLE_H_

#include <algorithm>
#include <initializer_list>
#include <iterator>
#include <vector>

namespace solution {

std::vector<std::vector<int>> generate(int numRows) {
  // Dynamic Programming
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
  // Memory Usage: 6.4 MB, less than 84.23% of C++ online submissions for Pascal's Triangle.
  //
  std::vector<std::vector<int>> result{};
  if (numRows > 0) result.emplace_back(std::initializer_list<int>{1}); 
  if (numRows > 1) result.emplace_back(std::initializer_list<int>{1, 1});

  while (result.size() != numRows) {
    auto& last = result[result.size() - 1];
    std::vector<int> next{};
    for (size_t i = 0; i < last.size(); ++i) {
      next.push_back(i == 0 ? 1 : last[i - 1] + last[i]);
    }
    next.push_back(1);
    result.push_back(next);
  }
  return result;
}

}

#endif  // PASCAL_TRIANGLE_H_
