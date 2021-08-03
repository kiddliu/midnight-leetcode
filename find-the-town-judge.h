#ifndef FIND_THE_TOWN_JUDGE_H_
#define FIND_THE_TOWN_JUDGE_H_

#include <vector>

namespace solution {

int findJudge(int n, std::vector<std::vector<int>>& trust) {
  // first I was thinking using map, but vector should applies
  // Runtime: 164 ms, faster than 63.80% of C++ online submissions for Find the Town Judge.
  // Memory Usage: 60.6 MB, less than 92.37% of C++ online submissions for Find the Town Judge.
  //
  std::vector<int> v(n + 1, 1);

  for (const auto& vote : trust) {
    --v[vote[0]];
    ++v[vote[1]];
  }

  for (size_t i = 1; i < v.size(); ++i) {
    if (v[i] == n) return i;
  }

  return -1;
}

}


#endif  // FIND_THE_TOWN_JUDGE_H_
