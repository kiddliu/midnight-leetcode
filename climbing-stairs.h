#ifndef CLIMBING_STAIRS_H_
#define CLIMBING_STAIRS_H_

namespace solution {

int climbStairs(int n) {
  // Dynamic programming => Fibonacci numbers
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
  // Memory Usage: 5.8 MB, less than 96.40% of C++ online submissions for Climbing Stairs.
  // 
  if (n == 1) return 1;

  auto m1(1), m2(2);
  for (int i = 3; i <= n; ++i) {
    auto m3 = m1 + m2;
    m1 = m2;
    m2 = m3;
  }

  return m2;
}

}

#endif  // CLIMBING_STAIRS_H_
