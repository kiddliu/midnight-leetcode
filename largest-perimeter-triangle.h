#ifndef LARGEST_PERIMETER_TRIANGLE_H_
#define LARGEST_PERIMETER_TRIANGLE_H_

#include <algorithm>
#include <vector>

namespace solution {

int largestPerimeter(std::vector<int>& nums) {
  // sort with std::greater is slower...interesting
  // Runtime: 32 ms, faster than 84.53% of C++ online submissions for Largest Perimeter Triangle.
  // Memory Usage: 21.9 MB, less than 67.95% of C++ online submissions for Largest Perimeter Triangle.
  //
  std::sort(nums.begin(), nums.end());

  for (size_t i = nums.size() - 1; i > 1; --i) {
    if (nums[i] < nums[i - 1] + nums[i - 2])
      return nums[i] + nums[i - 1] + nums[i - 2];
  }
  return 0;
}

}

#endif  // LARGEST_PERIMETER_TRIANGLE_H_
