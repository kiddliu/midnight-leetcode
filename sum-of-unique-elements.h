#ifndef SUM_OF_UNIQUE_ELEMENTS_H_
#define SUM_OF_UNIQUE_ELEMENTS_H_

#include <array>
#include <vector>

namespace solution {

int sumOfUnique(std::vector<int>& nums) {
  // 2 loops
  // Runtime: 4 ms, faster than 55.47% of C++ online submissions for Sum of Unique Elements.
  // Memory Usage: 7.8 MB, less than 94.06% of C++ online submissions for Sum of Unique Elements.
  //
  std::array<int, 101> array{};
  for (const auto& n : nums) {
    ++array[n];
  }
  auto sum{0};
  for (auto i = 0; i < array.size(); ++i) {
    if (array[i] == 1) sum += i;
  }
  return sum;
}

}

#endif  // !SUM_OF_UNIQUE_ELEMENTS_H_
