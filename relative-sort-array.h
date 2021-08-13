#ifndef RELATIVE_SORT_ARRAY_H_
#define RELATIVE_SORT_ARRAY_H_

#include <algorithm>
#include <map>
#include <vector>

namespace solution {

std::vector<int> relativeSortArray(std::vector<int>& arr1, std::vector<int>& arr2) {
  // with map
  // Runtime: 4 ms, faster than 71.06% of C++ online submissions for Relative Sort Array.
  // Memory Usage: 7.7 MB, less than 80.26% of C++ online submissions for Relative Sort Array.
  //
  std::vector<int> v;
  std::map<int, int> m;

  for (const auto& n : arr1) {
    ++m[n];
  }

  for (size_t i = 0; i < arr2.size(); ++i) {
    v.insert(v.end(), m[arr2[i]], arr2[i]);
    m.erase(arr2[i]);
  }

  for (const auto& p : m) {
    v.insert(v.end(), p.second, p.first);
  }
  return v;
}

}

#endif  // RELATIVE_SORT_ARRAY_H_
