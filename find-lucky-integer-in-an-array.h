#ifndef FIND_LUCKY_INTEGER_IN_AN_ARRAY_H_
#define FIND_LUCKY_INTEGER_IN_AN_ARRAY_H_

#include <unordered_map>
#include <vector>

namespace solution {

int findLucky(std::vector<int>& arr) {
  // Runtime: 4 ms, faster than 91.16% of C++ online submissions for Find Lucky Integer in an Array.
  // Memory Usage: 10.3 MB, less than 23.92% of C++ online submissions for Find Lucky Integer in an Array.
  //
  std::unordered_map<int, int> map;

  for (const auto& num : arr) {
    ++map[num];
  }

  auto result{0};
  for (const auto& p : map) {
    if (p.first == p.second) ++result;
  }
  return result;
}


}

#endif  // FIND_LUCKY_INTEGER_IN_AN_ARRAY_H_
