#ifndef ARRANGING_COINS_H_
#define ARRANGING_COINS_H_

#include <cmath>

namespace solution {

int arrangeCoins(int n) {
  // math
  // Runtime: 8 ms, faster than 44.74% of C++ online submissions for Arranging Coins.
  // Memory Usage: 5.8 MB, less than 65.53% of C++ online submissions for Arranging Coins.
  //
  if (n == 1) return 1;

  auto u = static_cast<long long>(std::sqrt(2ll * n));
  return u * (u + 1) > n * 2ll ? u - 1 : u;
}

}

#endif  // ARRANGING_COINS_H_
