#ifndef INTERSECTION_OF_TWO_ARRAYS_H_
#define INTERSECTION_OF_TWO_ARRAYS_H_

#include <algorithm>
#include <iterator>
#include <set>
#include <vector>

namespace solution {

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
  // sort and deduplicate with 2 sets
  // Runtime: 8 ms
  // Memory Usage : 10.8 MB
  std::set<int> s1{nums1.cbegin(), nums1.cend()}, s2{nums2.cbegin(), nums2.cend()};
  std::vector<int> result;

  std::set_intersection(s1.cbegin(), s1.cend(),
                        s2.cbegin(), s2.cend(),
                        std::back_inserter(result));

  return result;
}

}

#endif  // INTERSECTION_OF_TWO_ARRAYS_H_
