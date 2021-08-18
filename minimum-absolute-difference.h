#ifndef MINIMUM_ABSOLUTE_DIFFERENCE_H_
#define MINIMUM_ABSOLUTE_DIFFERENCE_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<std::vector<int>> minimumAbsDifference(std::vector<int>& arr) {
  // straight forward
  // Runtime: 56 ms, faster than 96.41% of C++ online submissions for Minimum Absolute Difference.
  // Memory Usage: 32.1 MB, less than 75.05% of C++ online submissions for Minimum Absolute Difference.
  //
  auto diff{INT_MAX};
  std::vector<std::vector<int>> v;

  std::sort(arr.begin(), arr.end());

  for (auto i = 1; i < arr.size(); ++i) {
    auto d = arr[i] - arr[i - 1];
    if (d > diff) {
      continue;
    }
    if (d < diff) {
      v.clear();
      diff = d;
    }

    v.push_back({arr[i - 1], arr[i]});
  }

  return v;
}


}


#endif  // MINIMUM_ABSOLUTE_DIFFERENCE_H_
