#ifndef RICHEST_CUSTOMER_WEALTH_H_
#define RICHEST_CUSTOMER_WEALTH_H_

#include <numeric>
#include <vector>

namespace solution {

int maximumWealth(std::vector<std::vector<int>>& accounts) {
  // straight forward
  // Runtime: 4 ms, faster than 90.24% of C++ online submissions for Richest Customer Wealth.
  // Memory Usage: 7.9 MB, less than 49.42% of C++ online submissions for Richest Customer Wealth.
  //
  auto max{0};
  for (const auto& v : accounts) {
    max = std::max(max, std::accumulate(v.cbegin(), v.cend(), 0));
  }
  return max;
}

}

#endif  // !RICHEST_CUSTOMER_WEALTH_H_
