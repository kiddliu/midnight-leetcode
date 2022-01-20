#ifndef KOKO_EATING_BANANAS_H_
#define KOKO_EATING_BANANAS_H_

#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>

namespace solution {

int minEatingSpeed(std::vector<int>& piles, int h) {
  // binary search...
  // Runtime: 36 ms, faster than 95.55% of C++ online submissions for Koko Eating Bananas.
  // Memory Usage: 18.9 MB, less than 16.35% of C++ online submissions for Koko Eating Bananas.
  //
  auto left{1}, right{*max_element(piles.begin(), piles.end())};

  while (left < right) {
    auto middle{(left + right) / 2}, hourSpent{0};

    for (auto& pile : piles) {
      hourSpent += pile / middle + (pile % middle != 0);
    }

    if (hourSpent <= h) {
      right = middle;
    } else {
      left = middle + 1;
    }
  }

  return right;
}

}

#endif  // !KOKO_EATING_BANANAS_H_
