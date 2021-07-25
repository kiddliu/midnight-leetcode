#ifndef X_OF_A_KIND_IN_A_DECK_OF_CARDS_H_
#define X_OF_A_KIND_IN_A_DECK_OF_CARDS_H_

#include <numeric>
#include <unordered_map>
#include <vector>

namespace solution {

int gcdi(int a, int b) { return b == 0 ? a : gcdi(b, a % b); }

bool hasGroupsSizeX(std::vector<int>& deck) {
  // it feels better that i can think through all the cases
  // Runtime: 12 ms, faster than 90.54% of C++ online submissions for X of a Kind in a Deck of Cards.
  // Memory Usage: 17.5 MB, less than 20.90% of C++ online submissions for X of a Kind in a Deck of Cards.
  //
  std::unordered_map<int, int> m;
  for (const auto& card : deck) {
    ++m[card];
  }

  if (m.size() == 1) {
    std::vector<bool> flag(10001, true);
    flag[0] = flag[1] = false;
    for (int i = 2; i * i <= 10000; ++i) {
      if (flag[i]) {
        for (int j = i * i; j <= 10000; j += i) {
          flag[j] = false;
        }
      }
    }
    return !flag[m.size()];
  } else {
    auto gcd{-1};
    for (const auto& pair : m) {
      if (gcd == -1) {
        gcd = pair.second;
      } else {
        gcd = gcdi(gcd, pair.second);
        if (gcd == 1) return false;
      }
    }
    return gcd != 1;
  }
}


}

#endif  // X_OF_A_KIND_IN_A_DECK_OF_CARDS_H_
