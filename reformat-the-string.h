#ifndef REFORMAT_THE_STRING_H_
#define REFORMAT_THE_STRING_H_

#include <stack>
#include <string>

namespace solution {

std::string reformat(std::string s) {
  // straight forward
  // Runtime: 8 ms, faster than 50.66% of C++ online submissions for Reformat The String.
  // Memory Usage: 7.9 MB, less than 13.05% of C++ online submissions for Reformat The String.
  //
  std::stack<char> s1, s2;

  for (const auto& c : s) {
    if (static_cast<bool>(std::isalpha(static_cast<unsigned char>(c)))) {
      s1.push(c);
    } else {
      s2.push(c);
    }
  }

  if (s1.size() < s2.size()) std::swap(s1, s2);

  if (s1.size() - s2.size() > 1) {
    return "";
  }

  std::string result;
  while (!s2.empty()) {
    result.push_back(s1.top()), s1.pop();
    result.push_back(s2.top()), s2.pop();
  }

  if (!s1.empty()) {
    result.push_back(s1.top()), s1.pop();
  }

  return result;
}

}

#endif  // REFORMAT_THE_STRING_H_
