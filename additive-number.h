#ifndef ADDITIVE_NUMBER_H_
#define ADDITIVE_NUMBER_H_

#include <string>

namespace solution {

std::string add(std::string& n1, std::string& n2) {
  std::string result;

  int i = n1.size() - 1, j = n2.size() - 1, sum{0}, carry{0};
  while (i >= 0 || j >= 0) {
    sum = carry + (i >= 0 ? n1[i--] - '0' : 0) + (j >= 0 ? n2[j--] - '0' : 0);
    carry = sum / 10;
    result.push_back(sum % 10 + '0');
  }

  if (carry) result.push_back('1');
  std::reverse(result.begin(), result.end());

  return result;
}

bool verify(std::string& n1, std::string& n2, std::string& rest) {
  if (n1.size() > 1 && n1.front() == '0' || n2.size() > 1 && n2.front() == '0')
    return false;

  auto sum = add(n1, n2);
  if (sum == rest) return true;
  if (rest.size() < sum.size() || rest.rfind(sum, 0) != 0) return false;
  auto new_rest = rest.substr(sum.size());
  return verify(n2, sum, new_rest);
}

bool isAdditiveNumber(std::string num) {
  // backtracking...I was trying to do it the other way around and made it complicated
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Additive Number.
  // Memory Usage: 6.1 MB, less than 83.94% of C++ online submissions for Additive Number.
  //
  int size = num.size();
  if (size < 3) return false;

  for (auto i{1}; i <= size / 2; ++i) {
    for (auto j{1}; j <= (size - i) / 2; ++j) {
      auto n1{num.substr(0, i)}, n2{num.substr(i, j)}, rest{num.substr(i + j)};
      if (verify(n1, n2, rest)) return true;
    }
  }

  return false;
}

}  // namespace solution

#endif  // ADDITIVE_NUMBER_H_
