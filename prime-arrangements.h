#ifndef PRIME_ARRANGEMENTS_H_
#define PRIME_ARRANGEMENTS_H_

#include <algorithm>
#include <vector>

namespace solution {

int numPrimeArrangements(int n) {
  int non[101]{0};
  int cnt[2]{0, 1};
  long res = 1;
  for (int i = 2; i <= n; i++) {
    if (non[i] == 0)
      for (int m = i * i; m <= n; m += i) non[m] = 1;
    res = res * ++cnt[non[i]] % 1000000007;
  }
  return (int)res;
}

}

#endif  // PRIME_ARRANGEMENTS_H_
