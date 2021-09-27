#ifndef SLOWEST_KEY_H_
#define SLOWEST_KEY_H_

#include <string>
#include <vector>

namespace solution {

char slowestKey(std::vector<int>& releaseTimes, std::string keysPressed) {
  // straight forward
  // Runtime: 8 ms, faster than 73.70% of C++ online submissions for Slowest Key.
  // Memory Usage: 10.6 MB, less than 84.78% of C++ online submissions for Slowest Key.
  //
  auto diff{releaseTimes[0]};
  auto key{keysPressed[0]};
  for (auto i = 1; i < releaseTimes.size(); ++i) {
    auto diff2 = releaseTimes[i] - releaseTimes[i - 1];
    auto key2 = keysPressed[i];

    if (diff2 > diff) {
      diff = diff2, key = key2;
    } else if (diff2 == diff && key2 > key) {
      key = key2;
    }
  }
  
  return key;
}

}

#endif  // SLOWEST_KEY_H_
