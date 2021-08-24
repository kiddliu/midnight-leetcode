#ifndef REPLACE_ELEMENTS_WITH_GREATEST_ELEMENT_ON_RIGHT_SIDE_H_
#define REPLACE_ELEMENTS_WITH_GREATEST_ELEMENT_ON_RIGHT_SIDE_H_

#include <vector>

namespace solution {

std::vector<int> replaceElements(std::vector<int>& arr) {
  // straight forward
  // Runtime: 16 ms, faster than 62.70% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
  // Memory Usage: 14.6 MB, less than 62.47% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
  //
  std::vector<int> v(arr.size(), -1);

  if (arr.size() == 1) return v;
  v[arr.size() - 2] = arr[arr.size() - 1];
  
  for (int i = arr.size() - 3; i >= 0; --i) {
    v[i] = std::max(v[i + 1], arr[i + 1]);
  }
  return v;
}

}

#endif  // REPLACE_ELEMENTS_WITH_GREATEST_ELEMENT_ON_RIGHT_SIDE_H_
