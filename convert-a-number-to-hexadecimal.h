#ifndef CONVERT_A_NUMBER_TO_HEXADECIMAL_H_
#define CONVERT_A_NUMBER_TO_HEXADECIMAL_H_

#include <string>

namespace solution {

std::string toHex(int num) {
  // static_cast do all the magic for negative numbers
  // Runtime: 0 ms
  // Memory Usage : 5.8 MB
  //
  if (num == 0) return "0";

  std::string result;
  auto n = static_cast<unsigned int>(num);
  while (n > 0) {
    auto d = n % 16;
    result.insert(result.cbegin(), d < 10 ? d + '0' : d + 'W');
    n >>= 4;
  }
   return result;
}

}

#endif  // CONVERT_A_NUMBER_TO_HEXADECIMAL_H_
