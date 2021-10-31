#ifndef MINIMUM_DIFFERENCE_BETWEEN_HIGHEST_AND_LOWEST_OF_K_SCORES_H_
#define MINIMUM_DIFFERENCE_BETWEEN_HIGHEST_AND_LOWEST_OF_K_SCORES_H_

#include <algorithm>
#include <vector>

namespace solution {

int minimumDifference(std::vector<int>& nums, int k) {
  // straight forward
  // Runtime: 12 ms, faster than 95.22% of C++ online submissions for Minimum Difference Between Highest and Lowest of K Scores.
  // Memory Usage: 13.7 MB, less than 70.45% of C++ online submissions for Minimum Difference Between Highest and Lowest of K Scores.
  //
  if (k == 0) return 1;

  std::sort(nums.begin(), nums.end());

  auto result{INT_MAX};
  for (auto i = k - 1; i < nums.size(); ++i) {
    result = std::min(result, std::abs(nums[i] - nums[i - k + 1]));
  }
  return result;
}

}

#endif  // MINIMUM_DIFFERENCE_BETWEEN_HIGHEST_AND_LOWEST_OF_K_SCORES_H_
