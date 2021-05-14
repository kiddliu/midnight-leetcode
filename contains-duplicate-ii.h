#ifndef CONTAINS_DUPLICATE_II_H_
#define CONTAINS_DUPLICATE_II_H_

#include <vector>
#include <unordered_set>

namespace solution {

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
  // brute force
  // Runtime: 16 ms, faster than 97.99% of C++ online submissions for Contains Duplicate II.
  // Memory Usage: 16.1 MB, less than 93.43% of C++ online submissions for Contains Duplicate II.
  //
  if (k == 0) return false;

  auto size = std::unordered_set<int>(nums.cbegin(), nums.cend()).size();
  if (size == nums.size()) return false;
  if (nums.size() <= k + 1)
    return size < nums.size();

  auto begin = nums.cbegin(), current = begin, end = nums.cend();
  while (current + k != end) {
    if (std::unordered_set<int>(current, current + k + 1).size() < k + 1) {
      return true;
    }
    current++;
  }

  return false;
}

}

#endif  // CONTAINS_DUPLICATE_II_H_
