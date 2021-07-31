#ifndef N_REPEATED_ELEMENT_IN_SIZE_2N_ARRAY_H_
#define N_REPEATED_ELEMENT_IN_SIZE_2N_ARRAY_H_

#include <unordered_set>
#include <vector>

namespace solution {

int repeatedNTimes(std::vector<int>& nums) {
  // use set
  // Runtime: 38 ms, faster than 44.51% of C++ online submissions for N-Repeated Element in Size 2N Array.
  // Memory Usage: 24.7 MB, less than 81.62% of C++ online submissions for N-Repeated Element in Size 2N Array.
  //
  std::unordered_set<int> s;

  for (const auto& num : nums) {
    auto p = s.insert(num);
    if (!p.second) return num;
  }
  return 0;
}

}

#endif  // N_REPEATED_ELEMENT_IN_SIZE_2N_ARRAY_H_
