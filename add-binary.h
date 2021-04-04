#ifndef ADD_BINARY_H_
#define ADD_BINARY_H_

#include <string>

namespace solution {

std::string addBinary(std::string a, std::string b) {
  // Brute force
  // Runtime: 4 ms, faster than 63.38% of C++ online submissions for Add Binary.
  // Memory Usage: 6.1 MB, less than 87.97% of C++ online submissions for Add Binary.
  //
  int offset = 0, l = std::max(a.size(), b.size());
  int c1, c2, sum = 0, carry = 0;
  std::string result;

  while (offset != l) {
    c1 = offset > a.size() - 1 ? 0 : a[a.size() - offset - 1] - '0';
    c2 = offset > b.size() - 1 ? 0 : b[b.size() - offset - 1] - '0';
    sum = c1 + c2 + carry;
    carry = sum > 1;
    sum %= 2;

    result.insert(result.begin(), sum + '0');
    offset++;
  }

  if (carry) result.insert(result.begin(), '1');

  return result;
}

}

#endif  // ADD_BINARY_H_
