#ifndef MAXIMUM_PRODUCT_OF_TWO_ELEMENTS_IN_AN_ARRAY_H_
#define MAXIMUM_PRODUCT_OF_TWO_ELEMENTS_IN_AN_ARRAY_H_

#include <vector>

namespace solution {

int maxProduct(std::vector<int>& nums) {
  // straight forward
  auto m1{0}, m2{0};
  for (const auto& n : nums) {
    if (n > m1) {
      m2 = m1;
      m1 = n;
    } else if (n > m2) {
      m2 = n;
    }
  }
  return (m1 - 1) * (m2 - 1);
}

}

#endif  // MAXIMUM_PRODUCT_OF_TWO_ELEMENTS_IN_AN_ARRAY_H_
