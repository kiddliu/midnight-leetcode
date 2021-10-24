#ifndef MAXIMUM_PRODUCT_DIFFERENCE_BETWEEN_TWO_PAIRS_H_
#define MAXIMUM_PRODUCT_DIFFERENCE_BETWEEN_TWO_PAIRS_H_

#include <queue>
#include <vector>

namespace solution {

int maxProductDifference(std::vector<int>& nums) {
  // with priority queues
  // Runtime: 36 ms, faster than 39.96% of C++ online submissions for Maximum Product Difference Between Two Pairs.
  // Memory Usage: 20.4 MB, less than 63.06% of C++ online submissions for Maximum Product Difference Between Two Pairs.
  //
  std::priority_queue<int, std::vector<int>, std::greater<int>> greaters;
  std::priority_queue<int> lessers;

  for (auto& n : nums) {
    greaters.push(n);
    if (greaters.size() > 2) greaters.pop();

    lessers.push(n);
    if (lessers.size() > 2) lessers.pop();
  }

  auto p1{1}, p2{1};
  while (!greaters.empty()) {
    p1 *= greaters.top();
    greaters.pop();
  }
  while (!lessers.empty()) {
    p2 *= lessers.top();
    lessers.pop();
  }

  return p1 - p2;
}

}

#endif  // MAXIMUM_PRODUCT_DIFFERENCE_BETWEEN_TWO_PAIRS_H_
