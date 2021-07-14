#ifndef GOAT_LATIN_H_
#define GOAT_LATIN_H_

#include <string>

namespace solution {

std::string toGoatLatin(std::string sentence) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Goat Latin.
  // Memory Usage: 6.3 MB, less than 92.51% of C++ online submissions for Goat Latin.
  //
  std::string r, vowels{"aeiouAEIOU"};
  auto count{1};
  for (size_t i = 0; i < sentence.size();) {
    auto vowel = vowels.find(sentence[i]) != -1;
    auto start = vowel ? i : i + 1;
    auto end = sentence.find(' ', i);
    end = end == -1 ? sentence.size() : end;
    r.append(sentence, start, end - start);
    if (!vowel) {
      r.push_back(sentence[i]);
    }
    r.append("ma");
    r.append(count++, 'a');
    if (end != sentence.size()) r.push_back(' ');

    i = end;
    while (sentence[i] == ' ') ++i;
  }
  return r;
}

}  // namespace solution

#endif  // GOAT_LATIN_H_
