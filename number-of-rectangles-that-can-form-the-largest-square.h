#ifndef NUMBER_OF_RECTANGLES_THAT_CAN_FORM_THE_LARGEST_SQUARE_H_
#define NUMBER_OF_RECTANGLES_THAT_CAN_FORM_THE_LARGEST_SQUARE_H_

#include <algorithm>
#include <vector>

namespace solution {

int countGoodRectangles(std::vector<std::vector<int>>&rectangles) {
  // straight forward
  // Runtime: 32 ms, faster than 98.39% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.
  // Memory Usage: 18.4 MB, less than 59.64% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.
  //
  auto max{0}, count{0};

  for (const auto& r : rectangles) {
    auto len{std::min(r[0], r[1])};
    if (len > max) {
      max = len;
      count = 1;
    } else if (len == max) {
      ++count;
    }
  }

  return count;
}

}

#endif  // !NUMBER_OF_RECTANGLES_THAT_CAN_FORM_THE_LARGEST_SQUARE_H_
