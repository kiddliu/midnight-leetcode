#ifndef FIND_IF_PATH_EXISTS_IN_GRAPH_H_
#define FIND_IF_PATH_EXISTS_IN_GRAPH_H_

#include <algorithm>
#include <unordered_set>
#include <vector>

namespace solution {

int findRoot(std::vector<int>& v, int node) {
  return v[node] == node ? node : v[node] = findRoot(v, v[node]);
}

bool validPath(int n, std::vector<std::vector<int>>& edges, int start, int end) {
  // joint find
  // Runtime: 336 ms, faster than 98.89% of C++ online submissions for Find if Path Exists in Graph.
  // Memory Usage: 110.8 MB, less than 99.19% of C++ online submissions for Find if Path Exists in Graph.
  //
  std::vector<int> v(500);

  for (auto i = 0; i < v.size(); ++i) {
    v[i] = i;
  }

  for (auto& edge : edges) {
    auto r0 = findRoot(v, edge[0]);
    auto r1 = findRoot(v, edge[1]);
    v[r0] = r1;
  }

  return findRoot(v, start) == findRoot(v, end);
}

}

#endif  // FIND_IF_PATH_EXISTS_IN_GRAPH_H_
