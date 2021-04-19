#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_H_

#include <algorithm>
#include <vector>

namespace solution {

int maxProfit(std::vector<int>& prices) {
  // One run
  // Runtime: 104 ms, faster than 88.87% of C++ online submissions for Best Time to Buy and Sell Stock.
  // Memory Usage: 93.3 MB, less than 73.97% of C++ online submissions for Best Time to Buy and Sell Stock.
  //
  if (prices.size() == 1) return 0;
  if (prices.size() == 2)
    return prices[0] > prices[1] ? 0 : prices[1] - prices[0];

  auto low{prices[0]}, profit{0};

  for (size_t i = 1; i < prices.size(); ++i) {
    if (low > prices[i]) {
      low = prices[i];
    } else {
      auto diff = prices[i] - low;
      if (diff > profit) profit = diff;
    }
  }

  return profit;
}

}

#endif  // BEST_TIME_TO_BUY_AND_SELL_STOCK_H_
