#ifndef MAXIMUM_POINTS_YOU_CAN_OBTAIN_FROM_CARDS_H_
#define MAXIMUM_POINTS_YOU_CAN_OBTAIN_FROM_CARDS_H_

#include <numeric>
#include <vector>

namespace solution {

int maxScore(std::vector<int>& cardPoints, int k) {
  // sliding window
  // Runtime: 75 ms, faster than 73.38% of C++ online submissions for Maximum Points You Can Obtain from Cards.
  // Memory Usage: 42.4 MB, less than 48.00% of C++ online submissions for Maximum Points You Can Obtain from Cards.
  //
  int sum{std::accumulate(cardPoints.begin(), cardPoints.end() - k, 0)},
      window{sum}, min{window}, size = cardPoints.size();

  for (auto i{size - k}; i < size; ++i) {
    sum += cardPoints[i];
    window += cardPoints[i] - cardPoints[i + k - size];
    min = std::min(min, window);
  }

  return sum - min;
}

}  // namespace solution

#endif  // !MAXIMUM_POINTS_YOU_CAN_OBTAIN_FROM_CARDS_H_
