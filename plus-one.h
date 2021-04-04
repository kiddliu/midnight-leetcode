#ifndef PLUS_ONE_H_
#define PLUS_ONE_H_

#include <vector>

namespace solution {

std::vector<int> plusOne(std::vector<int>& digits) {
  // Brute force
  // Runtime: 4 ms, faster than 46.24% of C++ online submissions for Plus One.
  // Memory Usage: 8.8 MB, less than 52.22% of C++ online submissions for Plus One.
  //
  auto rbegin = digits.rbegin(), it = rbegin, rend = digits.rend();
  bool carry(false);

  do {
    if (it == rbegin || carry) {
      if (*it == 9) {
        *it = 0;
        carry = true;
        ++it;
      } else {
        ++(*it);
        return digits;
      }
    }
  } while (it != rend);

  if (carry) {
    digits.insert(digits.begin(), 1);
  }
  return digits;
}

}

#endif  // PLUS_ONE_H_
