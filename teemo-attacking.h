#ifndef TEEMO_ATTACKING_H_
#define TEEMO_ATTACKING_H_

#include <vector>

namespace solution {

int findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
  // opposite of the naive solution, i'm deducting the wasted time off the entire duration
  // Runtime: 48 ms, faster than 27.71% of C++ online submissions for Teemo Attacking.
  // Memory Usage: 25.9 MB, less than 5.88% of C++ online submissions for Teemo Attacking.
  //
  auto result{timeSeries.size() * duration};
  auto p = timeSeries.cbegin(), e = timeSeries.cend();

  while (p + 1 != e) {
    auto diff = *(p + 1) - *p;
    if (diff < duration) {
      result -= duration - diff;
    }
    ++p;
  }

  return result;
}

}

#endif  // TEEMO_ATTACKING_H_
