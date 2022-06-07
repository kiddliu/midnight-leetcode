#ifndef REVERSE_WORDS_IN_A_STRING_H_
#define REVERSE_WORDS_IN_A_STRING_H_

#include <algorithm>
#include <string>

namespace solution {

std::string reverseWords(std::string s) {
  std::reverse(s.begin(), s.end());

  int j{0}, size = s.size();
  for (auto i{0}; i < size; ++i) {
    if (s[i] == ' ') continue;

    if (j == 0) s[j++] = ' ';
    auto p{i};
    while (p < size && s[p] != ' ') {
      s[j++] = s[p++];
    }
    std::reverse(s.begin() + j - p + i, s.begin() + j);
    i = p;
  }

  s.erase(s.begin() + j, s.end());
  return s;
}

}  // namespace solution

#endif  // !REVERSE_WORDS_IN_A_STRING_H_
