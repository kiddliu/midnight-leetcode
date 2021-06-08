#ifndef NEXT_GREATER_ELEMENT_I_H_
#define NEXT_GREATER_ELEMENT_I_H_

#include <algorithm>
#include <iterator>
#include <stack>
#include <unordered_map>
#include <vector>

namespace solution {

std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
  // hashset
  // Runtime: 20 ms, faster than 14.08% of C++ online submissions for Next Greater Element I.
  // Memory Usage: 9 MB, less than 32.26% of C++ online submissions for Next Greater Element I.
  //
  std::unordered_map<int, int> m;
  
  //auto p2 = nums2.cbegin(), p2x = p2 + 1, e2 = nums2.cend();
  // should use stack here, should design more general case to find out the clues
  //while (p2 != e2) {
  //  while (p2x != e2 && *p2x <= *p2) {
  //    ++p2x;
  //  }
  //  m.insert({*p2, p2x == e2 ? -1 : *p2x});
  //  ++p2;
  //  if (p2 + 1 != e2) p2x = p2 + 1;
  //}
  std::stack<int> s;
  for (int n : nums2) {
    while (s.size() && s.top() < n) {
      m[s.top()] = n;
      s.pop();
    }
    s.push(n);
  }

  std::vector<int> result;
  std::transform(nums1.cbegin(), nums1.cend(), std::back_inserter(result),
                 [&m](const auto& i) { return m.count(i) ? m[i] : -1; });
  return result;
}

}

#endif  // NEXT_GREATER_ELEMENT_I_H_
