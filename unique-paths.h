#ifndef UNIQUE_PATHS_H_
#define UNIQUE_PATHS_H_

namespace solution {

unsigned long long nChoosek(unsigned n, unsigned k) {
  if (k > n) return 0;
  if (k * 2 > n) k = n - k;
  if (k == 0) return 1;

  unsigned long long result = n;
  for (int i = 2; i <= k; ++i) {
    result *= (n - i + 1);
    result /= i;
  }
  return result;
}

int uniquePaths(int m, int n) {
  // it's DP, and the result is also a combination number
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths.
  // Memory Usage: 6 MB, less than 70.36% of C++ online submissions for Unique Paths.
  //
  return nChoosek(m - 1 + n - 1, n - 1);
};

}

#endif  // UNIQUE_PATHS_H_
