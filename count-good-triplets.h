#ifndef COUNT_GOOD_TRIPLETS_H_
#define COUNT_GOOD_TRIPLETS_H_

#include <numeric>
#include <vector>

namespace solution {

int countGoodTriplets(std::vector<int>& arr, int a, int b, int c) {
  // straight forward
  // Runtime: 24 ms, faster than 84.95% of C++ online submissions for Count Good Triplets.
  // Memory Usage: 8.1 MB, less than 73.59% of C++ online submissions for Count Good Triplets.
  //
  auto result{0};

  for (size_t i = 0; i < arr.size() - 2; ++i) {
    for (size_t j = 0; j < arr.size() - 1; ++j) {
      if (std::abs(arr[i] - arr[j]) > a) continue;
      for (size_t k = 0; k < arr.size(); ++k) {
        if (std::abs(arr[j] - arr[k]) <= b && std::abs(arr[i] - arr[k]) <= c) {
          ++result;
        }
      }
    }
  }

  return result;
}

}

#endif  // COUNT_GOOD_TRIPLETS_H_
