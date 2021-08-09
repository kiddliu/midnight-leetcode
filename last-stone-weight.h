#ifndef LAST_STONE_WEIGHT_H_
#define LAST_STONE_WEIGHT_H_

#include <algorithm>
#include <vector>

namespace solution {

int lastStoneWeight(std::vector<int>& stones) {
  // should use priority queue, but sorting the vector also do the trick
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Last Stone Weight.
  // Memory Usage: 7.4 MB, less than 98.64% of C++ online submissions for Last Stone Weight.
  //
  while (stones.size() > 1) {
    std::sort(stones.begin(), stones.end(), std::greater<int>());
    if (stones[0] > stones[1]) {
      stones.push_back(stones[0] - stones[1]);
    }
    stones.erase(stones.begin(), stones.begin() + 2);
  }
  return stones.size() == 1 ? stones[0] : 0;
}


}


#endif  // LAST_STONE_WEIGHT_H_
