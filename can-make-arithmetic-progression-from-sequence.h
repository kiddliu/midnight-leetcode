#ifndef CAN_MAKE_ARITHMETIC_PROGRESSION_FROM_SEQUENCE_H_
#define CAN_MAKE_ARITHMETIC_PROGRESSION_FROM_SEQUENCE_H_

#include <set>
#include <vector>

namespace solution {

bool canMakeArithmeticProgression(std::vector<int>& arr) {
  // straight forward
  // Runtime: 4 ms, faster than 62.28% of C++ online submissions for Can Make Arithmetic Progression From Sequence.
  // Memory Usage: 9.8 MB, less than 5.15% of C++ online submissions for Can Make Arithmetic Progression From Sequence.
  //
  if (arr.size() == 2) return true;

  std::set<int> s{arr.cbegin(), arr.cend()};
  if (s.size() < arr.size()) return s.size() == 1;

  auto p = s.cbegin(), e = s.cend();
  auto diff = *std::next(p) - *p;
  ++p;
  while (std::next(p) != e) {
    if (diff != *std::next(p) - *p) return false;
    ++p;
  }
  return true;
}

}

#endif  // CAN_MAKE_ARITHMETIC_PROGRESSION_FROM_SEQUENCE_H_
