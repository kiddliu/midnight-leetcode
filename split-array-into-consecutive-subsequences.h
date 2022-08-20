#ifndef SPLIT_ARRAY_INTO_CONSECUTIVE_SUBSEQUENCES_H_
#define SPLIT_ARRAY_INTO_CONSECUTIVE_SUBSEQUENCES_H_

#include <unordered_map>
#include <vector>

namespace solution {

bool isPossible(std::vector<int>& nums) {
  std::unordered_map<int, int> left, end;
  for (auto& n : nums) {
    ++left[n];
  }

  for (auto& n : nums) {
    if (left[n] == 0) continue;
    --left[n];

    if (end[n - 1] > 0) {
      --end[n - 1], ++end[n];
    } else if (left[n + 1] > 0 && left[n + 2] > 0) {
      --left[n + 1], --left[n + 2], ++end[n + 2];
    } else {
      return false;
    }
  }

  return true;
}

}

#endif  // !SPLIT_ARRAY_INTO_CONSECUTIVE_SUBSEQUENCES_H_
