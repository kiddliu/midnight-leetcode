#ifndef COUNT_SPECIAL_QUADRUPLETS_H_
#define COUNT_SPECIAL_QUADRUPLETS_H_

#include <vector>

namespace solution {

int countQuadruplets(std::vector<int>& n) {
  // actually it's still o^4
  // Runtime: 20 ms, faster than 97.22% of C++ online submissions for Count Special Quadruplets.
  // Memory Usage: 10.5 MB, less than 36.28% of C++ online submissions for Count Special Quadruplets.
  //
  int cnt[101] = {}, res = 0;
  for (int k = n.size() - 1; k > 1; ++cnt[n[k--]])
    for (int i = 0; i < k; ++i)
      for (int j = i + 1; j < k; ++j)
        if (n[i] + n[j] + n[k] <= 100) res += cnt[n[i] + n[j] + n[k]];
  return res;
}

}

#endif  // COUNT_SPECIAL_QUADRUPLETS_H_
