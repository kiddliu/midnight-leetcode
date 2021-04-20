#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H_
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H_

#include <vector>

namespace solution {

int maxProfit(std::vector<int>& prices) {
  // Greedy / One pass
  // Runtime: 4 ms, faster than 90.71% of C++ online submissions for Best Time to Buy and Sell Stock II.
  // Memory Usage: 13 MB, less than 73.80% of C++ online submissions for Best Time to Buy and Sell Stock II.
  // 
  if (prices.size() == 1) return 0;
  if (prices.size() == 2)
    return prices[0] > prices[1] ? 0 : prices[1] - prices[0];

  auto current{prices[0]}, profit{0};

  for (size_t i = 1; i < prices.size(); ++i) {
    if (current <= prices[i]) {
      profit += prices[i] - current;
    }

    current = prices[i];
  }

  return profit;
}

}


#endif // BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H_