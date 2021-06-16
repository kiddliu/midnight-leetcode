#ifndef ARRAY_PARTITION_I_H_
#define ARRAY_PARTITION_I_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

int arrayPairSum(std::vector<int>& nums) {
  // using sort, direct solution
  // Runtime: 56 ms, faster than 30.53% of C++ online submissions for Array Partition I.
  // Memory Usage: 28.2 MB, less than 45.93% of C++ online submissions for Array Partition I.
  //
  std::sort(nums.begin(), nums.end());
  
  auto r{0};
  for (size_t i = 0; i < nums.size(); i += 2) {
    r += nums[i];
  }
  return r;
}

}

#endif  // ARRAY_PARTITION_I_H_
