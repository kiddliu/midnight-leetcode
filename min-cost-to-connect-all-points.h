#ifndef MIN_COST_TO_CONNECT_ALL_POINTS_H_
#define MIN_COST_TO_CONNECT_ALL_POINTS_H_

#include <vector>

namespace solution {

int minCostConnectPoints(std::vector<std::vector<int>>& points) {
  // prim's algorithm of Minimum Spanning Tree
  // Runtime: 86 ms, faster than 98.19% of C++ online submissions for Min Cost to Connect All Points.
  // Memory Usage: 10 MB, less than 98.78% of C++ online submissions for Min Cost to Connect All Points.
  //
  std::vector<int> mins(points.size(), INT_MAX);
  mins[0] = 0;
  std::vector<bool> visited(points.size());
  auto result{0}, visitedEdges{0};

  while (visitedEdges < points.size()) {
    auto min{INT_MAX}, node_index{0};

    for (auto i{0}; i < points.size(); ++i) {
      if (!visited[i] && min > mins[i]) {
        min = mins[i], node_index = i;
      }
    }

    result += min, ++visitedEdges, visited[node_index] = true;

    for (auto i{0}; i < points.size(); ++i) {
      if (!visited[i]) {
        auto distance{std::abs(points[node_index][1] - points[i][1]) +
                      std::abs(points[node_index][0] - points[i][0])};

        if (mins[i] > distance) mins[i] = distance;
      }
    }
  }

  return result;
}

}


#endif  // !MIN_COST_TO_CONNECT_ALL_POINTS_H_
