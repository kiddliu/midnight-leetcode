#ifndef REMOVE_OUTERMOST_PARENTHESES_H_
#define REMOVE_OUTERMOST_PARENTHESES_H_

#include <string>

namespace solution {

std::string removeOuterParentheses(std::string s) {
  // not so straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Outermost Parentheses.
  // Memory Usage: 6.6 MB, less than 94.84% of C++ online submissions for Remove Outermost Parentheses.
  //
  std::string result;
    
  auto start{0}, end{start}, count{0};
  while (end != s.size()) {
    do {
      if (s[end++] == '(') {
        ++count;
      } else {
        --count;
      }
    } while (count != 0);
    result.append(s.cbegin() + start + 1, s.cbegin() + end - 1);
    start = end, count = 0;
  }
  return result;
}


}

#endif  // REMOVE_OUTERMOST_PARENTHESES_H_
