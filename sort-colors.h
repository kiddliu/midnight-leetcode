#ifndef SORT_COLORS_H_
#define SORT_COLORS_H_

#include <vector>

namespace solution {

void sortColors(std::vector<int>& nums) {
  // what a genius to analyze the output instead of the input...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
  // Memory Usage: 8 MB, less than 99.63% of C++ online submissions for Sort Colors.
  //
  auto i{0}, j{0}, k{0};
  for (auto& n : nums) {
    switch (n) {
      case 0:
        nums[k++] = 2, nums[j++] = 1, nums[i++] = 0;
        break;
      case 1:
        nums[k++] = 2, nums[j++] = 1;
        break;
      case 2:
        k++;
        break;
    }
  }
}

}

#endif  // SORT_COLORS_H_
