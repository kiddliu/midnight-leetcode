#ifndef DISTANCE_BETWEEN_BUS_STOPS_H_
#define DISTANCE_BETWEEN_BUS_STOPS_H_

#include <numeric>
#include <vector>

namespace solution {

int distanceBetweenBusStops(std::vector<int>& d, int start, int destination) {
  // how to refine your solution to be clear and elegant?
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Distance Between Bus Stops.
  // Memory Usage: 8.8 MB, less than 44.51% of C++ online submissions for Distance Between Bus Stops.
  //
  if (start > destination) std::swap(start, destination);
  auto sum1{0}, sum2{0};

  for (size_t i = 0; i < d.size(); ++i) {
    if (i >= start && i < destination) {
      sum1 += d[i];
    } else {
      sum2 += d[i];
    }
  }

  return std::min(sum1, sum2);
}

}

#endif  // DISTANCE_BETWEEN_BUS_STOPS_H_
