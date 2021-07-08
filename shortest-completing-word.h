#ifndef SHORTEST_COMPLETING_WORD_H_
#define SHORTEST_COMPLETING_WORD_H_

#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

namespace solution {

std::string shortestCompletingWord(std::string licensePlate, std::vector<std::string>& words) {
  // set_intersection
  // Runtime: 12 ms, faster than 85.47% of C++ online submissions for Shortest Completing Word.
  // Memory Usage: 11.8 MB, less than 85.47% of C++ online submissions for Shortest Completing Word.
  //
  licensePlate.erase(
      std::remove_if(licensePlate.begin(), licensePlate.end(),
                     [](const auto& c) { return !std::isalpha(c); }), licensePlate.end());
  std::transform(licensePlate.begin(), licensePlate.end(), licensePlate.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  std::sort(licensePlate.begin(), licensePlate.end());

  std::string result(16, ' '), s, inter;
  for (size_t i = 0; i < words.size(); ++i) {
    s = words[i];
    inter.clear();
    std::sort(s.begin(), s.end());

    std::set_intersection(licensePlate.begin(), licensePlate.end(), s.begin(),
                          s.end(), std::back_inserter(inter));
    if (licensePlate == inter && result.size() > s.size()) {
      result = words[i];
    }
  }

  return result;
}

}

#endif  // SHORTEST_COMPLETING_WORD_H_
