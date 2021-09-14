#ifndef PATH_CROSSING_H_
#define PATH_CROSSING_H_

#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace solution {

bool isPathCrossing(std::string path) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Path Crossing.
  // Memory Usage: 7.9 MB, less than 5.30% of C++ online submissions for Path Crossing.
  //
  std::unordered_map<char, std::vector<int>> m{
      {'N', {0, 1}}, {'S', {0, -1}}, {'E', {1, 0}}, {'W', {-1, 0}}};
  
  auto x{0}, y{0};
  std::unordered_set<std::string> locations;
  locations.reserve(path.size());
  locations.insert("0,0");
  for (size_t i = 0; i < path.size(); ++i) {
    x += m[path[i]][0], y += m[path[i]][1];
    auto current = std::to_string(x) + "," + std::to_string(y);
    if (locations.find(current) != locations.end()) return true;
    locations.insert(current);
  }

  return false;
}

}

#endif  // PATH_CROSSING_H_
