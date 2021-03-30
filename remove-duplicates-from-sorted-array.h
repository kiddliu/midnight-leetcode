#ifndef REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
#define REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_

#include <vector>

namespace solution {

int removeDuplicates(std::vector<int>& nums) {
  // Two pointers
  // Runtime: 8 ms, faster than 83.88% of C++ online submissions for Remove Duplicates from Sorted Array.
  // Memory Usage: 13.7 MB, less than 12.63% of C++ online submissions for Remove Duplicates from Sorted Array.
  //
  if (nums.size() < 2) return nums.size();

  auto p1 = nums.begin(), p2 = p1 + 1, end = nums.end();

  while (p2 != end) {
    if (*p2 != *p1) {
      std::iter_swap(++p1, p2);
    }
    p2++;
  }

  return p1 - nums.begin() + 1; 
}

}

#endif  // REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H_
