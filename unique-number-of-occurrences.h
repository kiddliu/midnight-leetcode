#ifndef UNIQUE_NUMBER_OF_OCCURRENCES_H_
#define UNIQUE_NUMBER_OF_OCCURRENCES_H_

#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace solution {

bool uniqueOccurrences(std::vector<int>& arr) {
  // straight forward with map and set
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Number of Occurrences.
  // Memory Usage: 8 MB, less than 81.03% of C++ online submissions for Unique Number of Occurrences.
  //
  std::unordered_map<int, int> m;
  
  for (const auto& number : arr) {
    ++m[number];
  }

  std::unordered_set<int> s;
  for (const auto& p : m) {
    s.insert(p.second);
  }

  return m.size() == s.size();
}


}

#endif  // UNIQUE_NUMBER_OF_OCCURRENCES_H_
