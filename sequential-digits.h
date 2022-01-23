#ifndef SEQUENTIAL_DIGITS_H_
#define SEQUENTIAL_DIGITS_H_

#include <algorithm>
#include <vector>

namespace solution {

std::vector<int> sequentialDigits(int low, int high) {
  // cheating...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sequential Digits.
  // Memory Usage: 6.2 MB, less than 76.43% of C++ online submissions for Sequential Digits.
  //
  std::vector<int> list{
      12,      23,       34,       45,       56,     67,     78,      89,
      123,     234,      345,      456,      567,    678,    789,     1234,
      2345,    3456,     4567,     5678,     6789,   12345,  23456,   34567,
      45678,   56789,    123456,   234567,   345678, 456789, 1234567, 2345678,
      3456789, 12345678, 23456789, 123456789};

  return std::vector<int>{std::lower_bound(list.cbegin(), list.cend(), low),
                          std::upper_bound(list.cbegin(), list.cend(), high)};
}

}


#endif  // !SEQUENTIAL_DIGITS_H_
