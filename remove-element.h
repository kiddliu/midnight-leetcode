#ifndef REMOVE_ELEMENT_H_
#define REMOVE_ELEMENT_H_

#include <algorithm>
#include <vector>

namespace solution {

int removeElement(std::vector<int>& nums, int val) {
  // Brute force
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove
  // Element. Memory Usage: 8.7 MB, less than 88.04% of C++ online submissions
  // for Remove Element.
  //
  auto current = nums.begin();
  while (current != nums.end()) {
    if (*current == val) {
      current = nums.erase(current);
    } else {
      current++;
    }
  }
  return nums.size();
}

}  // namespace solution

#endif  // REMOVE_ELEMENT_H_
