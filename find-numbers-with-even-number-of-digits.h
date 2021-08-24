#ifndef FIND_NUMBERS_WITH_EVEN_NUMBER_OF_DIGITS_H_
#define FIND_NUMBERS_WITH_EVEN_NUMBER_OF_DIGITS_H_

#include <vector>

namespace solution {

int findNumbers(std::vector<int>& nums) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.
  // Memory Usage: 9.9 MB, less than 45.14% of C++ online submissions for Find Numbers with Even Number of Digits.
  //
  auto result{0};

  for (const auto& n : nums) {
    if ((n > 9 && n < 100) || (n > 999 && n < 10000) || n == 100000) {
      ++result;
    }
  }

  return result;
}


}


#endif  // FIND_NUMBERS_WITH_EVEN_NUMBER_OF_DIGITS_H_
