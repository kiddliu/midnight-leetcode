#ifndef FINAL_VALUE_OF_VARIABLE_AFTER_PERFORMING_OPERATIONS_H_
#define FINAL_VALUE_OF_VARIABLE_AFTER_PERFORMING_OPERATIONS_H_

#include <string>
#include <vector>

namespace solution {

int finalValueAfterOperations(std::vector<std::string>& operations) {
  // straight forward
  // Runtime: 8 ms, faster than 76.62% of C++ online submissions for Final Value of Variable After Performing Operations.
  // Memory Usage: 14 MB, less than 92.74% of C++ online submissions for Final Value of Variable After Performing Operations.
  //
  auto result{0};
  for (auto& op : operations) {
    result += op[1] == '+' ? 1 : -1;
  }
  return result;
}

}

#endif  // FINAL_VALUE_OF_VARIABLE_AFTER_PERFORMING_OPERATIONS_H_
