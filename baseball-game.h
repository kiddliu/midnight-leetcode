#ifndef BASEBALL_GAME_H_
#define BASEBALL_GAME_H_

#include <numeric>
#include <string>
#include <vector>

namespace solution {

int calPoints(std::vector<std::string>& ops) {
  // stack is more appropriate
  // Runtime: 4 ms, faster than 79.39% of C++ online submissions for Baseball Game.
  // Memory Usage: 8.4 MB, less than 66.77% of C++ online submissions for Baseball Game.
  //
  std::vector<int> v;

  for (size_t i = 0, j = 0; i < ops.size(); ++i, ++j) {
    if (ops[i] == "+") {
      v.push_back(v[j - 2] + v[j - 1]);
    } else if (ops[i] == "D") {
      v.push_back(v[i - 1] * 2);
    } else if (ops[i] == "C") {
      v.erase(v.end() - 1);
      j -= 2;
    } else {
      v.push_back(std::stoi(ops[i]));
    }
  }

  return std::accumulate(v.cbegin(), v.cend(), 0);
}

}

#endif  // BASEBALL_GAME_H_
