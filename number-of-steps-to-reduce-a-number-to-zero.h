#ifndef NUMBER_OF_STEPS_TO_REDUCE_A_NUMBER_TO_ZERO_H_
#define NUMBER_OF_STEPS_TO_REDUCE_A_NUMBER_TO_ZERO_H_

namespace solution {

int numberOfSteps(int num) {
  // straight forward
  // bit operation would be better
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
  // Memory Usage: 5.9 MB, less than 25.04% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
  //
  auto result{0};
  while (num != 0) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      num -= 1;
    }
    ++result;
  }

  return result;
}


}


#endif  // NUMBER_OF_STEPS_TO_REDUCE_A_NUMBER_TO_ZERO_H_
