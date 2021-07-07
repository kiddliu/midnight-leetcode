#ifndef FIND_SMALLEST_LETTER_GREATER_THAN_TARGET_H_
#define FIND_SMALLEST_LETTER_GREATER_THAN_TARGET_H_

#include <vector>

namespace solution {

char nextGreatestLetter(std::vector<char>& letters, char target) {
  // direct
  // Runtime: 12 ms, faster than 88.40% of C++ online submissions for Find Smallest Letter Greater Than Target.
  // Memory Usage: 15.9 MB, less than 67.41% of C++ online submissions for Find Smallest Letter Greater Than Target.
  //
  for (const auto& c : letters) {
    if (target < c) return c;
  }
  return letters[0];
}

}

#endif  // FIND_SMALLEST_LETTER_GREATER_THAN_TARGET_H_
