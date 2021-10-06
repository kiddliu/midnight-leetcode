#ifndef FIND_THE_HIGHEST_ALTITUDE_H_
#define FIND_THE_HIGHEST_ALTITUDE_H_

#include <vector>

namespace solution {

int largestAltitude(std::vector<int>& gain) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find the Highest Altitude.
  // Memory Usage: 7.9 MB, less than 95.53% of C++ online submissions for Find the Highest Altitude.
  //
  auto max{0}, altitude{0};
  for (const auto& g : gain) {    ;
    max = std::max(max, altitude += g);
  }
  return max;
}

}

#endif  // !FIND_THE_HIGHEST_ALTITUDE_H_
