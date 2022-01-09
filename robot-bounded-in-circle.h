#ifndef ROBOT_BOUNDED_IN_CIRCLE_H_
#define ROBOT_BOUNDED_IN_CIRCLE_H_

#include <array>
#include <string>

namespace solution {

bool isRobotBounded(std::string instructions) {
  // it should be an easy-level problem
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Robot Bounded In Circle.
  // Memory Usage: 6.2 MB, less than 19.45% of C++ online submissions for Robot Bounded In Circle.
  //
  std::array<std::array<int, 2>, 4> directions{{
    {{0, 1}}, {{-1, 0}}, {{0, -1}}, {{1, 0}}
  }};
  
  std::array<int, 2> coordinate{0, 0};
  auto current_direction{0};

  for (auto& i : instructions) {
    switch (i) {
      case 'G':
        coordinate[0] += directions[current_direction][0];
        coordinate[1] += directions[current_direction][1];
        break;
      case 'L':
        current_direction = (current_direction + 3) % 4;
        break;
      case 'R':
        current_direction = (current_direction + 1) % 4;
        break;
    }
  }
  return coordinate[0] == 0 && coordinate[1] == 0 || current_direction > 0;
}

}  // namespace solution

#endif  // !ROBOT_BOUNDED_IN_CIRCLE_H_
