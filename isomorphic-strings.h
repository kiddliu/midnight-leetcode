#ifndef ISOMORPHIC_STRINGS_H_
#define ISOMORPHIC_STRINGS_H_

#include <algorithm>
#include <string>
#include <unordered_map>

namespace solution {

bool isIsomorphic(std::string s, std::string t) {
  // Break when the mapping value is duplicated, should use 2 maps instead 
  // Runtime: 8 ms, faster than 56.33% of C++ online submissions for Isomorphic Strings.
  // Memory Usage: 7 MB, less than 34.70% of C++ online submissions for Isomorphic Strings.
  //
  auto p1 = s.cbegin(), p2 = t.cbegin(),
       e1 = s.cend(),   e2 = t.cend();

  std::unordered_map<char, char> map;
  while (p1 != e1) {
    auto c1 = *p1, c2 = *p2;

    if (map.find(c1) != map.end()) {
      if (map[c1] != c2) {
        return false;
      }
    } else {
      if (std::find_if(map.cbegin(), map.cend(),
                       [c2](const std::unordered_map<char, char>::value_type pair) {
                          return pair.second == c2;
                       }) != map.cend()) {
        return false;
      } else {
        map.insert({c1, c2});
      }
    }
    p1++, p2++;
  }

  return true;
}

}

#endif  // ISOMORPHIC_STRINGS_H_
