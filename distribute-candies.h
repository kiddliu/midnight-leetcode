#ifndef DISTRIBUTE_CANDIES_H_
#define DISTRIBUTE_CANDIES_H_

#include <algorithm>
#include <unordered_set>
#include <vector>

namespace solution {

int distributeCandies(std::vector<int>& candyType) {
  // with unordered_set
  // Runtime: 264 ms, faster than 60.77% of C++ online submissions for Distribute Candies.
  // Memory Usage: 110.2 MB, less than 77.84% of C++ online submissions for Distribute Candies.
  //
  return std::min(candyType.size() / 2,
                  std::unordered_set<int>(candyType.cbegin(), candyType.cend()).size());
}

}

#endif  // DISTRIBUTE_CANDIES_H_
