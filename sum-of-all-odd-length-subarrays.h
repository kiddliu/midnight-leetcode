#ifndef SUM_OF_ALL_ODD_LENGTH_SUBARRAYS_H_
#define SUM_OF_ALL_ODD_LENGTH_SUBARRAYS_H_

#include <algorithm>
#include <numeric>
#include <vector>

namespace solution {

int sumOddLengthSubarrays(std::vector<int>& arr) {
  // brute force
  // Runtime: 8 ms, faster than 26.97% of C++ online submissions for Sum of All Odd Length Subarrays.
  // Memory Usage: 8.4 MB, less than 41.25% of C++ online submissions for Sum of All Odd Length Subarrays.
  //
  std::vector<int> v(arr.size(), 1);
  auto size{3};

  while (size <= arr.size()) {
    for (auto i = 0; i <= arr.size() - size; ++i) {
      for (auto j = 0; j < size; ++j) {
        ++v[i + j];
      }
    }
    size += 2;
  }

  auto result{0};
  for (auto i = 0; i < v.size(); ++i) {
    result += arr[i] * v[i];
  }
  return result;
}


}

#endif  // !SUM_OF_ALL_ODD_LENGTH_SUBARRAYS_H_
