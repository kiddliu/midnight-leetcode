#ifndef MULTIPLY_STRINGS_H_
#define MULTIPLY_STRINGS_H_

#include <algorithm>
#include <string>
#include <unordered_map>

namespace solution {

void sum(std::string& accu, std::string&& num) {
  auto carry{0};
  
  if (accu.size() < num.size()) {
    accu.insert(0, num.size() - accu.size(), '0');
  }

  for (auto i = 0; i < accu.size(); ++i) {
    auto result =
        accu[accu.size() - i - 1] - '0' + num[num.size() - i - 1] - '0' + carry;

    carry = result > 9;
    accu[accu.size() - i - 1] = carry ? result - 10 + '0' : result + '0';
  }
  if (carry) accu.insert(0, 1, '1');
}

std::string multiply(std::string& num, char c) {
  std::string result;

  auto carry{0}, m = c - '0';
  for (int i = num.size() - 1; i >= 0; --i) {
    auto n = (num[i] - '0') * m + carry;
    result.push_back(n % 10 + '0');
    carry = n / 10;
  }
  if (carry) result.push_back(carry + '0');

  std::reverse(result.begin(), result.end());

  return result;
}

std::string multiply(std::string num1, std::string num2) {
  // straight forward
  // Runtime: 8 ms, faster than 60.22% of C++ online submissions for Multiply Strings.
  // Memory Usage: 8.3 MB, less than 30.76% of C++ online submissions for Multiply Strings.
  //
  if (num1 == "0" || num2 == "0") return "0";

  std::unordered_map<char, std::string> caches;
  std::string result;

  for (int i = num2.size() - 1; i >= 0; --i) {
    if (caches.count(num2[i]) == 0) {
      caches[num2[i]] = multiply(num1, num2[i]); 
    }
    sum(result, caches[num2[i]] + std::string(num2.size() - i - 1, '0'));
  }
  return result;
}

}

#endif  // MULTIPLY_STRINGS_H_
