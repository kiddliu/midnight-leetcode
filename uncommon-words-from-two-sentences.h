#ifndef UNCOMMON_WORDS_FROM_TWO_SENTENCES_H_
#define UNCOMMON_WORDS_FROM_TWO_SENTENCES_H_

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) {
  // ugly solution
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Uncommon Words from Two Sentences.
  // Memory Usage: 6.8 MB, less than 79.57% of C++ online submissions for Uncommon Words from Two Sentences.
  // beautiful, but requires more time...
  // Runtime: 4 ms, faster than 69.18% of C++ online submissions for Uncommon Words from Two Sentences.
  // Memory Usage: 6.6 MB, less than 95.46% of C++ online submissions for Uncommon Words from Two Sentences.
  //
  s1.append(1, ' '), s2.append(1, ' ');
  std::vector<std::string> v;
  std::unordered_map<std::string, int> m;
  std::string word;
  for (size_t i = 0; i < s1.size(); ++i) {
    if (s1[i] != ' ') {
      word.append(1, s1[i]);
    } else {
      ++m[word];
      word.clear();
    }
  }

  for (size_t i = 0; i < s2.size(); ++i) {
    if (s2[i] != ' ') {
      word.append(1, s2[i]);
    } else if (m.find(word) == m.end()) {
      ++m[word];
      word.clear();
    } else {
      m[word] = -1;
      word.clear();
    }
  }

  for (const auto& p : m) {
    if (p.second == 1) {
      v.push_back(p.first);
    }
  }
  return v;
}

}

#endif  // UNCOMMON_WORDS_FROM_TWO_SENTENCES_H_
