#ifndef MAX_CONSECUTIVE_ONES_H_
#define MAX_CONSECUTIVE_ONES_H_

#include <algorithm>
#include <vector>

namespace solution {

int findMaxConsecutiveOnes(std::vector<int>& nums) {
  // naive
  // Runtime: 52 ms, faster than 11.56% of C++ online submissions for Max Consecutive Ones.
  // Memory Usage: 36.1 MB, less than 65.11% of C++ online submissions for Max Consecutive Ones.
  //
  auto p = nums.cbegin(), e = nums.cend();

  auto result{-1}, count{0};
  while (p != e) {
    if (*p == 0) {
      result = std::max(result, count);
      count = 0;
    } else {
      ++count;
    }
    ++p;
  }
  return std::max(result, count);
}

}


#endif  // MAX_CONSECUTIVE_ONES_H_
