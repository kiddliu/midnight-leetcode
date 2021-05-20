#ifndef UGLY_NUMBER_H_
#define UGLY_NUMBER_H_

#include <vector>

namespace solution {

bool isUgly(int n) {
  // by definition
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Ugly
  // Number. Memory Usage: 6 MB, less than 13.49% of C++ online submissions for
  // Ugly Number.
  //
  if (n < 1) return false;
  if (n == 1) return true;

  for (auto& i : std::vector<int>{2, 3, 5}) {
    while (n % i == 0) {
      n /= i;
    }
  }

  return n == 1;
}

}

#endif  // UGLY_NUMBER_H_
