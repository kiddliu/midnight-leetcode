#ifndef RECTANGLE_AREA_H_
#define RECTANGLE_AREA_H_

#include <algorithm>

namespace solution {

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2,
                int by2) {
  // it's math
  // Runtime: 3 ms, faster than 97.22% of C++ online submissions for Rectangle Area.
  // Memory Usage: 5.9 MB, less than 33.19% of C++ online submissions for Rectangle Area.
  //
  auto area_a{(ax2 - ax1) * (ay1 - ay2)}, area_b{(bx2 - bx1) * (by2 - by1)};
  if (ax1 >= bx2 || bx1 >= ax2 || by1 >= ay2 || ay1 >= by2)
    return area_a + area_b;
  return area_a -
         (std::min(ax2, bx2) - std::max(ax1, bx1)) *
             (std::min(ay2, by2) - std::max(ay1, by1)) +
         area_b;
}

}  // namespace solution

#endif  // RECTANGLE_AREA_H_
