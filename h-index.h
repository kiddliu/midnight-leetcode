#ifndef H_INDEX_H_
#define H_INDEX_H_

#include <algorithm>
#include <vector>

namespace solution {

int hIndex(std::vector<int>& citations) {
  // sort and binary search...
  // Runtime: 3 ms, faster than 79.55% of C++ online submissions for H-Index.
  // Memory Usage: 8.5 MB, less than 79.20% of C++ online submissions for H-Index.
  //
  int size = citations.size(), p1{0}, p2{size - 1};
  std::sort(citations.begin(), citations.end());
  
  while (p1 <= p2) {
    auto mid{(p1 + p2) / 2};
    if (citations[mid] < size - mid) {
      p1 = mid + 1;
    } else {
      p2 = mid - 1;
    }
  }

  return size - p1;
}

}  // namespace solution

#endif  // !H_INDEX_H_
