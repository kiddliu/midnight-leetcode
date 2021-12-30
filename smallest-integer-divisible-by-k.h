#ifndef SMALLEST_INTEGER_DIVISIBLE_BY_K_H_
#define SMALLEST_INTEGER_DIVISIBLE_BY_K_H_

namespace solution {

int smallestRepunitDivByK(int k) {
  // should be an easy-level problem
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Smallest Integer Divisible by K.
  // Memory Usage: 6 MB, less than 46.22% of C++ online submissions for Smallest Integer Divisible by K.
  //
  if (k % 2 == 0 || k % 5 == 0) return -1;

  auto result{2}, number{11};
  while (number % k != 0) {
    if (number < k) {
      number = number * 10 + 1;
    } else {
      number = number % k * 10 + 1;
    }
    ++result;
  }
  return result;
}

}

#endif  // !SMALLEST_INTEGER_DIVISIBLE_BY_K_H_
