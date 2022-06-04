#ifndef WORD_BREAK_H_
#define WORD_BREAK_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

bool wordBreak(std::string_view s,
               std::unordered_map<char, std::vector<std::string>>& map,
               std::unordered_map<std::string_view, bool>& memo) {
  if (s.size() == 0) return true;
  if (map.count(s.front()) == 0) return false;

  auto result{false};
  for (auto& word : map[s.front()]) {
    auto size = word.size();
    if (s.substr(0, size) == word) {
      auto substr{s.substr(size)};
      if (memo.count(substr) == 0) {
        memo[substr] = wordBreak(substr, map, memo);
      }

      result = result || memo[substr];
    }
  }

  return result;
}

bool wordBreak(std::string s, std::vector<std::string>& wordDict) {
  // DP...
  // Runtime: 4 ms, faster than 88.64% of C++ online submissions for Word Break.
  // Memory Usage: 8.2 MB, less than 76.97% of C++ online submissions for Word Break.
  //
  std::unordered_map<char, std::vector<std::string>> map;
  for (auto& word : wordDict) {
    map[word.front()].push_back(word);
  }
  std::unordered_map<std::string_view, bool> memo;

  return wordBreak(s, map, memo);
}

}

#endif  // WORD_BREAK_H_
