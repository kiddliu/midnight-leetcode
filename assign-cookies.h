#ifndef ASSIGN_COOKIES_H_
#define ASSIGN_COOKIES_H_

#include <algorithm>
#include <vector>

namespace solution {

int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
  // naive
  // Runtime: 32 ms, faster than 25.74% of C++ online submissions for Assign Cookies.
  // Memory Usage: 17.4 MB, less than 97.04% of C++ online submissions for Assign Cookies.
  //
  std::sort(g.begin(), g.end());
  std::sort(s.begin(), s.end());

  auto p1 = g.crbegin(), e1 = g.crend(), p2 = s.crbegin(), e2 = s.crend();

  auto result{0};
  while (p1 != e1) {
    if (p2 == e2) break;

    if (*p2 >= *p1) {
      ++result, ++p2;
    }
    ++p1;
  }
  return result;
}

}

#endif  // ASSIGN_COOKIES_H_
