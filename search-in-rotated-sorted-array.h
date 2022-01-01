#ifndef SEARCH_IN_ROTATED_SORTED_ARRAY_H_
#define SEARCH_IN_ROTATED_SORTED_ARRAY_H_

#include <algorithm>
#include <vector>

namespace solution {

int search(std::vector<int>& nums, int target) {
  // using STL
  // Runtime: 3 ms, faster than 74.03% of C++ online submissions for Search in Rotated Sorted Array.
  // Memory Usage: 11.1 MB, less than 26.63% of C++ online submissions for Search in Rotated Sorted Array.
  //
  auto result =
      std::lower_bound(nums.cbegin(), nums.cend(), target,
                       [&nums](const int& value, const int& target) {
                         if (target >= nums.front()) {
                           return value < target && value >= nums.front();
                         } else {
                           return value > nums.back() || value < target;  
                         }
                       });
  return result != nums.cend() && *result == target ? std::distance(nums.cbegin(), result) : -1;
}

}  // namespace solution

#endif  // !SEARCH_IN_ROTATED_SORTED_ARRAY_H_
