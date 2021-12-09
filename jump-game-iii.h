#ifndef JUMP_GAME_III_H_
#define JUMP_GAME_III_H_

#include <vector>

namespace solution {

bool canReach(std::vector<int>& arr, int index, std::vector<bool>& reached) {
  if (arr[index] == 0) return true;
  if (reached[index]) return false;

  reached[index] = true;

  auto left{index - arr[index]}, right{index + arr[index]};
  return (left >= 0 && canReach(arr, left, reached)) ||
         (right < arr.size() && canReach(arr, right, reached));
}

bool canReach(std::vector<int>& arr, int start) {
  // straightforward
  // Runtime: 44 ms, faster than 63.78% of C++ online submissions for Jump Game III.
  // Memory Usage: 31 MB, less than 89.91% of C++ online submissions for Jump Game III.
  //
  std::vector<bool> reached(arr.size());
  return canReach(arr, start, reached);
}

}  // namespace solution

#endif  // JUMP_GAME_III_H_
