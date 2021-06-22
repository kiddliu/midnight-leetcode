#ifndef MINIMUM_INDEX_SUM_OF_TWO_LISTS_H_
#define MINIMUM_INDEX_SUM_OF_TWO_LISTS_H_

#include <algorithm>
#include <limits.h>
#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<std::string> findRestaurant(std::vector<std::string>& list1, std::vector<std::string>& list2) {
  // use hash set
  // Runtime: 80 ms, faster than 70.68% of C++ online submissions for Minimum Index Sum of Two Lists.
  // Memory Usage: 38.1 MB, less than 33.45% of C++ online submissions for Minimum Index Sum of Two Lists.
  //
  if (list1.size() == 1 && list2.size() == 1) return list1;

  std::unordered_map<std::string, int> m;
  for (size_t i = 0; i < list1.size(); ++i) {
    m.insert({list1[i], -1 - i});
  }
  for (size_t i = 0; i < list2.size(); ++i) {
    if (m.find(list2[i]) != m.end()) {
      m[list2[i]] = 1 + i - m[list2[i]];
    }
  }

  std::vector<std::string> v;
  auto least{INT_MAX};
  for (auto& p : m) {
    if (p.second > 0) {
      if (p.second < least) {
        v.clear();
        v.push_back(p.first);
        least = p.second;
      } else if (p.second == least) {
        v.push_back(p.first);
      }
    }
  }

  return v;
}

}

#endif  // MINIMUM_INDEX_SUM_OF_TWO_LISTS_H_
