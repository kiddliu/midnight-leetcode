#ifndef DI_STRING_MATCH_H_
#define DI_STRING_MATCH_H_

#include <numeric>
#include <string>
#include <vector>

namespace solution {

std::vector<int> diStringMatch(std::string s) {
  // direct
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for DI String Match.
  // Memory Usage: 8.8 MB, less than 66.06% of C++ online submissions for DI String Match.
  //
  std::vector<int> v;
  auto low{0u}, high{s.size()};

  for (const auto& c : s) {
    v.push_back(c == 'I' ? low++ : high--);
  }
  v.push_back(low);
  return v;
}

}

#endif  // DI_STRING_MATCH_H_
