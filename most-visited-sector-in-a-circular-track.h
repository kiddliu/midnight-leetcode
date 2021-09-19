#ifndef MOST_VISITED_SECTOR_IN_A_CIRCULAR_TRACK_H_
#define MOST_VISITED_SECTOR_IN_A_CIRCULAR_TRACK_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<int> mostVisited(int n, std::vector<int>& rounds) {
  // just care about the begin and the end and solve the 2 cases
  // Runtime: 4 ms, faster than 83.61% of C++ online submissions for Most Visited Sector in a Circular Track.
  // Memory Usage: 11.2 MB, less than 68.07% of C++ online submissions for Most Visited Sector in a Circular Track.
  //
  std::vector<int> v;
  auto begin{rounds.front()}, end{rounds.back()};
  if (begin <= end) {
    for (auto i = begin; i <= end; ++i) {
      v.push_back(i);
    }
  } else {
    for (auto i = 1; i <= end; ++i) {
      v.push_back(i);
    }

    for (auto i = begin; i <= n; ++i) {
      v.push_back(i);
    }
  }
  return v;
}

}

#endif  // !MOST_VISITED_SECTOR_IN_A_CIRCULAR_TRACK_H_
