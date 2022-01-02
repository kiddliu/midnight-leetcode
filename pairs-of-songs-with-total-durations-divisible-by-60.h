#ifndef PAIRS_OF_SONGS_WITH_TOTAL_DURATIONS_DIVISIBLE_BY_60_H_
#define PAIRS_OF_SONGS_WITH_TOTAL_DURATIONS_DIVISIBLE_BY_60_H_

#include <array>
#include <vector>

namespace solution {

int numPairsDivisibleBy60(std::vector<int>& time) {
  // one loop
  // Runtime: 16 ms, faster than 99.59% of C++ online submissions for Pairs of Songs With Total Durations Divisible by 60.
  // Memory Usage: 23.2 MB, less than 24.51% of C++ online submissions for Pairs of Songs With Total Durations Divisible by 60.
  //
  auto result{0};
  std::array<int, 60> arr {0};

  for (auto& t : time) {
    result += arr[(600 - t) % 60];
    ++arr[t % 60];
  }

  return result;
}

}

#endif  // !PAIRS_OF_SONGS_WITH_TOTAL_DURATIONS_DIVISIBLE_BY_60_H_
