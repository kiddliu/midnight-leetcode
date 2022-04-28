#ifndef PATH_WITH_MINIMUM_EFFORT_H_
#define PATH_WITH_MINIMUM_EFFORT_H_

#include <array>
#include <queue>
#include <vector>

namespace solution {

int minimumEffortPath(std::vector<std::vector<int>>& heights) {
  // Dijikstra...
  // Runtime: 155 ms, faster than 91.57% of C++ online submissions for Path With Minimum Effort.
  // Memory Usage: 19.4 MB, less than 88.43% of C++ online submissions for Path With Minimum Effort.
  //
  auto m{heights.size()}, n{heights.front().size()};
  std::array<int, 5> direction{-1, 0, 1, 0, -1};

  std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>,
                      std::greater<std::pair<int, int>>>
      queue;
  queue.push({0, 0});
  std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, false));

  while (!queue.empty()) {
    auto& top{queue.top()};
    queue.pop();

    auto x{top.second / 100}, y{top.second % 100};
    if (visited[x][y]) continue;
    visited[x][y] = true;

    if (x == m - 1 && y == n - 1) return top.first;

    for (auto i{0}; i < 4; ++i) {
      auto x1{x + direction[i]}, y1{y + direction[i + 1]}, coordinate{100 * x1 + y1};

      if (x1 < 0 || x1 >= m || y1 < 0 || y1 >= n || visited[x1][y1]) continue;
      queue.push(
          {std::max(top.first, std::abs(heights[x1][y1] - heights[x][y])),
           coordinate});
    }
  }

  return -1;
}

}

#endif  // PATH_WITH_MINIMUM_EFFORT_H_
