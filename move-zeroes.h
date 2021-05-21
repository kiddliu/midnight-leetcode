#ifndef MOVE_ZEROES_H_
#define MOVE_ZEROES_H_

#include <algorithm>
#include <vector>

namespace solution {

void moveZeroes(std::vector<int>& nums) {
  // somewhat optimal, i'm not sure
  // Runtime: 4 ms, faster than 89.62% of C++ online submissions for Move Zeroes.
  // Memory Usage: 8.8 MB, less than 82.59% of C++ online submissions for Move Zeroes.
  // 
  if (nums.size() == 1) return;

  auto pz = nums.begin(), pnz = nums.begin();

  while (true) {
    while (pz != nums.end() && *pz != 0) pz++;
    if (pz == nums.end()) return;
    while (pnz != nums.end() && *pnz == 0) pnz++;
    if (pnz == nums.end()) return;

    if (pz < pnz) {
      std::iter_swap(pz, pnz);
    } else {
      pnz = pz;    
    }
  }
}

}

#endif  // MOVE_ZEROES_H_
