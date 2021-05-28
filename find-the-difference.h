#ifndef FIND_THE_DIFFERENCE_H_
#define FIND_THE_DIFFERENCE_H_

#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

namespace solution {

char findTheDifference(std::string s, std::string t) {
  // built-in algorithm
  // Runtime: 4 ms, faster than 76.03% of C++ online submissions for Find the Difference.
  // Memory Usage: 6.7 MB, less than 42.13% of C++ online submissions for Find the Difference.
  //
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end());

  std::vector<char> v;
  std::set_difference(t.cbegin(), t.cend(),
                      s.cbegin(), s.cend(),
                      std::back_inserter(v));

  return v.at(0);
}

}  // namespace solution

#endif  // FIND_THE_DIFFERENCE_H_
