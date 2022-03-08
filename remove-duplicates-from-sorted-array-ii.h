#ifndef REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H_
#define REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H_

#include <vector>

namespace solution {

int removeDuplicates(std::vector<int>& nums) {
  // 我宛如智障。。。
  // Runtime: 7 ms, faster than 67.08% of C++ online submissions for Remove Duplicates from Sorted Array II.
  // Memory Usage: 10.9 MB, less than 75.38% of C++ online submissions for Remove Duplicates from Sorted Array II.
  //
  auto i{0};
  for (auto n : nums) {
    if (i < 2 || n > nums[i - 2]) {
      nums[i++] = n;
    }
  }
  return i;
}

}

#endif  // !REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H_
