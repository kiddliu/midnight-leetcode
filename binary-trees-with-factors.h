#ifndef BINARY_TREES_WITH_FACTORS_H_
#define BINARY_TREES_WITH_FACTORS_H_

#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <vector>

namespace solution {

int numFactoredBinaryTrees(std::vector<int>& arr) {
  // it's 2 product problem
  // Runtime: 121 ms, faster than 47.08% of C++ online submissions for Binary Trees With Factors.
  // Memory Usage: 16.7 MB, less than 15.69% of C++ online submissions for Binary Trees With Factors.
  //
  int size = arr.size();
  long result{0l};
  if (size == 1) return 1;

  std::sort(arr.begin(), arr.end());
  std::unordered_map<int, long> dp;

  for (auto i{0}; i < size; ++i) {
    dp[arr[i]] = 1;
    for (auto j{0}; j < i; ++j) {
      if (arr[i] % arr[j] == 0) {
        dp[arr[i]] = (dp[arr[i]] + dp[arr[j]] * dp[arr[i] / arr[j]]) % 1000000007;
      }
    }
    result = (result + dp[arr[i]]) % 1000000007;
  }

  return result;
}

}  // namespace solution

#endif  // !BINARY_TREES_WITH_FACTORS_H_
