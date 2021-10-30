#ifndef FIND_GREATEST_COMMON_DIVISOR_OF_ARRAY_H_
#define FIND_GREATEST_COMMON_DIVISOR_OF_ARRAY_H_

#include <numeric>
#include <vector>

namespace solution {

int findGCD(std::vector<int>& nums) {
  // what's the point of this?
  // Runtime: 4 ms, faster than 91.09% of C++ online submissions for Find Greatest Common Divisor of Array.
  // Memory Usage: 12.5 MB, less than 63.54% of C++ online submissions for Find Greatest Common Divisor of Array.
  //
  auto min{INT_MAX}, max {INT_MIN};

  for (auto& n : nums) {
    min = std::min(min, n);
    max = std::max(max, n);
  }

  return std::gcd(min, max);
}

}

#endif  // FIND_GREATEST_COMMON_DIVISOR_OF_ARRAY_H_
