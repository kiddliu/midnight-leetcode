#ifndef HOW_MANY_NUMBERS_ARE_SMALLER_THAN_THE_CURRENT_NUMBER_H_
#define HOW_MANY_NUMBERS_ARE_SMALLER_THAN_THE_CURRENT_NUMBER_H_

#include <algorithm>
#include <array>
#include <vector>

namespace solution {

std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
  // straight forward
  // Runtime: 15 ms, faster than 53.72% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
  // Memory Usage: 10.3 MB, less than 25.03% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
  //
  //std::vector<int> sorted{nums}, result;
  //std::sort(sorted.begin(), sorted.end());

  //for (const auto& i : nums) {
  //  result.push_back(std::lower_bound(sorted.cbegin(), sorted.cend(), i) -
  //                   sorted.cbegin());
  //}
  //return result;

  // with bucket
  // Runtime: 8 ms, faster than 74.99% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
  // Memory Usage: 10.3 MB, less than 37.83% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
  //
  std::array<int, 101> a = {0};
  for (const auto& i : nums) {
    ++a[i];
  }
  for (size_t i = 1; i < a.size(); ++i) {
    a[i] += a[i - 1];
  }
  std::vector<int> v;
  for (const auto& i : nums) {
    v.push_back(i == 0 ? 0 : a[i]);
  }
  return v;
}

}

#endif  // HOW_MANY_NUMBERS_ARE_SMALLER_THAN_THE_CURRENT_NUMBER_H_
