#ifndef ALL_PATHS_FROM_SOURCE_TO_TARGET_H_
#define ALL_PATHS_FROM_SOURCE_TO_TARGET_H_

#include <queue>
#include <vector>

namespace solution {

std::vector<std::vector<int>> allPathsSourceTarget(
    std::vector<std::vector<int>>& graph) {
  // got 2 rejection because i did not read through the question
  // Runtime: 16 ms, faster than 63.00% of C++ online submissions for All Paths From Source to Target.
  // Memory Usage: 17.7 MB, less than 17.97% of C++ online submissions for All Paths From Source to Target.
  //
  std::vector<std::vector<int>> result;
  std::queue<std::vector<int>> temp;
  for (auto& n : graph[0]) {
    temp.push({0, n});
  }

  while (!temp.empty()) {
    auto& v = temp.front();

    if (graph[v.back()].empty()) {
      result.push_back(v);
    } else {
      for (auto& next : graph[v.back()]) {
        std::vector<int> n = v;
        n.push_back(next);

        if (graph[next].empty()) {
          result.push_back(v);
        } else {
          temp.push(n);
        }
      }
    }

    temp.pop();
  }

  return result;
}

}  // namespace solution

#endif  // ALL_PATHS_FROM_SOURCE_TO_TARGET_H_
