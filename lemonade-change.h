#ifndef LEMONADE_CHANGE_H_
#define LEMONADE_CHANGE_H_

#include <vector>

namespace solution {

bool lemonadeChange(std::vector<int>& bills) {
  // when dealing with 20, it's a greedy solution
  // Runtime: 12 ms, faster than 85.74% of C++ online submissions for Lemonade Change.
  // Memory Usage: 17.1 MB, less than 42.13% of C++ online submissions for Lemonade Change.
  //
  auto fives{0}, tens{0};
  for (auto& b : bills) {
    switch (b) {
      case 5:
        fives += 1;
        break;
      case 10:
        tens += 1;
        if (fives == 0) return false;
        fives -= 1;
        break;
      case 20:
        if (tens > 0 && fives > 0) {
          tens -= 1, fives -= 1;
        } else if (fives > 2) {
          fives -= 3;
        } else {
          return false;
        }
        break;
    }
  }
  return true;
}

}

#endif  // LEMONADE_CHANGE_H_
