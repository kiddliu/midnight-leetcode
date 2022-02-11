#ifndef PERMUTATION_IN_STRING_H_
#define PERMUTATION_IN_STRING_H_

#include <algorithm>
#include <string>
#include <unordered_set>

namespace solution {

bool checkInclusion(std::string s1, std::string s2) {
  // with STL
  // Runtime: 151 ms, faster than 14.15% of C++ online submissions for Permutation in String.
  // Memory Usage: 7.9 MB, less than 19.74% of C++ online submissions for Permutation in String.
  //
  if (s1.size() > s2.size()) return false;

  std::unordered_set<char> s{s1.cbegin(), s1.cend()};
  int max = s2.size() - s1.size() + 1;
  for (auto i{0}; i < max; ++i) {
    if (s.count(s2[i]) && std::is_permutation(s1.cbegin(), s1.cend(), s2.cbegin() + i)) {
      return true;
    }
  }
  return false;
}

}

#endif  // !PERMUTATION_IN_STRING_H_
