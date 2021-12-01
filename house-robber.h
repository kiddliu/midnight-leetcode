#ifndef HOUSE_ROBBER_H_
#define HOUSE_ROBBER_H_

#include <array>
#include <vector>

namespace solution {

int rob(std::vector<int>& nums) {
  // keep on looking into the pattern and optimize
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for House Robber.
  // Memory Usage: 7.6 MB, less than 94.34% of C++ online submissions for House Robber.
  //
  if (nums.empty()) return 0;

  auto prev1{0}, prev2{0};
  for (auto& n : nums) {
    auto tmp = prev1;
    prev1 = std::max(prev2 + n, prev1);
    prev2 = tmp;
  }
  return prev1;
}


}

#endif  // HOUSE_ROBBER_H_
