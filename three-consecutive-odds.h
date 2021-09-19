#ifndef THREE_CONSECUTIVE_ODDS_H_
#define THREE_CONSECUTIVE_ODDS_H_

#include <vector>

namespace solution {

bool threeConsecutiveOdds(std::vector<int>& arr) {
  // brute force
  // Runtime: 3 ms, faster than 75.21% of C++ online submissions for Three Consecutive Odds.
  // Memory Usage: 8.3 MB, less than 58.26% of C++ online submissions for Three Consecutive Odds.
  //
  auto odds{0};
  for (auto i = 0; i < arr.size() && odds < 3; ++i) {
    odds = arr[i] % 2 ? odds + 1 : 0;
  }
  return odds == 3;
}

}

#endif  // THREE_CONSECUTIVE_ODDS_H_
