#ifndef THREE_DIVISOR_H_
#define THREE_DIVISOR_H_

#include <unordered_set>

namespace solution {

bool isThree(int n) {
  // square of prime
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Three Divisors.
  // Memory Usage: 6.3 MB, less than 5.21% of C++ online submissions for Three Divisors.
  //
  std::unordered_set<int> s{4,    9,    25,   49,   121,  169,  289,
                            361,  529,  841,  961,  1369, 1681, 1849,
                            2209, 2809, 3481, 3721, 4489, 5041, 5329,
                            6241, 6889, 7921, 9409};
  return s.count(n);
}

}

#endif  // THREE_DIVISOR_H_
