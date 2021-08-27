#ifndef MAXIMUM_69_NUMBER_H_
#define MAXIMUM_69_NUMBER_H_

#include <array>
#include <cmath>

namespace solution {

int maximum69Number(int num) {
  // straight forward
  // Runtime: 5 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
  // Memory Usage: 6.2 MB, less than 18.01% of C++ online submissions for Maximum 69 Number.
  //
  std::array<int, 4> numbers = {0};

  auto i{3};
  while (num > 0) {
    numbers[i--] = num % 10;
    num /= 10;
  }

  auto result{0};
  auto changed{false};
  for (++i; i < numbers.size(); ++i) {
    if (!changed && numbers[i] == 6) {
      numbers[i] = 9;
      changed = true;
    }
    result += numbers[i] * std::pow(10, 3 - i);
  }
  return result;
}


}


#endif  // MAXIMUM_69_NUMBER_H_
