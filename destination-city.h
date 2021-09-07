#ifndef DESTINATION_CITY_H_
#define DESTINATION_CITY_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::string destCity(std::vector<std::vector<std::string>>& paths) {
  // straight forward
  // Runtime: 8 ms, faster than 96.33% of C++ online submissions for Destination City.
  // Memory Usage: 10.7 MB, less than 75.04% of C++ online submissions for Destination City.
  //
  std::unordered_map<std::string, int> m;

  for (const auto& p : paths) {
    ++m[p[0]], --m[p[1]];
  }

  for (const auto& p : m) {
    if (p.second == -1) {
      return p.first;
    }
  }

  return "";
}

}

#endif  // DESTINATION_CITY_H_
