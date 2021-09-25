#ifndef MAXIMUM_NESTING_DEPTH_OF_THE_PARENTHESES_H_
#define MAXIMUM_NESTING_DEPTH_OF_THE_PARENTHESES_H_

#include <string>

namespace solution {

int maxDepth(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Nesting Depth of the Parentheses.
  // Memory Usage: 6.2 MB, less than 85.10% of C++ online submissions for Maximum Nesting Depth of the Parentheses.
  //
  auto result{0}, now{0};
  for (const char& c : s) {
    if (c == '(') result = std::max(result, ++now);
    if (c == ')') --now;
  }
  return result;
}

}

#endif  // !MAXIMUM_NESTING_DEPTH_OF_THE_PARENTHESES_H_
