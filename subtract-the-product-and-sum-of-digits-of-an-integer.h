#ifndef SUBTRACT_THE_PRODUCT_AND_SUM_OF_DIGITS_OF_AN_INTEGER_H_
#define SUBTRACT_THE_PRODUCT_AND_SUM_OF_DIGITS_OF_AN_INTEGER_H_

#include <cmath>

namespace solution {

int subtractProductAndSum(int n) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
  // Memory Usage: 5.8 MB, less than 70.27% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
  //
  auto sum{0}, product{1};
  while (n > 0) {
    auto d = n % 10;
    sum += d;
    product *= d;
    n /= 10;
  }

  return product - sum;
}

}

#endif  // SUBTRACT_THE_PRODUCT_AND_SUM_OF_DIGITS_OF_AN_INTEGER_H_
