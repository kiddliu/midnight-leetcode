#ifndef DUPLICATE_ZEROS_H_
#define DUPLICATE_ZEROS_H_

#include <algorithm>
#include <vector>

namespace solution {

void duplicateZeros(std::vector<int>& arr) {
  // tired today...
  // Runtime: 4 ms, faster than 94.54% of C++ online submissions for Duplicate Zeros.
  // Memory Usage: 9.6 MB, less than 93.48% of C++ online submissions for Duplicate Zeros.
  //
  auto size = arr.size(), offset = size + std::count(arr.cbegin(), arr.cend(), 0);

  for (int i = size - 1, j = offset - 1; i != 0; --i, --j) {
    if (arr[i] != 0) {
      if (j < size) arr[j] = arr[i];
    } else {
      if (j < size) arr[j] = arr[i];
      --j;
      if (j < size) arr[j] = arr[i];
    }
  }
  }

}

#endif  // DUPLICATE_ZEROS_H_
