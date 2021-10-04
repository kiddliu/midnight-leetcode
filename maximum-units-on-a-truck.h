#ifndef MAXIMUM_UNITS_ON_A_TRUCK_H_
#define MAXIMUM_UNITS_ON_A_TRUCK_H_

#include <algorithm>
#include <vector>

namespace solution {

int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize) {
  // greedy
  // Runtime: 61 ms, faster than 43.44% of C++ online submissions for Maximum Units on a Truck.
  // Memory Usage: 15.9 MB, less than 95.21% of C++ online submissions for Maximum Units on a Truck.
  //
  std::sort(
      boxTypes.begin(), boxTypes.end(),
      [](const std::vector<int>& boxTypeA, const std::vector<int>& boxTypeB) {
        return boxTypeA[1] > boxTypeB[1];
      });

  auto units{0};
  for (const auto& boxType : boxTypes) {
    if (truckSize != 0) {
      auto n = std::min(boxType[0], truckSize);
      units += n * boxType[1];
      truckSize -= n;
    } else {
      break;
    }
  }
  return units;
}

}

#endif  // !MAXIMUM_UNITS_ON_A_TRUCK_H_
