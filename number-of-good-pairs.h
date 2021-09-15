#ifndef NUMBER_OF_GOOD_PAIRS_H_
#define NUMBER_OF_GOOD_PAIRS_H_

#include <array>
#include <vector>

namespace solution {

int numIdenticalPairs(std::vector<int>& nums) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Good Pairs.
  // Memory Usage: 7.3 MB, less than 16.57% of C++ online submissions for Number of Good Pairs.
  //
  std::array<int, 100> m;
  for (const auto& n: nums) {
    ++m[n - 1];
  }

  auto result{0};
  for (const auto& n : m) {
    if (n != 1) {
      result += n * (n - 1) / 2;
    }
  }
  return result;
}

}

#endif  // NUMBER_OF_GOOD_PAIRS_H_
