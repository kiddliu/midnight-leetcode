#ifndef VALID_PARENTHESES_H_
#define VALID_PARENTHESES_H_

#include <stack>
#include <string>

namespace solution {

bool match(const char& l, const char& r) {
  return
    ((l == '(' && r == ')'))
    || ((l == '{' && r == '}'))
    || ((l == '[' && r == ']'));
}

bool isValid(std::string s) {
  // Stack
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
  // Memory Usage: 6.3 MB, less than 64.53% of C++ online submissions for Valid Parentheses.
  //
  if (s.size() == 1) return false;

  std::stack<char> result;

  for (auto i = s.cbegin(); i < s.cend(); ++i) {
    if (result.empty()) {
      result.push(*i);
    } else if (match(result.top(), *i)) {
      result.pop();
    } else {
      result.push(*i);
    }
  }
  return result.empty();
}

}

#endif  // VALID_PARENTHESES_H_
