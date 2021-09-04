#ifndef COUNT_LARGEST_GROUP_H_
#define COUNT_LARGEST_GROUP_H_

#include <algorithm>
#include <array>

namespace solution {

int countLargestGroup(int n) {
  // distracted...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Largest Group.
  // Memory Usage: 6 MB, less than 64.32% of C++ online submissions for Count Largest Group.
  //
  std::array<int, 36> arr;
  auto max{0};

  auto num{1};
  while (num <= n) {
    auto t{num++}, sum{0};

    while (t > 0) {
      sum += t % 10;
      t /= 10;
    }
    ++arr[sum - 1];
    max = std::max(max, arr[sum - 1]);
  }

  return std::count(arr.cbegin(), arr.cend(), max);
}


}

#endif  // COUNT_LARGEST_GROUP_H_
