#ifndef WORD_PATTERN_H_
#define WORD_PATTERN_H_

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

namespace solution {

bool wordPattern(std::string pattern, std::string s) {
  // actually, we can read and compare on the fly
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Word Pattern.
  // Memory Usage: 6.5 MB, less than 17.12% of C++ online submissions for Word Pattern.
  //
  std::istringstream ss{s};
  std::string token, p{};
  std::unordered_map<std::string, std::string> m{};

  while (std::getline(ss, token, ' ')) {
    if (m.find(token) == m.end()) {
      m.insert({token, std::string(1, 'a' + m.size())}); 
    }
    p.append(m[token]);
  }
  if (pattern.size() != p.size()) return false;

  int m1[256] = {0}, m2[256] = {0}, n = pattern.size();
  for (int i = 0; i < n; ++i) {
    if (m1[pattern[i]] != m2[p[i]]) return false;
    m1[pattern[i]] = i + 1;
    m2[p[i]] = i + 1;
  }
  return true;
}

}


#endif  // WORD_PATTERN_H_
