#ifndef COMBINATION_SUM_III_H_
#define COMBINATION_SUM_III_H_

#include <numeric>
#include <vector>

namespace solution {

void backtrack(int k, int n, std::vector<std::vector<int>>& results,
               std::vector<int> result) {
  if (result.size() == k && n == 0) {
    results.push_back(result);
    return;
  }
  if (result.size() < k) {
    for (int i = result.empty() ? 1 : result.back() + 1; i < 10; ++i) {
      if (n - i < 0) break;

      result.push_back(i);
      backtrack(k, n - i, results, result);
      result.pop_back();
    }
  }
}

std::vector<std::vector<int>> combinationSum3(int k, int n) {
  // backtracking...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Combination Sum III.
  // Memory Usage: 6.8 MB, less than 28.79% of C++ online submissions for Combination Sum III.
  //
  std::vector<std::vector<int>> results;
  std::vector<int> result;

  backtrack(k, n, results, result);

  return results;
}

#endif  // COMBINATION_SUM_III_H_
