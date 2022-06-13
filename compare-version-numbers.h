#ifndef COMPARE_VERSION_NUMBERS_H_
#define COMPARE_VERSION_NUMBERS_H_

#include <string>

namespace solution {

int compareVersion(std::string version1, std::string version2, int offset1 = 0,
                   int offset2 = 0) {
  // recursive
  // Runtime: 3 ms, faster than 41.04% of C++ online submissions for Compare Version Numbers.
  // Memory Usage: 7.1 MB, less than 5.65% of C++ online submissions for Compare Version Numbers.
  //
  int n1 = offset1 == -1 ? -1 : version1.find('.', offset1), n2 = offset2 == -1 ? -1 : version2.find('.', offset2);
  auto v1 = offset1 == -1 ? 0 : std::stoi(version1.substr(offset1, n1 - offset1));
  auto v2 = offset2 == -1 ? 0 : std::stoi(version2.substr(offset2, n2 - offset2));
  if (v1 > v2) return 1;
  if (v1 < v2) return -1;
  if (offset1 == -1 && offset2 == -1) return 0;
  return compareVersion(version1, version2, n1 == -1 ? n1 : n1 + 1, n2 == -1 ? n2 : n2 + 1);
}

}

#endif  // !COMPARE_VERSION_NUMBERS_H_
