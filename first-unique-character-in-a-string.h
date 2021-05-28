#ifndef FIRST_UNIQUE_CHARACTER_IN_A_STRING_H_
#define FIRST_UNIQUE_CHARACTER_IN_A_STRING_H_

#include <string>
#include <unordered_map>

namespace solution {

int firstUniqChar(std::string s) {
  // second traversal should run on `map`
  // Runtime: 48 ms, faster than 32.59% of C++ online submissions for First Unique Character in a String.
  // Memory Usage: 10.8 MB, less than 9.32% of C++ online submissions for First Unique Character in a String.
  //
  std::unordered_map<char, int> map{};

  for (size_t index = 0; index < s.size(); ++index) {
    if (map.find(s[index]) == map.end()) {
      map.insert({s[index], index});
    } else {
      map[s[index]] = INT_MAX;
    }
  }

  for (auto& c : s) {
    if (map[c] != INT_MAX) {
      return map[c];
    }
  }
  return -1;
}

}


#endif  // FIRST_UNIQUE_CHARACTER_IN_A_STRING_H_
