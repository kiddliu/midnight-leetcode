#ifndef ELEMENT_APPEARING_MORE_THAN_25_IN_SORTED_ARRAY_H_
#define ELEMENT_APPEARING_MORE_THAN_25_IN_SORTED_ARRAY_H_

#include <unordered_map>
#include <vector>

namespace solution {

int findSpecialInteger(std::vector<int>& arr) {
  // 25% means the result shows up at the quarter/half/3 quarters position
  // interesting finding
  // Runtime: 12 ms, faster than 73.97% of C++ online submissions for Element Appearing More Than 25% In Sorted Array.
  // Memory Usage: 12.5 MB, less than 64.26% of C++ online submissions for Element Appearing More Than 25% In Sorted Array.
  //
  auto size = static_cast<double>(arr.size());

  for (size_t i = size / 4; i < arr.size(); i += size / 4) {
    if (std::count(arr.cbegin(), arr.cend(), arr[i]) / size > 0.25)
      return arr[i];
  }
  return -1;
}


}


#endif  // ELEMENT_APPEARING_MORE_THAN_25_IN_SORTED_ARRAY_H_
