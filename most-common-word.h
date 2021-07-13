#ifndef MOST_COMMON_WORD_H_
#define MOST_COMMON_WORD_H_

#include <algorithm>
#include <regex>
#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

std::string mostCommonWord(std::string paragraph, std::vector<std::string>& banned) {
  // why regex is so slow ?
  // Runtime: 68 ms, faster than 6.14% of C++ online submissions for Most Common Word.
  // Memory Usage: 14.9 MB, less than 5.93% of C++ online submissions for Most Common Word.
  //
  std::unordered_map<std::string, size_t> m;
  
  std::regex re("\\w+");
  std::sregex_token_iterator first{paragraph.cbegin(), paragraph.cend(), re},
      last;
  while (first != last) {
    auto word = std::move(first->str());
    for (auto& c : word) {
      c = std::tolower(c);
    }
    if (std::find(banned.cbegin(), banned.cend(), word) == banned.end()) ++m[word];
    ++first;
  }

  std::pair<std::string, size_t> result{"", 0};
  for (auto& p : m) {
    if (result.second < p.second) {
      result = std::move(p);
    }
  }

  return result.first;
}

}

#endif  // MOST_COMMON_WORD_H_
