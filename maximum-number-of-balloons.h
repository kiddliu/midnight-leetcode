#ifndef MAXIMUM_NUMBER_OF_BALLOONS_H_
#define MAXIMUM_NUMBER_OF_BALLOONS_H_

#include <array>
#include <string>

namespace solution {

int maxNumberOfBalloons(std::string text) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Number of Balloons.
  // Memory Usage: 6.5 MB, less than 98.37% of C++ online submissions for Maximum Number of Balloons.
  //
  std::array<int, 26> a = {0};
  for (const auto& c : text) {
    ++a[c - 'a'];
  }

  auto result{INT_MAX};
  for (const auto& c : std::string("abn")) {
    result = std::min(a[c - 'a'], result);
    if (result == 0) return 0;
  }

  for (const auto& c : std::string("lo")) {
    result = std::min(a[c - 'a'] / 2, result);
    if (result == 0) return 0;
  }

  return result;
}



}


#endif  // MAXIMUM_NUMBER_OF_BALLOONS_H_
