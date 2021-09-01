#ifndef INCREASING_DECREASING_STRING_H_
#define INCREASING_DECREASING_STRING_H_

#include <array>
#include <string>

namespace solution {

std::string sortString(std::string s) {
  // straight forward
  // Runtime: 8 ms, faster than 76.84% of C++ online submissions for Increasing Decreasing String.
  // Memory Usage: 7.5 MB, less than 56.21% of C++ online submissions for Increasing Decreasing String.
  //
  std::array<int, 26> arr = {0};

  for (const auto& c : s) {
    ++arr[c - 'a'];
  }

  std::string result;
  auto inserted{true};
  while (inserted) {
    inserted = false;
    for (size_t i = 0; i < arr.size(); ++i) {
      if (arr[i] > 0) {
        result.append(1, i + 'a');
        --arr[i];
        inserted = true;
      }
    }
    if (!inserted) break;
    inserted = false;
    for (int i = arr.size() - 1; i > -1; --i) {
      if (arr[i] > 0) {
        result.append(1, i + 'a');
        --arr[i];
        inserted = true;
      }
    }
  }

  return result;
}


}


#endif  // INCREASING_DECREASING_STRING_H_
