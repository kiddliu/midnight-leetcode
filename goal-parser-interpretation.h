#ifndef GOAL_PARSER_INTERPRETATION_H_
#define GOAL_PARSER_INTERPRETATION_H_

#include <string>

namespace solution {

std::string interpret(std::string command) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Goal Parser Interpretation.
  // Memory Usage: 6.2 MB, less than 57.89% of C++ online submissions for Goal Parser Interpretation.
  //
  std::string result;
  for (auto i = 0; i < command.size(); ++i) {
    if (command[i] == 'G') {
      result.append(1, 'G');
    } else if (command[i++] == '(') {
      if (command[i] == ')') {
        result.append(1, 'o');
      } else {
        result.append("al");
        i += 2;
      }
    }
  }
  return result;
}

}

#endif  // !GOAL_PARSER_INTERPRETATION_H_
