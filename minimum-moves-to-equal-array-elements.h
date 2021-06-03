#ifndef MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_H_
#define MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_H_

#include <algorithm>
#include <numeric>
#include <vector>

int minMoves(std::vector<int>& nums) {
  // first time one liner
  // Runtime: 60 ms, faster than 5.73% of C++ online submissions for Minimum Moves to Equal Array Elements.
  // Memory Usage: 28.4 MB, less than 36.42% of C++ online submissions for Minimum Moves to Equal Array Elements.
  //
  return std::accumulate(nums.cbegin(), nums.cend(), 0) -
         nums.size() * *std::min_element(nums.cbegin(), nums.cend());
}

#endif  // !MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_H_
