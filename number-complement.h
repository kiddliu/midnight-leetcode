#ifndef NUMBER_COMPLEMENT_H_
#define NUMBER_COMPLEMENT_H_

#include <bitset>

namespace solution {

int findComplement(int num) {
  // the cpp way, but it does not get the essense of the question
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number Complement.
  // Memory Usage: 5.9 MB, less than 33.75% of C++ online submissions for Number Complement.
  //
  //std::bitset<32> bs(num);
  //bool leading{true};
  //for (std::size_t i = 32; i > 0; --i) {
  //  if (bs[i - 1]) {
  //    bs.reset(i - 1);
  //    leading = false;
  //  } else if (!leading) {
  //    bs.set(i - 1);
  //  }
  //}
  //return static_cast<int>(bs.to_ulong());

  // the key to this question is how you can build a mask quick enough
  // take the input of 5 as the example
  // you can create a mask of 00000111, or 11111000
  // so always create a full mask by ~0, and then do left-move / right-move until it fits
  // finaly do bit and with ~num
  unsigned mask = ~0;
  while (num & mask) mask <<= 1;
  return ~mask & ~num;
}

}  // namespace solution

#endif  // NUMBER_COMPLEMENT_H_
