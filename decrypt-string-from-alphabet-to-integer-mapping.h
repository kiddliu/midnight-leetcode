#ifndef DECRYPT_STRING_FROM_ALPHABET_TO_INTEGER_MAPPING_H_
#define DECRYPT_STRING_FROM_ALPHABET_TO_INTEGER_MAPPING_H_

#include <string>

namespace solution {

std::string freqAlphabets(std::string s) {
  // straight forward
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decrypt String from Alphabet to Integer Mapping.
  // Memory Usage: 6.2 MB, less than 44.44% of C++ online submissions for Decrypt String from Alphabet to Integer Mapping.
  //
  std::string result;
  for (size_t i = 0; i < s.size(); ++i) {
    int number{0};
    if (i + 2 < s.size() && s[i + 2] == '#') {
      number = std::stoi(s.substr(i, 2));
      i += 2;
    } else {
      number = std::stoi(s.substr(i, 1));
    }
    result.append(1, number + 'a' - 1);
  }

  return result;
}


}


#endif  // DECRYPT_STRING_FROM_ALPHABET_TO_INTEGER_MAPPING_H_
