#ifndef IS_SUBSEQUENCE_H_
#define IS_SUBSEQUENCE_H_

#include <string>

namespace solution {

bool isSubsequence(std::string s, std::string t) {
  // for the follow up question, should use indices hashtable and binary search
  // Runtime: 0 ms
  // Memory Usage : 6.2 MB
  //
  if (s.size() > t.size()) return false;

  auto p1 = s.cbegin(), e1 = s.cend();
  size_t pos = std::string::npos;
  while (p1 != e1) {
    pos = t.find_first_of(*p1, ++pos);
    if (pos != std::string::npos) {
      p1++;
    } else {
      return false;
    }
  }
  return true;
}

}

#endif  // IS_SUBSEQUENCE_H_
