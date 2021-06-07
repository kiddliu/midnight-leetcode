#ifndef CONSTRUCT_THE_RECTANGLE_H_
#define CONSTRUCT_THE_RECTANGLE_H_

#include <cmath>
#include <vector>

namespace solution {

std::vector<int> constructRectangle(int area) {
  // --root does the magic, since the range 0 ~ root is much smaller than root to area. 
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Construct the Rectangle.
  // Memory Usage: 5.9 MB, less than 80.47% of C++ online submissions for Construct the Rectangle.
  //
  auto root = static_cast<int>(std::sqrt(area));
  while (area % root != 0) {
    --root;
  }
  return std::vector<int>{area / root, root};
}

}

#endif  // CONSTRUCT_THE_RECTANGLE_H_
