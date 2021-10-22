#ifndef LONGER_CONTIGUOUS_SEGMENTS_OF_ONES_THAN_ZEROS_H_
#define LONGER_CONTIGUOUS_SEGMENTS_OF_ONES_THAN_ZEROS_H_

#include <string>

namespace solution {

bool checkZeroOnes(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Longer Contiguous Segments of Ones than Zeros.
  // Memory Usage: 6 MB, less than 79.15% of C++ online submissions for Longer Contiguous Segments of Ones than Zeros.
  //
  auto last{s[0]};
  auto count{1}, max0{0}, max1{0};

  for (auto i = 1; i < s.size(); ++i) {
    if (s[i] == last) {
      ++count;
    } else {
      if (last == '0') {
        max0 = std::max(max0, count);
        last = '1';
      } else {
        max1 = std::max(max1, count);
        last = '0';
      }
      count = 1;
    }
  }
  if (last == '0') {
    max0 = std::max(max0, count);
  } else {
    max1 = std::max(max1, count);
  }
  return max1 > max0;
}

}

#endif  // LONGER_CONTIGUOUS_SEGMENTS_OF_ONES_THAN_ZEROS_H_
