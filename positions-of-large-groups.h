#ifndef POSITIONS_OF_LARGE_GROUPS_H_
#define POSITIONS_OF_LARGE_GROUPS_H_

#include <string>
#include <vector>

namespace solution {

std::vector<std::vector<int>> largeGroupPositions(std::string s) {
  // two pointers
  // Runtime: 4 ms, faster than 70.63% of C++ online submissions for Positions of Large Groups.
  // Memory Usage: 7.3 MB, less than 46.60% of C++ online submissions for Positions of Large Groups.
  //
  std::vector<std::vector<int>> result;

  if (s.size() < 3) return result;

  auto begin{-1}, end{begin};
  auto current{' '};
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] != current) {
      end = i - 1;
      if (end != -1 && end - begin > 1) result.push_back({begin, end});
      current = s[i];
      begin = i;
    }
  }
  end = s.size() - 1;
  if (end - begin > 1) result.push_back({begin, end});
  return result;
}

}

#endif  // POSITIONS_OF_LARGE_GROUPS_H_
