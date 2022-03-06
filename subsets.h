#ifndef SUBSETS_H_
#define SUBSETS_H_

#include <vector>

namespace solution {

std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
  // 1 by 1
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subsets.
  // Memory Usage: 7.2 MB, less than 49.64% of C++ online submissions for Subsets.
  //
  std::vector<std::vector<int>> result, temp;
  result.push_back({});

  for (auto& n : nums) {
    temp.clear();
    for (auto v : result) {
      v.push_back(n);
      temp.push_back(v);
    }
    result.insert(result.end(), temp.begin(), temp.end());
  }

  return result;
}

}

#endif  // SUBSETS_H_
