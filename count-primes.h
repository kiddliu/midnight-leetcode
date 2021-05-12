#ifndef COUNT_PRIMES_H_
#define COUNT_PRIMES_H_

#include <algorithm>
#include <vector>

namespace solution {

int countPrimes(int n) {
  if (n < 2) return 0;

  // Sieve of Eratosthenes
  // Runtime: 124 ms, faster than 30.82% of C++ online submissions for Count Primes.
  // Memory Usage: 7 MB, less than 63.27% of C++ online submissions for Count Primes.
  //
  std::vector<bool> flag(n, true);
  flag[0] = flag[1] = false;
  for (int i = 2; i * i <= n - 1; ++i) {
    if (flag[i]) {
      for (int j = i * i; j <= n - 1; j += i) {
        flag[j] = false;
      }
    }
  }

  return std::count(flag.cbegin(), flag.cend(), true);
}

}

#endif  // COUNT_PRIMES_H_
