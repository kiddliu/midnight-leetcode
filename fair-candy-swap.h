#ifndef FAIR_CANDY_SWAP_H_
#define FAIR_CANDY_SWAP_H_

#include <numeric>
#include <unordered_set>
#include <vector>

namespace solution {

std::vector<int> fairCandySwap(std::vector<int>& aliceSizes, std::vector<int>& bobSizes) {
  // calc diff with set, the memory consumption increased
  // Runtime: 92 ms, faster than 75.02% of C++ online submissions for Fair Candy Swap.
  // Memory Usage: 46.7 MB, less than 70.95% of C++ online submissions for Fair Candy Swap.
  //
  auto diff = (std::accumulate(aliceSizes.cbegin(), aliceSizes.cend(), 0) -
               std::accumulate(bobSizes.cbegin(), bobSizes.cend(), 0)) /
              2;
  std::unordered_set<int> s{bobSizes.cbegin(), bobSizes.cend()};

  for (const auto& candy : aliceSizes) {
    if (s.find(candy - diff) != s.end()) {
      return {candy, candy - diff};
    }
  }
}

}

#endif  // FAIR_CANDY_SWAP_H_
