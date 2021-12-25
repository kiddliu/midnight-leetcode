#ifndef BASIC_CALCULAOR_II_H_
#define BASIC_CALCULAOR_II_H_

#include <string>

namespace solution {

bool issign(char c) { return c == '+' || c == '-' || c == '*' || c == '/'; }

int calculate(std::string s) {
  // without stack
  // Runtime: 4 ms, faster than 98.87% of C++ online submissions for Basic Calculator II.
  // Memory Usage: 7.8 MB, less than 86.50% of C++ online submissions for Basic Calculator II.
  //
  auto result{0}, last{0}, current{0};
  auto sign = '+';

  for (size_t i = 0; i < s.size(); ++i) {
    if (std::isdigit(s[i])) {
      current = current * 10 + s[i] - '0';
    } 
    if (issign(s[i]) || i == s.size() - 1) {
      if (sign == '+' || sign == '-') {
        result += last;
        last = sign == '+' ? current : -current;
      } else if (sign == '*') {
        last *= current;
      } else if (sign == '/') {
        last /= current;
      }
      sign = s[i];
      current = 0;
    }
  }

  result += last;
  return result;
}

}  // namespace solution

#endif  // BASIC_CALCULAOR_II_H_
