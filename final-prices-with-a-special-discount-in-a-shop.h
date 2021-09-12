#ifndef FINAL_PRICES_WITH_A_SPECIAL_DISCOUNT_IN_A_SHOP_H_
#define FINAL_PRICES_WITH_A_SPECIAL_DISCOUNT_IN_A_SHOP_H_

#include <vector>

namespace solution {

std::vector<int> finalPrices(std::vector<int>& prices) {
  // straight forward, can use stack to apply discount if a lower price is found
  // Runtime: 3 ms, faster than 87.03% of C++ online submissions for Final Prices With a Special Discount in a Shop.
  // Memory Usage: 9.8 MB, less than 95.96% of C++ online submissions for Final Prices With a Special Discount in a Shop.
  //
  for (size_t i = 0; i < prices.size() - 1; ++i) {
    auto first{
        std::find_if(prices.cbegin() + i + 1, prices.cend(),
                     [&prices, &i](const int& n) { return n <= prices[i]; })};
    prices[i] -= first == prices.cend() ? 0 : *first;
  }
  return prices;
}

}

#endif  // FINAL_PRICES_WITH_A_SPECIAL_DISCOUNT_IN_A_SHOP_H_
