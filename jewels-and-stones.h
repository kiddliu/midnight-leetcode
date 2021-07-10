#ifndef JEWELS_AND_STONES_H_
#define JEWELS_AND_STONES_H_

#include <string>
#include <unordered_set>

namespace solution {

int numJewelsInStones(std::string jewels, std::string stones) {
  // set and count > 0
  // Runtime: 4 ms, faster than 40.03% of C++ online submissions for Jewels and Stones.
  // Memory Usage: 6.5 MB, less than 25.44% of C++ online submissions for Jewels and Stones.
  //
  std::unordered_set<char> j{jewels.cbegin(), jewels.cend()};
  auto result{0};
  for (const auto& s : stones) {
    if (j.count(s) > 0) ++result;
  }
  return result;
}

}

#endif  // JEWELS_AND_STONES_H_
