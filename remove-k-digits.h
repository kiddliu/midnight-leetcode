#ifndef REMOVE_K_DIGITS_H_
#define REMOVE_K_DIGITS_H_

#include <deque>
#include <string>

namespace solution {

std::string removeKdigits(std::string num, int k) {
  // keep the original num asceding, and if k is still greater than 0, remove from the end
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove K Digits.
  // Memory Usage: 6.8 MB, less than 95.64% of C++ online submissions for Remove K Digits.
  //
  std::string result;

  for (auto& c : num) {
    while (result.size() && result.back() > c && k) {
      result.pop_back(), --k;
    }

    if (result.size() || c != '0') {
      result.push_back(c);
    }
  }

  while (result.size() && k--) {
    result.pop_back();
  }

  return result.empty() ? "0" : result;
}


}

#endif  // REMOVE_K_DIGITS_H_
