#ifndef MINIMUM_COST_TO_MOVE_CHIPS_TO_THE_SAME_POSITION_H_
#define MINIMUM_COST_TO_MOVE_CHIPS_TO_THE_SAME_POSITION_H_

#include <array>
#include <vector>

namespace solution {

int minCostToMoveChips(std::vector<int>& position) {
  // it's tricky
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Cost to Move Chips to The Same Position.
  // Memory Usage: 7.3 MB, less than 56.34% of C++ online submissions for Minimum Cost to Move Chips to The Same Position.
  //
  std::array<int, 2> count{};
  for (const auto& p : position) {
    ++count[p % 2];
  }

  return std::min(count[0], count[1]);
}


}

#endif  // MINIMUM_COST_TO_MOVE_CHIPS_TO_THE_SAME_POSITION_H_
