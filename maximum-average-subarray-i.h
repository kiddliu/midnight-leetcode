#ifndef MAXIMUM_AVERAGE_SUBARRAY_I_H_
#define MAXIMUM_AVERAGE_SUBARRAY_I_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

double findMaxAverage(std::vector<int>& nums, int k) {
  // sliding window
  // Runtime: 160 ms, faster than 76.10% of C++ online submissions for Maximum Average Subarray I.
  // Memory Usage: 115.8 MB, less than 5.17% of C++ online submissions for Maximum Average Subarray I.
  //
  std::vector<double> v(nums.size() - k + 1);
  v[0] = std::accumulate(nums.cbegin(), nums.cbegin() + k, 0);

  double r{v[0] / k};
  for (size_t i = 1; i < v.size(); ++i) {
    v[i] = v[i - 1] + nums[i + k - 1] - nums[i - 1];
    r = std::max(r, v[i] / k);
  }
  return r;
}

}

#endif  // MAXIMUM_AVERAGE_SUBARRAY_I_H_
