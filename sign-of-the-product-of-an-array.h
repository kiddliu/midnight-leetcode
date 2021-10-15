#ifndef SIGN_OF_THE_PRODUCT_OF_AN_ARRAY_H_
#define SIGN_OF_THE_PRODUCT_OF_AN_ARRAY_H_

#include <vector>

namespace solution {

int arraySign(std::vector<int>& nums) {
  // straight forward
  // Runtime: 3 ms, faster than 94.15% of C++ online submissions for Sign of the Product of an Array.
  // Memory Usage: 10.3 MB, less than 43.87% of C++ online submissions for Sign of the Product of an Array.
  //
  auto result{1};
  for (const auto& n : nums) {
    if (n == 0) return 0;
    if (n < 0) {
      result *= -1;
    }
  }
  return result;
}

}

#endif  // SIGN_OF_THE_PRODUCT_OF_AN_ARRAY_H_
