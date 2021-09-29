#ifndef DEFUSE_THE_BOMB_H_
#define DEFUSE_THE_BOMB_H_

#include <numeric>
#include <vector>

namespace solution {

std::vector<int> decrypt(std::vector<int>& code, int k) {
  // stright forward
  // Runtime: 4 ms, faster than 59.73% of C++ online submissions for Defuse the Bomb.
  // Memory Usage: 8.1 MB, less than 93.21% of C++ online submissions for Defuse the Bomb.
  //
  std::vector<int> v(code.size(), 0);
  if (k == 0) return v;

  for (auto i = 0; i < code.size(); ++i) {
    auto offset{1}, multiplier{k > 0 ? 1 : -1}, absk{std::abs(k)};
    while (offset <= absk) {
      v[i] += code[(code.size() + i + multiplier * offset++) % code.size()];
    }
  }
  return v;
}

}

#endif  // !DEFUSE_THE_BOMB_H_
