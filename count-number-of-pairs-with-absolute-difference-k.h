#ifndef COUNT_NUMBER_OF_PAIRS_WITH_ABSOLUTE_DIFFERENCE_K_H_
#define COUNT_NUMBER_OF_PAIRS_WITH_ABSOLUTE_DIFFERENCE_K_H_

#include <array>
#include <vector>

namespace solution {

int countKDifference(std::vector<int>& nums, int k) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Number of Pairs With Absolute Difference K.
  // Memory Usage: 12.4 MB, less than 32.76% of C++ online submissions for Count Number of Pairs With Absolute Difference K.
  //
  std::array<int, 100> a{};

  for (auto& n : nums) {
    ++a[n - 1];
  }

  auto result{0};
  for (int i = k + 1; i < 101; ++i) {
    result += a[i] * a[i - k];
  }
  return result;
}

}

#endif  // COUNT_NUMBER_OF_PAIRS_WITH_ABSOLUTE_DIFFERENCE_K_H_
