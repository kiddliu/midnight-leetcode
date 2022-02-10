#ifndef SUBARRAY_SUM_EQUALS_K_H_
#define SUBARRAY_SUM_EQUALS_K_H_

#include <unordered_map>
#include <vector>

namespace solution {

int subarraySum(std::vector<int>& nums, int k) {
  // tracking the footprint of the sum and sum - k
  // Runtime: 105 ms, faster than 56.30% of C++ online submissions for Subarray Sum Equals K.
  // Memory Usage: 41.7 MB, less than 27.57% of C++ online submissions for Subarray Sum Equals K.
  //
  auto sum{0}, count{0};
  std::unordered_map<int, int> map;
  map[0] = 1;

  for (auto& n : nums) {
    sum += n;
    count += map[sum - k];
    ++map[sum];
  }

  return count;
}

}


#endif  // !SUBARRAY_SUM_EQUALS_K_H_
