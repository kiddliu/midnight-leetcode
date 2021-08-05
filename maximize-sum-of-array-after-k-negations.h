#ifndef MAXIMIZE_SUM_OF_ARRAY_AFTER_K_NEGATIONS_H_
#define MAXIMIZE_SUM_OF_ARRAY_AFTER_K_NEGATIONS_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

int largestSumAfterKNegations(std::vector<int>& nums, int k) {
  // sort and find the minimum to substract if necessary
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximize Sum Of Array After K Negations.
  // Memory Usage: 9.1 MB, less than 51.64% of C++ online submissions for Maximize Sum Of Array After K Negations.
  //
  std::sort(nums.begin(), nums.end());

  for (size_t i = 0; i < nums.size() && k > 0; ++i, --k) {
    nums[i] = -nums[i];
  }

  return std::accumulate(nums.cbegin(), nums.cend(), 0) -
         (k % 2) * *std::min_element(nums.cbegin(), nums.cend()) * 2;
}

}

#endif  // MAXIMIZE_SUM_OF_ARRAY_AFTER_K_NEGATIONS_H_
