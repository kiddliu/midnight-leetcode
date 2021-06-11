#ifndef PERFECT_NUMBER_H_
#define PERFECT_NUMBER_H_

namespace solution {

bool checkPerfectNumber(int num) {
  // actually, it's a math problem, only 6, 28, 496, 8128, 33550336 smaller than INT_MAX
  // Runtime: 0 ms
  // Memory Usage : 5.9 MB
  //
  if (num == 1) return true;

  auto sum{1}, d{2}, n{num};
  while (d <= num / d) {
    if (num % d == 0) {
      n = num / d;
      sum += d + (n == d ? 0 : n);
    }
    ++d;
  }

  return sum == num;
}

}

#endif  // PERFECT_NUMBER_H_
