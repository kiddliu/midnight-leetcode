#ifndef VERIFYING_AN_ALIEN_DICTRIONARY_H_
#define VERIFYING_AN_ALIEN_DICTRIONARY_H_

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

namespace solution {

bool isAlienSorted(std::vector<std::string>& words, std::string order) {
  // should apply the order to the words, but changing the content make it weird
  // Runtime: 4 ms, faster than 89.80% of C++ online submissions for Verifying an Alien Dictionary.
  // Memory Usage: 9.6 MB, less than 33.75% of C++ online submissions for Verifying an Alien Dictionary. 
  //
  std::unordered_map<char, int> m;
  for (size_t i = 0; i < order.size(); ++i) {
    m[order[i]] = i;
  }
  return std::is_sorted(words.begin(), words.end(),
                        [&m](const std::string &a, const std::string &b) {
                          auto length = std::min(a.size(), b.size()), i{0u};
                          while (i < length) {
                            if (m[a[i]] > m[b[i]]) return false;
                            if (m[a[i]] < m[b[i]]) return true;
                            ++i;
                          }
                          return a.size() < b.size();
                        });
}

}

#endif  // VERIFYING_AN_ALIEN_DICTRIONARY_H_
