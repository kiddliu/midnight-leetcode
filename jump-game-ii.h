#ifndef JUMP_GAME_II_H_
#define JUMP_GAME_II_H_

#include <vector>

namespace solution {

int jump(std::vector<int>& nums) {
  // BFS should be much better
  // Runtime: 377 ms, faster than 22.85% of C++ online submissions for Jump Game II.
  // Memory Usage: 17 MB, less than 27.57% of C++ online submissions for Jump Game II.
  //
  if (nums.size() == 1) return 0;

  std::vector<int> jumps(nums.size());

  for (int i = nums.size() - 2; i >= 0; --i) {
    if (nums[i] == 0) {
      jumps[i] = INT_MAX;
    } else if (nums[i] + i >= nums.size() - 1) {
      jumps[i] = 1;
    } else {
      auto distance{INT_MAX};
      for (int j{1}; j <= nums[i] && j + i < nums.size(); ++j) {
        distance = std::min(distance, jumps[i + j]); // can optimize with a min variable, and stop once it reads a min value
      }
      jumps[i] = distance == INT_MAX ? distance : distance + 1;
    }
  }

  return jumps[0];
}

}

#endif  // JUMP_GAME_II_H_
