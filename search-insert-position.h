#ifndef SEARCH_INSERT_POSITION_H_
#define SEARCH_INSERT_POSITION_H_

#include <vector>

namespace solution {

int searchInsert(std::vector<int>& nums, int target) {
  // Brute force
  // Runtime: 4 ms, faster than 80.96% of C++ online submissions for Search Insert Position.
  // Memory Usage: 9.6 MB, less than 85.28% of C++ online submissions for Search Insert Position.
  //
  if (nums.size() == 0) return 0;
  if (nums.size() == 1) return nums[0] < target ? 1 : 0;
  if (nums[0] >= target) return 0;

  auto begin = nums.cbegin() + 1, it = begin, end = nums.cend();

  while (it != end) {
    if (*it >= target) return it - begin;
    ++it;
  }

  return nums.size();
}


}

#endif  // SEARCH_INSERT_POSITION_H_
