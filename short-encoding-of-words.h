#ifndef SHORT_ENCODING_OF_WORDS_H_
#define SHORT_ENCODING_OF_WORDS_H_

#include <algorithm>
#include <string>
#include <vector>

namespace solution {

int minimumLengthEncoding(std::vector<std::string>& words) {
  // reverse and find if the next begins with the current...
  // Runtime: 66 ms, faster than 76.96% of C++ online submissions for Short Encoding of Words.
  // Memory Usage: 13.6 MB, less than 100.00% of C++ online submissions for Short Encoding of Words.
  //
  for (auto& word : words) {
    std::reverse(word.begin(), word.end());
  }
  std::sort(words.begin(), words.end());

  int size = words.size() - 1, result{0};
  for (auto i{0}; i < size; ++i) {
    result += words[i + 1].substr(0, words[i].size()) == words[i]
                  ? 0
                  : words[i].size() + 1;
  }
  return result + words.back().size() + 1;
}

}

#endif  // !SHORT_ENCODING_OF_WORDS_H_
