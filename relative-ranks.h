#ifndef RELATIVE_RANKS_H_
#define RELATIVE_RANKS_H_

#include <algorithm>
#include <map>
#include <memory>
#include <string>
#include <vector>

namespace solution {

std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
  // map + dynamic array
  // Runtime: 12 ms, faster than 83.33% of C++ online submissions for Relative Ranks.
  // Memory Usage: 11.2 MB, less than 39.61% of C++ online submissions for Relative Ranks.
  //
  std::string title[3] = {"Gold Medal", "Silver Medal", "Bronze Medal"};

  std::map<int, int, std::greater<int>> m;
  for (size_t i = 0; i < score.size(); ++i) {
    m.insert({score[i], i});
  }

  std::vector<std::string> r(score.size(), "");
  size_t i = 0;
  for (const auto& p : m) {
    r[p.second] = i < 3 ? title[i] : std::to_string(i + 1);
    ++i;
  }

  return r;
}


}

#endif  // RELATIVE_RANKS_H_
