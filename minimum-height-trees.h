#ifndef MINIMUM_HEIGHT_TREES_H_
#define MINIMUM_HEIGHT_TREES_H_

#include <algorithm>
#include <deque>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<int> findMinHeightTrees(int n,
                                    std::vector<std::vector<int>>& edges) {
  // topological sorting?
  // Runtime: 116 ms, faster than 31.58% of C++ online submissions for Minimum Height Trees.
  // Memory Usage: 30.1 MB, less than 44.73% of C++ online submissions for Minimum Height Trees.
  //
  if (n == 1) return {0};
  if (n == 2) return edges[0];

  std::unordered_map<int, std::vector<int>> map;
  for (auto& e : edges) {
    map[e[0]].push_back(e[1]);
    map[e[1]].push_back(e[0]);
  }
  std::deque<int> leaves;

  while (map.size() > 2) {
    for (auto& p : map) {
      if (p.second.size() == 1) {
        leaves.push_back(p.first);
      }
    }

    while (!leaves.empty()) {
      auto v = leaves.front();
      leaves.pop_front();

      for (auto& adjacent : map[v]) {
        map[adjacent].erase(
            std::remove(map[adjacent].begin(), map[adjacent].end(), v),
            map[adjacent].end());
      }
      map.erase(v);
    }
  }

  std::vector<int> result;

  for (auto& p : map) {
    result.push_back(p.first);
  }

  return result;
}

}  // namespace solution

#endif  // MINIMUM_HEIGHT_TREES_H_
