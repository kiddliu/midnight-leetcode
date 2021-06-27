#ifndef ROBOT_RETURN_TO_ORIGIN_H_
#define ROBOT_RETURN_TO_ORIGIN_H_

#include <string>

namespace solution {

bool judgeCircle(std::string moves) {
  // direct
  // Runtime: 12 ms, faster than 71.17% of C++ online submissions for Robot Return to Origin.
  // Memory Usage: 8.1 MB, less than 25.81% of C++ online submissions for Robot Return to Origin.
  //
  if (moves.size() % 2 == 1) return false;

  auto h{0}, v{0};
  for (const auto& move : moves) {
    if (move == 'L') ++h;
    if (move == 'R') --h;
    if (move == 'U') ++v;
    if (move == 'D') --v;
  }
  return h == 0 && v == 0;
}

}  // namespace solution

#endif  // ROBOT_RETURN_TO_ORIGIN_H_
