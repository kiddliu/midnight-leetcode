#ifndef DETERMINE_WHETHER_MATRIX_CAN_BE_OBTAINED_BY_ROTATION_H_
#define DETERMINE_WHETHER_MATRIX_CAN_BE_OBTAINED_BY_ROTATION_H_

#include <vector>

namespace solution {

bool findRotation(std::vector<std::vector<int>>& mat, std::vector<std::vector<int>>& target) {
  // straight forward
  // Runtime: 4 ms, faster than 83.79% of C++ online submissions for Determine Whether Matrix Can Be Obtained By Rotation.
  // Memory Usage: 11.3 MB, less than 17.26% of C++ online submissions for Determine Whether Matrix Can Be Obtained By Rotation.
  //
  auto rotate = [](std::vector<std::vector<int>>& v) {
    std::vector<std::vector<int>> rotated{v};

    for (auto i = 0; i < v.size(); ++i) {
      for (auto j = 0; j < v[0].size(); ++j) {
        rotated[j][v[0].size() - i - 1] = v[i][j];
      }
    }
    return rotated;
  };

  auto rotated = rotate(mat);
  return mat == rotated || mat == rotate(rotated) || mat == rotate(target);
}

}

#endif  // DETERMINE_WHETHER_MATRIX_CAN_BE_OBTAINED_BY_ROTATION_H_
