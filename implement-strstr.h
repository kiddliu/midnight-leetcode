#ifndef IMPLEMENT_STRSTR_H_
#define IMPLEMENT_STRSTR_H_

#include <string>

namespace solution {

int strStr(std::string haystack, std::string needle) {
  // Brute force
  // Runtime: 4 ms, faster than 76.64% of C++ online submissions for Implement strStr().
  // Memory Usage: 6.8 MB, less than 64.77% of C++ online submissions for Implement strStr().
  auto haystackSize = haystack.size();
  auto needleSize = needle.size();

  if (haystackSize == 0 && needleSize == 0) return 0;
  if (haystackSize == 0) return -1;
  if (needleSize == 0) return 0;
  if (needleSize > haystackSize) return -1;

  auto begin = haystack.cbegin(), it = begin,
       end = haystack.cend() - needleSize + 1;
  while (it != end) {
    if (*it == needle[0]) {
      if (std::string(it, it + needleSize) == needle) return it - begin;
    }
    ++it;
  }
  return -1;
}

}

#endif  // IMPLEMENT_STRSTR_H_
