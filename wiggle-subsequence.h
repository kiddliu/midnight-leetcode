#ifndef WIGGLE_SUBSEQUENCE_H_
#define WIGGLE_SUBSEQUENCE_H_

#include <vector>

namespace solution {

int wiggleMaxLength(std::vector<int>& nums) {
  // it's a greedy problem, DP solution is overkilling
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Wiggle Subsequence.
  // Memory Usage: 7 MB, less than 75.45% of C++ online submissions for Wiggle Subsequence.
  //
  int size = nums.size();
  if (size == 1) return 1;
  if (size == 2) return nums.front() == nums.back() ? 1 : 2;

  auto result{size}, direction{0};
  for (auto i{1}; i < size; ++i) {
    if (nums[i] == nums[i - 1]) {
      --result;
    } else {
      auto new_direction = nums[i] > nums[i - 1] ? 1 : -1;

      if (direction == 0 || direction != new_direction) {
        direction = new_direction;
      } else if (direction == new_direction) {
        --result;
      }
    }
  }
  return result;
}

}  // namespace solution

#endif  // !WIGGLE_SUBSEQUENCE_H_
