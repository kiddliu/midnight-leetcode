#ifndef FLIPPING_AN_IMAGE_H_
#define FLIPPING_AN_IMAGE_H_

#include <algorithm>
#include <iterator>
#include <vector>

namespace solution {

std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image) {
  // direct
  // Runtime: 4 ms, faster than 88.98% of C++ online submissions for Flipping an Image.
  // Memory Usage: 8.7 MB, less than 74.31% of C++ online submissions for Flipping an Image.
  //
  for (auto& row : image) {
    std::reverse(row.begin(), row.end());
    for (auto& i : row) {
      i = !i;
    }
  }
  return image;
}

}

#endif  // FLIPPING_AN_IMAGE_H_
