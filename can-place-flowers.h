#ifndef CAN_PLACE_FLOWERS_H_
#define CAN_PLACE_FLOWERS_H_

#include <vector>

namespace solution {

bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
  // insert 0 at both ends to avoid additional check
  // Runtime: 12 ms, faster than 92.56% of C++ online submissions for Can Place Flowers.
  // Memory Usage: 20.3 MB, less than 20.30% of C++ online submissions for Can Place Flowers.
  //
  if (n == 0) return true;
  if (flowerbed.size() == 1) return flowerbed[0] == 0;

  flowerbed.insert(flowerbed.begin(), 0);
  flowerbed.push_back(0);

  auto p = flowerbed.begin() + 1, e = flowerbed.end();
  while (p + 1 != e) {
    if (*p == 0 && *(p - 1) == 0 && *(p + 1) == 0) {
      --n;
      if (n == 0) return true;
      *p = 1;
    }
    ++p;
  }
  return false;
}

}

#endif  // CAN_PLACE_FLOWERS_H_
