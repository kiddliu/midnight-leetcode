#ifndef K_DIFF_PAIRS_IN_AN_ARRAY_H_
#define K_DIFF_PAIRS_IN_AN_ARRAY_H_

#include <set>
#include <vector>

namespace solution {

int findPairs(std::vector<int>& nums, int k) {
  // with multiset...
  // Runtime: 18 ms, faster than 75.91% of C++ online submissions for K-diff Pairs in an Array.
  // Memory Usage: 14.1 MB, less than 22.85% of C++ online submissions for K-diff Pairs in an Array.
  //
  std::multiset<int> s{nums.cbegin(), nums.cend()};

  auto result{0};
  if (k == 0) {
    auto current{INT_MIN};
    for (auto& i : s) {
      if (i != current) {
        result += s.count(i) > 1;
        current = i;
      }
    }
  } else {
    auto end = *s.rbegin(), diff = end -*s.begin();
    if (diff < k) return 0;
    if (diff == k) return 1;

    auto current{INT_MIN};
    for (auto& i : s) {
      if (end - i < k) break;
      
      if (i != current) {
        result += s.count(i + k) > 0;
        current = i;
      }
    }
  }
  return result;
}

}

#endif  // !K_DIFF_PAIRS_IN_AN_ARRAY_H_
