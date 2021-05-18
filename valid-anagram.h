#ifndef VALID_ANAGRAM_H_
#define VALID_ANAGRAM_H_

#include <algorithm>
#include <string>
#include <unordered_map>

namespace solution {

bool isAnagram(std::string s, std::string t) {
  // hashtable
  // Runtime: 12 ms, faster than 50.43% of C++ online submissions for Valid Anagram.
  // Memory Usage: 7.4 MB, less than 5.89% of C++ online submissions for Valid Anagram.
  //
  if (s.length() == 1) return s == t;

  std::unordered_map<char, int> m;
  std::for_each(s.cbegin(), s.cend(), [&m](const auto& c) {
    if (m.find(c) == m.end()) {
      m.insert({c, 1});
    } else {
      m[c] += 1;
    }
  });
  std::for_each(t.cbegin(), t.cend(), [&m](const auto& c) {
    if (m.find(c) == m.end()) {
      m.insert({c, -1});
    } else {
      m[c] -= 1;
    }
  });

  return !std::any_of(m.cbegin(), m.cend(),
                     [](const std::unordered_map<char, int>::value_type& pair) {
                       return pair.second != 0;
                     });
}

}

#endif  // VALID_ANAGRAM_H_
