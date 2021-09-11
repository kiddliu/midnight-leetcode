#ifndef SHUFFLE_THE_ARRAY_H_
#define SHUFFLE_THE_ARRAY_H_

#include <vector>

namespace solution {

std::vector<int> shuffle(std::vector<int>& nums, int n) {
  // straight forward
  // Runtime: 8 ms, faster than 47.08% of C++ online submissions for Shuffle the Array.
  // Memory Usage: 9.7 MB, less than 55.76% of C++ online submissions for Shuffle the Array
  //
  std::vector<int> v;
  v.reserve(nums.size());

  auto i{0};
  while (i < n) {
    v.push_back(nums[i]);
    v.push_back(nums[n + i]);
    ++i;
  }
  return v;
}

}

#endif  // SHUFFLE_THE_ARRAY_H_
