#ifndef FURTHEST_BUILDING_YOU_CAN_REACH_H_
#define FURTHEST_BUILDING_YOU_CAN_REACH_H_

#include <queue>
#include <vector>

namespace solution {

int furthestBuilding(std::vector<int>& heights, int bricks, int ladders) {
  // requires a minimum heap, can be implemented by inserting the negative value
  // Runtime: 148 ms, faster than 54.13% of C++ online submissions for Furthest Building You Can Reach.
  // Memory Usage: 53.7 MB, less than 77.33% of C++ online submissions for Furthest Building You Can Reach.
  //
  std::priority_queue<int> queue;
  int result{0}, size = heights.size() - 1, diff{0};

  while (result < size) {
    diff = heights[result + 1] - heights[result];
    if (diff > 0) {
      queue.push(-diff);

      if (queue.size() > ladders) {
        bricks += queue.top();
        queue.pop();

        if (bricks < 0) break;
      }
    }

    ++result;
  }

  return result;
}

}

#endif  // !FURTHEST_BUILDING_YOU_CAN_REACH_H_
