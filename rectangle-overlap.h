#ifndef RECTANGLE_OVERLAP_H_
#define RECTANGLE_OVERLAP_H_

#include <vector>

namespace solution {

bool isRectangleOverlap(std::vector<int>& rec1, std::vector<int>& rec2) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rectangle Overlap.
  // Memory Usage: 7.8 MB, less than 87.68% of C++ online submissions for Rectangle Overlap.
  //
  return std::min(rec1[2], rec2[2]) > std::max(rec1[0], rec2[0]) &&
         std::min(rec1[3], rec2[3]) > std::max(rec1[1], rec2[1]);
}

}

#endif  // RECTANGLE_OVERLAP_H_
