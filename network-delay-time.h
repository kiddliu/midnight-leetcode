#ifndef NETWORK_DELAY_TIME_H_
#define NETWORK_DELAY_TIME_H_

#include <algorithm>
#include <unordered_set>
#include <vector>

namespace solution {

int networkDelayTime(std::vector<std::vector<int>>& times, int n, int k) {
  // I don't know it's Bellman Ford...
  // Runtime: 131 ms, faster than 79.94% of C++ online submissions for Network Delay Time.
  // Memory Usage: 36.5 MB, less than 99.65% of C++ online submissions for Network Delay Time.
  //
  std::vector<int> time(n + 1, INT_MAX);
  time[0] = 0, time[k] = 0;

  while (true) {
    auto last{time};

    for (auto& t : times) {
      if (time[t[0]] != INT_MAX) {
        time[t[1]] = std::min(time[t[1]], time[t[0]] + t[2]);
      }
    }

    if (last == time) break;
  }

  auto max{*std::max_element(time.cbegin(), time.cend())};
  return max == INT_MAX ? -1 : max;
}

}

#endif  // NETWORK_DELAY_TIME_H_
