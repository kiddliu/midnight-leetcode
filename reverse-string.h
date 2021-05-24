#ifndef REVERSE_STRING_H_
#define REVERSE_STRING_H_

#include <vector>

namespace solution {

void reverseString(std::vector<char>& s) {
  // two iterators
  // Runtime: 24 ms, faster than 42.12% of C++ online submissions for Reverse String.
  // Memory Usage: 23.1 MB, less than 70.32% of C++ online submissions for Reverse String.
  //
  if (s.size() == 1) return;

  auto begin = s.begin(), end = s.end() - 1;
  while (begin < end) {
    std::iter_swap(begin++, end--);
  }
}

}

#endif  // REVERSE_STRING_H_
