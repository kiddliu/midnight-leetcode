#ifndef REVERSE_VOWELS_OF_A_STRING_H_
#define REVERSE_VOWELS_OF_A_STRING_H_

#include <string>
#include <unordered_set>

namespace solution {

std::string reverseVowels(std::string s) {
  // plain idea
  // Runtime: 12 ms, faster than 23.12% of C++ online submissions for Reverse Vowels of a String.
  // Memory Usage: 8.2 MB, less than 22.78% of C++ online submissions for Reverse Vowels of a String.
  //
  if (s.size() == 1) return s;

  std::unordered_set<char> vowels{'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
  size_t begin{0}, end{s.size() - 1};
  while (true) {
    while (begin != s.size() && vowels.find(s[begin]) == vowels.end()) { // use find_first_of instead
      ++begin;
    }
    while (end != 0 && vowels.find(s[end]) == vowels.end()) { // use find_last_of instead
      --end;
    }

    if (begin < end) {
      if (s[begin] != s[end]) std::swap(s[begin], s[end]);
    } else {
      break;
    }
    ++begin, --end;
  }

  return s;
}

}

#endif  // REVERSE_VOWELS_OF_A_STRING_H_
