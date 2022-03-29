#ifndef FIND_THE_DUPLICATE_NUMBER_H_
#define FIND_THE_DUPLICATE_NUMBER_H_

#include <algorithm>
#include <vector>

namespace solution {

int findDuplicate(std::vector<int>& nums) {
  // since the input is from 1 to n inclusive, uses index 0 as the pivot
  // and compare it with the n[n[0]] until it's equal and you got it
  // Runtime: 140 ms, faster than 67.55% of C++ online submissions for Find the Duplicate Number.
  // Memory Usage: 61.3 MB, less than 61.36% of C++ online submissions for Find the Duplicate Number.
  //
  while (nums[0] != nums[nums[0]]) std::swap(nums[0], nums[nums[0]]);

  return nums[0];
}


}

#endif  // !FIND_THE_DUPLICATE_NUMBER_H_
