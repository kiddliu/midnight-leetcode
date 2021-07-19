#ifndef WALKING_ROBOT_SIMULATION_H_
#define WALKING_ROBOT_SIMULATION_H_

#include <algorithm>
#include <vector>

namespace solution {

void m(int& direction, int& command, int& x, int& y,
       std::vector<std::vector<int>>& obstacles) {
  switch (direction) {
    case 0: {
      auto p = std::find_if(
          obstacles.cbegin(), obstacles.cend(), [x, y, command](const auto& v) {
            return x == v[0] && v[1] - y > 0 && v[1] - y <= command;
          });
      if (p != obstacles.cend()) {
        y = (*p)[1] - 1;
      } else {
        y += command;
      }
    } break;
    case 1: {
      auto p = std::find_if(
          obstacles.cbegin(), obstacles.cend(), [x, y, command](const auto& v) {
            return y == v[1] && v[0] - x > 0 && v[0] - x <= command;
          });
      if (p != obstacles.cend()) {
        x = (*p)[0] - 1;
      } else {
        x += command;
      }
    } break;
    case 2: {
      auto p = std::find_if(
          obstacles.cbegin(), obstacles.cend(), [x, y, command](const auto& v) {
            return x == v[0] && y - v[1] > 0 && y - v[1] <= command;
          });
      if (p != obstacles.cend()) {
        y = (*p)[1] + 1;
      } else {
        y -= command;
      }
    } break;
    case 3: {
      auto p = std::find_if(
          obstacles.cbegin(), obstacles.cend(), [x, y, command](const auto& v) {
            return y == v[1] && x - v[0] > 0 && x - v[0] <= command;
          });
      if (p != obstacles.cend()) {
        x = (*p)[0] + 1;
      } else {
        x -= command;
      }
    } break;
  }
}

int robotSim(std::vector<int>& commands,
             std::vector<std::vector<int>>& obstacles) {
  // actually it's a wrong solution 
  // Runtime: 1484 ms, faster than 5.87% of C++ online submissions for Walking Robot Simulation.
  // Memory Usage: 29 MB, less than 99.72% of C++ online submissions for Walking Robot Simulation.
  //
  auto x{0}, y{0}, direction{0}, result{0};
  for (auto& command : commands) {
    if (direction < 0) direction += 4;
    if (direction > 3) direction -= 4;
    switch (command) {
      case -2:
        --direction;
        break;
      case -1:
        ++direction;
        break;
      default:
        m(direction, command, x, y, obstacles);
        result = std::max(result, x * x + y * y);
        break;
    }
  }
  return result;
}

}  // namespace solution

#endif  // WALKING_ROBOT_SIMULATION_H_
