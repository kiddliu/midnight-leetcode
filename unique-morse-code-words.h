#ifndef UNIQUE_MORSE_CODE_WORDS_H_
#define UNIQUE_MORSE_CODE_WORDS_H_

#include <algorithm>
#include <iterator>
#include <string>
#include <unordered_set>
#include <vector>

namespace solution {

int uniqueMorseRepresentations(std::vector<std::string>& words) {
  // if insert fails, std::move will not happen
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Morse Code Words.
  // Memory Usage: 8.4 MB, less than 86.21% of C++ online submissions for Unique Morse Code Words.
  //
  std::string table[26]{".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                        "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                        "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                        "...-", ".--",  "-..-", "-.--", "--.."};
  std::unordered_set<std::string> s;
  std::string morse;

  for (const auto& word : words) {
    for (const auto& c : word) {
      morse.append(table[c - 'a']);
    }
    auto p = s.insert(std::move(morse));
    if (!p.second) morse.clear();
  }

  return s.size();
}

}

#endif  // UNIQUE_MORSE_CODE_WORDS_H_
