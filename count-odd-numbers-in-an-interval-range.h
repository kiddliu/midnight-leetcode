#ifndef COUNT_ODD_NUMBERS_IN_AN_INTERVAL_RANGE_H_
#define COUNT_ODD_NUMBERS_IN_AN_INTERVAL_RANGE_H_

namespace solution {

int countOdds(int low, int high) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Count Odd Numbers in an Interval Range.
  // Memory Usage: 6 MB, less than 25.11% of C++ online submissions for Count Odd Numbers in an Interval Range.
  //
  return (high - low) / 2 + (low % 2 == 1 || high % 2 == 1);
}

}

#endif  // COUNT_ODD_NUMBERS_IN_AN_INTERVAL_RANGE_H_
