#ifndef LONGEST_UNCOMMON_SUBSEQUENCE_I_H_
#define LONGEST_UNCOMMON_SUBSEQUENCE_I_H_

#include <algorithm>
#include <string>

namespace solution {

int findLUSlength(std::string a, std::string b) {
  // naive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Longest Uncommon Subsequence I.
  // Memory Usage: 6.2 MB, less than 14.98% of C++ online submissions for Longest Uncommon Subsequence I.
  //
  return a != b ? std::max(a.size(), b.size()) : -1;
}

}

#endif  // LONGEST_UNCOMMON_SUBSEQUENCE_I_H_
