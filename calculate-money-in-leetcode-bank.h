#ifndef CALCULATE_MONEY_IN_LEETCODE_BANK_H_
#define CALCULATE_MONEY_IN_LEETCODE_BANK_H_

#include <array>

namespace solution {

int totalMoney(int n) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Calculate Money in Leetcode Bank.
  // Memory Usage: 6 MB, less than 27.17% of C++ online submissions for Calculate Money in Leetcode Bank.
  //
  std::array<int, 7> sum{0, 1, 3, 6, 10, 15, 21};
  auto round{n / 7}, offset{n % 7}, extra{0};
  if (round > 0) {
    extra = ((round - 1) * round / 2) * 7 + offset * round;
  }
  return round * 28 + sum[offset] + extra;
}

}

#endif  // !CALCULATE_MONEY_IN_LEETCODE_BANK_H_
