#ifndef FIZZ_BUZZ_H_
#define FIZZ_BUZZ_H_

#include <string>
#include <vector>

namespace solution {

std::vector<std::string> fizzBuzz(int n) {
  // naive, should use hashset
  // Runtime: 4 ms, faster than 75.36% of C++ online submissions for Fizz Buzz.
  // Memory Usage: 7.9 MB, less than 6.34% of C++ online submissions for Fizz Buzz.
  //
  std::vector<std::string> result;

  for (int i = 1; i <= n; ++i) {
    if (i % 5 == 0) {
      if (i % 3 == 0) {
        result.push_back("FizzBuzz");
      } else {
        result.push_back("Buzz");
      }
    } else if (i % 3 == 0) {
      result.push_back("Fizz");
    } else {
      result.push_back(std::to_string(i));
    }
  }

  return result;
}

}

#endif  // FIZZ_BUZZ_H_
