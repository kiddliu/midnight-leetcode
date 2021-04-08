#ifndef MERGE_SORTED_ARRAY_H_
#define MERGE_SORTED_ARRAY_H_

#include <vector>

namespace solution {

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
  // Brute force
  // Runtime: 0 ms
  // Memory Usage : 9.2 MB
  //
  if (m == 0) return (void) (nums1 = nums2);
  if (n == 0) return;
  
  nums1.resize(m);
  auto o1(0), o2(0);
  while (o2 != n) {
    while (o1 < m && nums1[o1] < nums2[o2]) ++o1;

    nums1.insert(nums1.begin() + o1, nums2[o2]);
    ++o1, ++o2, ++m;
  }
}

}

#endif  // MERGE_SORTED_ARRAY_H_
