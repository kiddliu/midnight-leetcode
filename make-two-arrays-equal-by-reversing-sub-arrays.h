#ifndef MAKE_TWO_ARRAYS_EQUAL_BY_REVERSING_SUB_ARRAYS_H_
#define MAKE_TWO_ARRAYS_EQUAL_BY_REVERSING_SUB_ARRAYS_H_

#include <algorithm>
#include <vector>

namespace solution {

bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
  // staight forward
  // Runtime: 14 ms, faster than 40.22% of C++ online submissions for Make Two Arrays Equal by Reversing Sub-arrays.
  // Memory Usage: 14.2 MB, less than 46.60% of C++ online submissions for Make Two Arrays Equal by Reversing Sub-arrays.
  //
  std::sort(target.begin(), target.end());
  std::sort(arr.begin(), arr.end());

  return target == arr;
}

}

#endif  // MAKE_TWO_ARRAYS_EQUAL_BY_REVERSING_SUB_ARRAYS_H_
