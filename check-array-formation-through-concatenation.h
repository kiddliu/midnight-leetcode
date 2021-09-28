#ifndef CHECK_ARRAY_FORMATION_THROUGH_CONCATENATION_H_
#define CHECK_ARRAY_FORMATION_THROUGH_CONCATENATION_H_

#include <unordered_map>
#include <vector>

namespace solution {

bool canFormArray(std::vector<int>& arr, std::vector<std::vector<int>>& pieces) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check Array Formation Through Concatenation.
  // Memory Usage: 10.5 MB, less than 45.18% of C++ online submissions for Check Array Formation Through Concatenation.
  //
  std::unordered_map<int, std::vector<int>> map;
  for (const auto& p : pieces) {
    map[p[0]] = p;
  }
  for (auto i = 0; i < arr.size();) {
    if (map.find(arr[i]) == map.end()) return false;

    auto &v{map[arr[i]]};
    for (auto j = 0; j < v.size(); ++i, ++j) {
      if (v[j] != arr[i]) return false;
    }
  }
  return true;
}

}

#endif  // !CHECK_ARRAY_FORMATION_THROUGH_CONCATENATION_H_
