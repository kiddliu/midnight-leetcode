#ifndef FIBONACCI_NUMBER_H_
#define FIBONACCI_NUMBER_H_

namespace solution {

int fib(int n) {
  // naive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
  // Memory Usage: 5.9 MB, less than 32.22% of C++ online submissions for Fibonacci Number.
  //
  int f[31]{0, 1}, i{2};

  while (i <= n) {
    f[i++] = f[i - 2] + f[i - 1];
  }

  return f[n];
}

}

#endif  // FIBONACCI_NUMBER_H_
