#ifndef FIND_THE_DISTANCE_VALUE_BETWEEN_TWO_ARRAYS_H_
#define FIND_THE_DISTANCE_VALUE_BETWEEN_TWO_ARRAYS_H_

#include <algorithm>
#include <vector>

namespace solution {

int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
  // straight forward, with binary search
  // Runtime: 12 ms, faster than 57.66% of C++ online submissions for Find the Distance Value Between Two Arrays.
  // Memory Usage: 13.2 MB, less than 29.92% of C++ online submissions for Find the Distance Value Between Two Arrays.
  // 
  auto result{0};

  std::sort(arr2.begin(), arr2.end());

  for (const auto& n : arr1) {
    result += std::lower_bound(arr2.cbegin(), arr2.cend(), n - d) ==
              std::upper_bound(arr2.cbegin(), arr2.cend(), n + d);
  }

  return result;
}

}

#endif  // FIND_THE_DISTANCE_VALUE_BETWEEN_TWO_ARRAYS_H_
