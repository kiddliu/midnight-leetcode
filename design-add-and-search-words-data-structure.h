#ifndef DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_H_
#define DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_H_

#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

/// <summary>
/// With unordered_map...
/// Runtime: 64 ms, faster than 94.45% of C++ online submissions for Design Add and Search Words Data Structure.
/// Memory Usage: 30.5 MB, less than 99.03% of C++ online submissions for Design Add and Search Words Data Structure.
/// </summary>
class WordDictionary {
 public:
  WordDictionary() {}

  void addWord(std::string word) {
    container_[word.size()].push_back(word);
  }

  bool search(std::string word) {
    for (auto& w : container_[word.size()]) {
      if (equals(w, word)) return true;
    }
    return false;
  }

 private:
  std::unordered_map<int, std::vector<std::string>> container_;
  bool equals(std::string& source, std::string& target) {
    for (size_t i{0}; i < source.size(); ++i) {
      if (target[i] == '.') continue;
      if (source[i] != target[i]) return false;
    }
    return true;
  }
};

}

#endif  // !DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_H_
