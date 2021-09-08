#ifndef BUILD_AN_ARRAY_WITH_STACK_OPERATIONS_H_
#define BUILD_AN_ARRAY_WITH_STACK_OPERATIONS_H_

#include <string>
#include <vector>

namespace solution {

std::vector<std::string> buildArray(std::vector<int>& target, int n) {
  // straight forward...why n
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Build an Array With Stack Operations.
  // Memory Usage: 7.8 MB, less than 51.19% of C++ online submissions for Build an Array With Stack Operations.
  //
  std::vector<std::string> result;
  auto i{1};

  for (const auto& t : target) {
    while (i++ != t) {
      result.push_back("Push");
      result.push_back("Pop");
    }
    result.push_back("Push");
  }

  return result;
}

}

#endif  // BUILD_AN_ARRAY_WITH_STACK_OPERATIONS_H_
