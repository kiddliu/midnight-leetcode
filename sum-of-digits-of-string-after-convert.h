#ifndef SUM_OF_DIGITS_OF_STRING_AFTER_CONVERT_H_
#define SUM_OF_DIGITS_OF_STRING_AFTER_CONVERT_H_

#include <numeric>
#include <string>

namespace solution {

int getLucky(std::string s, int k) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Digits of String After Convert.
  // Memory Usage: 6.3 MB, less than 53.74% of C++ online submissions for Sum of Digits of String After Convert. 
  //
  std::string converted;
  for (auto& c : s) {
    converted.append(std::to_string(c - 'a' + 1));
  }

  auto temp{0};
  for (auto& d : converted) {
    temp += d - '0';
  }

  
  while (--k != 0 && temp > 9) {
    auto n{0};
    std::swap(n, temp);
    
    while (n != 0) {
      temp += n % 10;
      n /= 10;
    }
  }
  return temp;
}

}

#endif  // SUM_OF_DIGITS_OF_STRING_AFTER_CONVERT_H_
