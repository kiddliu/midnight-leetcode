#ifndef N_TH_TRIBONACCI_NUMBER_H_
#define N_TH_TRIBONACCI_NUMBER_H_

namespace solution {

int tribonacci(int n) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for N-th Tribonacci Number.
  // Memory Usage: 5.9 MB, less than 46.77% of C++ online submissions for N-th Tribonacci Number.
  //
  int results[38] = {0, 1, 1};

  for (size_t i = 3; i <= n; ++i) {
    results[i] = results[i - 1] + results[i - 2] + results[i - 3];
  }
  return results[n];
}


}

#endif  // N_TH_TRIBONACCI_NUMBER_H_
