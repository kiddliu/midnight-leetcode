#ifndef ADD_TO_ARRAY_FORM_OF_INTEGER_H_
#define ADD_TO_ARRAY_FORM_OF_INTEGER_H_

#include <vector>

namespace solution {

std::vector<int> addToArrayForm(std::vector<int>& num, int k) {
  // direct
  // Runtime: 24 ms, faster than 79.31% of C++ online submissions for Add to Array-Form of Integer.
  // Memory Usage: 27.3 MB, less than 94.38% of C++ online submissions for Add to Array-Form of Integer.
  //
  int carry{0}, p = num.size() - 1;
  while (k > 0 || carry) {
    auto n = k % 10, result = n + (p > -1 ? num[p] : 0) + carry;
    carry = result > 9;
    if (carry) result -= 10;
    if (p > -1) {
      num[p--] = result;
    } else {
      num.insert(num.begin(), result);
    }

    k = k / 10;
  }

  return num;
}

}

#endif  // ADD_TO_ARRAY_FORM_OF_INTEGER_H_
