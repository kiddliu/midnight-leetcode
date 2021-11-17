#ifndef CONTAINER_WITH_MOST_WATER_H_
#define CONTAINER_WITH_MOST_WATER_H_

#include <algorithm>
#include <vector>

namespace solution {

int maxArea(std::vector<int>& height) {
  // i need to find a way to practise the ways of thinking
  // Runtime: 84 ms, faster than 68.93% of C++ online submissions for Container With Most Water.
  // Memory Usage: 58.9 MB, less than 98.92% of C++ online submissions for Container With Most Water.
  //
  auto area{0}, front{0}, back{static_cast<int>(height.size() - 1)};

  while (front < back) {
    area =
        std::max(area, (back - front) * std::min(height[front], height[back]));
    if (height[front] < height[back]) {
      ++front;
    } else {
      --back;
    }
  }
  return area;
}

}

#endif  // CONTAINER_WITH_MOST_WATER_H_
