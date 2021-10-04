#ifndef DETERMINE_IF_STRING_HALVES_ARE_ALIKE_H_
#define DETERMINE_IF_STRING_HALVES_ARE_ALIKE_H_

#include <algorithm>
#include <cctype>
#include <string>

namespace solution {

bool halvesAreAlike(std::string s) {
  // straight forward
  // https://stackoverflow.com/q/47846406/1937578
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Determine if String Halves Are Alike.
  // Memory Usage: 6.6 MB, less than 45.48% of C++ online submissions for Determine if String Halves Are Alike.
  //
  auto is_vowel = [](const char& c) { return (0x208222 >> (c & 0x1f)) & 1; };
  return std::count_if(s.cbegin(), s.cbegin() + s.size() / 2, is_vowel) ==
         std::count_if(s.cbegin() + s.size() / 2, s.cend(), is_vowel);
}

}

#endif  // !DETERMINE_IF_STRING_HALVES_ARE_ALIKE_H_
