#ifndef RANK_TRANSFORM_OF_AN_ARRAY_H_
#define RANK_TRANSFORM_OF_AN_ARRAY_H_

#include <map>
#include <vector>

namespace solution {

std::vector<int> arrayRankTransform(std::vector<int>& arr) {
  // straight forward
  // Runtime: 124 ms, faster than 43.13% of C++ online submissions for Rank Transform of an Array.
  // Memory Usage: 44.9 MB, less than 24.31% of C++ online submissions for Rank Transform of an Array.
  //
  std::multimap<int, int> m;
  for (size_t i = 0; i < arr.size(); ++i) {
    m.insert({arr[i], i});
  }

  std::vector<int> v(arr.size(), 0);
  auto rank{0}, last{INT_MAX};
  for (auto& p : m) {
    if (last != p.first) {
      ++rank;
      last = p.first;
    }
    v[p.second] = rank;
  }
  return v;
}


}

#endif  // RANK_TRANSFORM_OF_AN_ARRAY_H_
