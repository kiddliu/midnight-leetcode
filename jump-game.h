#ifndef JUMP_GAME_H_
#define JUMP_GAME_H_

#include <vector>

namespace solution {

bool canJump(std::vector<int>& nums) {
  // back tracing
  // Runtime: 1283 ms, faster than 5.03% of C++ online submissions for Jump Game.
  // Memory Usage: 48.7 MB, less than 14.42% of C++ online submissions for Jump Game.
  // 
  //if (nums.size() == 1) return true;

  //std::vector<bool> jumps(nums.size());

  //for (int i = nums.size() - 2; i >= 0; --i) {
  //  if (nums[i] == 0) {
  //    jumps[i] = false;
  //  } else if (nums[i] + i >= nums.size() - 1) {
  //    jumps[i] = true;
  //  } else {
  //    auto can_jump{false};
  //    for (int j{1}; j <= nums[i] && j + i < nums.size(); ++j) {
  //      if (jumps[i + j]) {
  //        can_jump = true;
  //        break;
  //      }
  //    }
  //    jumps[i] = can_jump;
  //  }
  //}

  //return jumps[0];

  // greedy
  // Runtime: 76 ms, faster than 58.52% of C++ online submissions for Jump Game.
  // Memory Usage: 48.5 MB, less than 21.86% of C++ online submissions for Jump Game.
  //
  auto distance = 0;
  for (int i = 0; i <= distance; ++i) {
    distance = std::max(distance, i + nums[i]);
    if (distance >= nums.size() - 1) {
      return true;
    }
  }
  return false;
}

}

#endif  // !JUMP_GAME_H_
