#ifndef LARGEST_NUMBER_AT_LEAST_TWICE_OF_OTHERS_H_
#define LARGEST_NUMBER_AT_LEAST_TWICE_OF_OTHERS_H_

#include <queue>
#include <vector>

namespace solution {

int dominantIndex(std::vector<int>& nums) {
  // direct
  // Runtime: 4 ms, faster than 57.94% of C++ online submissions for Largest Number At Least Twice of Others.
  // Memory Usage: 11 MB, less than 19.96% of C++ online submissions for Largest Number At Least Twice of Others.
  //
  if (nums.size() == 1) return 0;

  auto m1{-1}, m2{-1}, index{-1};
  for (size_t i = 0; i < nums.size(); ++i) {
    if (nums[i] > m1) {
      m1 = nums[i];

      if (m1 > m2) {
        std::swap(m1, m2);
        index = i;
      }
    }
  }

  return m2 >= m1 * 2 ? index : -1;
}

}  // namespace solution

#endif  // LARGEST_NUMBER_AT_LEAST_TWICE_OF_OTHERS_H_
