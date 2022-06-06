#ifndef EVALUATE_REVERSE_POLISH_NOTATION_H_
#define EVALUATE_REVERSE_POLISH_NOTATION_H_

#include <stack>
#include <string>
#include <unordered_set>
#include <vector>

namespace solution {

int evalRPN(std::vector<std::string>& tokens) {
  // with stack...
  // Runtime: 12 ms, faster than 71.92% of C++ online submissions for Evaluate Reverse Polish Notation.
  // Memory Usage: 12.1 MB, less than 21.21% of C++ online submissions for Evaluate Reverse Polish Notation.
  //
  std::stack<int> stack;

  std::unordered_set<std::string> ops{"+", "-", "*", "/"};
  auto is_operator = [&ops](const std::string& token) {
    return ops.count(token) > 0;
  };
  auto op = [](const std::string& op, const int& first, const int& second) {
    if (op == "+") return first + second;
    if (op == "-") return first - second;
    if (op == "*") return first * second;
    if (op == "/") return first / second;

    throw 0;
  };
  for (auto& token : tokens) {
    if (is_operator(token)) {
      auto second = stack.top();
      stack.pop();
      auto first = stack.top();
      stack.pop();
      
      stack.push(op(token, first, second));
    } else {
      stack.push(std::stoi(token));
    } 
  }

  return stack.top();
}

}  // namespace solution

#endif  // !EVALUATE_REVERSE_POLISH_NOTATION_H_
