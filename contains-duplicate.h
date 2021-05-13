#ifndef CONTAINS_DUPLICATE_H_
#define CONTAINS_DUPLICATE_H_

#include <unordered_set>
#include <vector>

namespace solution {

bool containsDuplicate(std::vector<int>& nums) {
  // Set
  // Runtime: 28 ms, faster than 68.72% of C++ online submissions for Contains Duplicate.
  // Memory Usage: 20.1 MB, less than 46.97% of C++ online submissions for Contains Duplicate
  // 
  if (nums.size() == 1) return false;

  std::unordered_set<int> set_{};
  auto p = nums.cbegin(), end = nums.cend();
  while (p != end) {
    auto r = set_.insert(*p);
    if (!r.second) {
      return true;
    }
    p++;
  }

  return false;
}

}

#endif  // CONTAINS_DUPLICATE_H_
