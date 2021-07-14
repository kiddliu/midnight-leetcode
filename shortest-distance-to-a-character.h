#ifndef SHORTEST_DISTANCE_TO_A_CHARACTER_H_
#define SHORTEST_DISTANCE_TO_A_CHARACTER_H_

#include <string>
#include <vector>

namespace solution {

std::vector<int> shortestToChar(std::string s, char c) {
  // one run
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Shortest Distance to a Character.
  // Memory Usage: 6.7 MB, less than 55.46% of C++ online submissions for Shortest Distance to a Character.
  //
  if (s.size() == 1) return {0};

  std::vector<int> v(static_cast<int>(s.size()), 0);
  for (size_t i = 0; i < s.size(); ++i) {
    int next = s.find(c, i), previous = i > 0 ? i - 1 : -1;
    if (next == -1) {
      while (i != v.size()) {
        v[i] = i - previous, i++;
      }
    } else if (next == i) {
      continue;
    } else if (previous == -1) {
      while (next > 0) {
        v[i++] = next--;
      }
    } else {
      while (next - i > 0) {
        v[i++] = std::min(i - previous, next - i);
      }
    }
  }
  return v;
}

}  // namespace solution

#endif  // SHORTEST_DISTANCE_TO_A_CHARACTER_H_
