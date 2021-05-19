#ifndef ADD_DIGITS_H_
#define ADD_DIGITS_H_

namespace solution {

int addDigits(int num) { 
  // brute force, however it's called 'digital root', and the result is mod 9.
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Digits.
  // Memory Usage: 5.9 MB, less than 18.71% of C++ online submissions for Add Digits.
  // 
  while (num >= 10) {
    auto result{0};
    while (num > 0) {
      result += num % 10;
      num /= 10;
    }
    num = result;
  }
  return num;
}

}

#endif  // ADD_DIGITS_H_
