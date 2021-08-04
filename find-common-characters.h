#ifndef FIND_COMMON_CHARACTERS_H_
#define FIND_COMMON_CHARACTERS_H_

#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

namespace solution {

std::vector<std::string> commonChars(std::vector<std::string>& words) {
  // i'm practising STL...LOL
  // the simplest way is to track the heat map of each word and keep the minimum of each alphabet
  // remember to_string(char) returns "96" for 'a' and string(1, char) returns "a"
  // 
  // Runtime: 28 ms, faster than 13.26% of C++ online submissions for Find Common Characters.
  // Memory Usage: 30.2 MB, less than 5.12% of C++ online submissions for Find Common Characters.
  //
  for (auto& word : words) {
    std::sort(word.begin(), word.end());
  }
  
  std::vector<std::string> v;
  for (const auto& c : words[0]) {
    v.push_back(std::string(1, c));
  }

  for (size_t i = 1; i < words.size(); ++i) {
    std::vector<std::string> w, temp;
    for (const auto& c : words[i]) {
      w.push_back(std::string(1, c));
    }
    std::set_intersection(v.begin(), v.end(), w.begin(), w.end(),
                          std::back_inserter(temp));
    v = std::move(temp);
  }

  return v;
}

}

#endif  // FIND_COMMON_CHARACTERS_H_
