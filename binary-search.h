#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

#include <vector>

namespace solution {

int search(std::vector<int>& nums, int target) {
  // direct
  // Runtime: 36 ms, faster than 64.85% of C++ online submissions for Binary Search.
  // Memory Usage: 27.6 MB, less than 54.25% of C++ online submissions for Binary Search.
  //
  if (nums.size() == 1) return nums[0] == target ? 0 : -1;

  return search(nums, 0, nums.size() - 1, target);
}

int search(std::vector<int>& nums, int begin, int end, int target) {
  if (end - begin <= 1)
    return nums[begin] == target ? begin : (nums[end] == target ? end : -1);

  auto mid = (begin + end) / 2;
  if (nums[mid] == target) return mid;
  return nums[mid] > target ? search(nums, begin, mid - 1, target)
                            : search(nums, mid + 1, end, target);
}

}

#endif  // BINARY_SEARCH_H_
