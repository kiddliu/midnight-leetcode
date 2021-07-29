#ifndef VALID_MOUNTAIN_ARRAY_H_
#define VALID_MOUNTAIN_ARRAY_H_

#include <vector>

namespace solution {

bool validMountainArray(std::vector<int>& arr) {
  // it's more interesting if take it as 2 people climbing mountain
  // Runtime: 24 ms, faster than 86.56% of C++ online submissions for Valid Mountain Array.
  // Memory Usage: 22.5 MB, less than 45.89% of C++ online submissions for Valid Mountain Array.
  //
  if (arr.size() < 3) return false;

  auto up{true};
  for (size_t i = 1; i < arr.size(); ++i) {
    if (up) {
      if (arr[i] > arr[i - 1]) continue;
      if (arr[i] == arr[i - 1] || i == 1) return false;
      up = false;
    } else {
      if (arr[i] >= arr[i - 1]) return false;
    }
  }
  return up == false;
}

}

#endif  // VALID_MOUNTAIN_ARRAY_H_
