#ifndef COMBINATIONS_H_
#define COMBINATIONS_H_

#include <numeric>
#include <vector>

namespace solution {

std::vector<std::vector<int>> combine(int n, int k) {
  // DP is overkilling...
  // Runtime: 82 ms, faster than 25.87% of C++ online submissions for Combinations.
  // Memory Usage: 50.4 MB, less than 23.75% of C++ online submissions for Combinations.
  //
  std::vector<std::vector<int>> result;
  if (k == 1) {
    for (auto i{1}; i <= n; ++i) {
      result.push_back({i});
    }
  } else if (n == k) {
    std::vector<int> v(k);
    std::iota(v.begin(), v.end(), 1);
    result.push_back(v);
  } else {
    auto part1 = combine(n - 1, k);
    result.insert(result.end(), part1.begin(), part1.end());

    for (auto& v : combine(n - 1, k - 1)) {
      v.push_back(n);
      result.push_back(v);
    }
  }

  return result;
}

}

#endif  // COMBINATIONS_H_
