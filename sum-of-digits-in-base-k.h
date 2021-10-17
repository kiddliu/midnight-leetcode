#ifndef SUM_OF_DIGITS_IN_BASE_K_H_
#define SUM_OF_DIGITS_IN_BASE_K_H_

namespace solution {

int sumBase(int n, int k) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Digits in Base K.
  // Memory Usage: 5.8 MB, less than 72.12% of C++ online submissions for Sum of Digits in Base K.
  //
  auto result{0};

  while (n != 0) {
    result += n % k;
    n /= k;
  }
  return result;
}

}

#endif  // SUM_OF_DIGITS_IN_BASE_K_H_
