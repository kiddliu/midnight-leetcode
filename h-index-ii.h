#ifndef H_INDEX_II_H_
#define H_INDEX_II_H_

#include <vector>

namespace solution {

int hIndex(std::vector<int>& citations) {
  // a variant to hIndex
  // Runtime: 22 ms, faster than 78.21% of C++ online submissions for H-Index II.
  // Memory Usage: 18.7 MB, less than 49.30% of C++ online submissions for H-Index II.
  //
  int size = citations.size(), p1{0}, p2{size - 1};

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

}

#endif