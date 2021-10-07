#ifndef MAXIMUM_NUMBER_OF_BALLS_IN_A_BOX_H_
#define MAXIMUM_NUMBER_OF_BALLS_IN_A_BOX_H_

#include <array>
#include <algorithm>

namespace solution {

int countBalls(int lowLimit, int highLimit) {
  // brute force
  // Runtime: 8 ms, faster than 90.04% of C++ online submissions for Maximum Number of Balls in a Box.
  // Memory Usage: 5.9 MB, less than 83.08% of C++ online submissions for Maximum Number of Balls in a Box.
  //
  std::array<int, 45> buckets{};

  for (auto i = lowLimit; i <= highLimit; ++i) {
    int sum = 0, n = i;
    while (n) {
      sum += n % 10;
      n /= 10;
    }
    ++buckets[sum - 1];
  }
  return *std::max_element(std::begin(buckets), std::end(buckets));


}

}

#endif  // !MAXIMUM_NUMBER_OF_BALLS_IN_A_BOX_H_
