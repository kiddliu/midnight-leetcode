#ifndef INTERSECTION_OF_TWO_ARRAYS_II_H_
#define INTERSECTION_OF_TWO_ARRAYS_II_H_

#include <algorithm>
#include <iterator>
#include <set>
#include <vector>

namespace solution {

std::vector<int> intersection(std::vector<int>& nums1,
                              std::vector<int>& nums2) {
  // sort and intersect
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Intersection of Two Arrays II.
  // Memory Usage: 10.1 MB, less than 69.17% of C++ online submissions for Intersection of Two Arrays II.
  //
  std::sort(nums1.begin(), nums1.end());
  std::sort(nums2.begin(), nums2.end());
  std::vector<int> result;

  std::set_intersection(nums1.cbegin(), nums1.cend(),
                        nums2.cbegin(), nums2.cend(),
                        std::back_inserter(result));

  return result;
}

}  // namespace solution

#endif  // INTERSECTION_OF_TWO_ARRAYS_II_H_
