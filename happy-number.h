#ifndef HAPPY_NUMBER_H_
#define HAPPY_NUMBER_H_

#include <set>

namespace solution {

bool isHappy(int n) {
  // With set
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Happy Number.
  // Memory Usage: 6.2 MB, less than 46.14% of C++ online submissions for Happy Number.
  //
  std::set<int> local{};

  while (true) {
    if (local.find(n) == local.end()) {
      local.insert(n);

      auto original{n};
      n = 0;
      while (original > 0) {
        auto mod = original % 10;
        n += mod * mod;
        original /= 10;
      }

      if (n == 1) {
        return true;
      }
    } else {
      return false;
    }
  }

  throw 0;
}

}

#endif  // HAPPY_NUMBER_H_
