#ifndef _1_BIT_AND_2_BIT_CHARACTERS_H_
#define _1_BIT_AND_2_BIT_CHARACTERS_H_

#include <vector>

namespace solution {

bool isOneBitCharacter(std::vector<int>& bits) {
  // naive
  // Runtime: 4 ms, faster than 69.49% of C++ online submissions for 1-bit and 2-bit Characters.
  // Memory Usage: 9.6 MB, less than 87.78% of C++ online submissions for 1-bit and 2-bit Characters.
  //
  if (bits.size() == 1) return true;
  if (bits.size() == 2) return bits[0] == 0;

  for (size_t i = 0; i < bits.size(); ++i) {
    if (bits[i] == 0 && i == bits.size() - 1) return true;
    if (bits[i] == 1) ++i;
  }
  return true;
}

}

#endif  // _1_BIT_AND_2_BIT_CHARACTERS_H_
