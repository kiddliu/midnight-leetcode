#ifndef NUMBER_OF_EQUIVALENT_DOMINO_PAIRS_H_
#define NUMBER_OF_EQUIVALENT_DOMINO_PAIRS_H_

#include <unordered_map>
#include <vector>

namespace solution {

int numEquivDominoPairs(std::vector<std::vector<int>>& d) {
  // should always remember to transform the data structure to the easy ones before handling them
  // Runtime: 63 ms, faster than 24.49% of C++ online submissions for Number of Equivalent Domino Pairs.
  // Memory Usage: 22.1 MB, less than 40.70% of C++ online submissions for Number of Equivalent Domino Pairs.
  //
  auto result{0};
  std::unordered_map<int, int> m;

  for (size_t i = 0; i < d.size(); ++i) {
    result += m[std::min(d[i][0], d[i][1]) * 10 + std::max(d[i][0], d[i][1])]++;
  }

  return result;
}

}

#endif  // NUMBER_OF_EQUIVALENT_DOMINO_PAIRS_H_
