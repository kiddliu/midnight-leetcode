#ifndef FLOOD_FILL_H_
#define FLOOD_FILL_H_

#include <queue>
#include <utility>
#include <vector>

namespace solution {

std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image,
                                        int sr, int sc, int newColor) {
  // DFS with stack
  // Runtime: 8 ms, faster than 80.04% of C++ online submissions for Flood Fill.
  // Memory Usage: 14.2 MB, less than 29.38% of C++ online submissions for Flood Fill.
  //
  auto color{image[sr][sc]};
  if (color == newColor) return image;

  std::queue<std::pair<int, int>> q;
  q.push({sr, sc});

  while (!q.empty()) {
    auto p = q.front();
    q.pop();

    if (image[p.first][p.second] == color) {
      image[p.first][p.second] = newColor;

      if (p.first > 0 && image[p.first - 1][p.second] == color)
        q.push({p.first - 1, p.second});
      if (p.second > 0 && image[p.first][p.second - 1] == color)
        q.push({p.first, p.second - 1});
      if (p.first < image.size() - 1 && image[p.first + 1][p.second] == color)
        q.push({p.first + 1, p.second});
      if (p.second < image[0].size() - 1 &&
          image[p.first][p.second + 1] == color)
        q.push({p.first, p.second + 1});
    }
  }
  return image;
}
}  // namespace solution

#endif  // FLOOD_FILL_H_
