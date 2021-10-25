#ifndef CONCATENATION_OF_ARRAY_H_
#define CONCATENATION_OF_ARRAY_H_

#include <vector>

namespace solution {

std::vector<int> getConcatenation(std::vector<int>& nums) {
  // what's the point of this
  // Runtime: 4 ms, faster than 97.79% of C++ online submissions for Concatenation of Array.
  // Memory Usage: 12.8 MB, less than 36.88% of C++ online submissions for Concatenation of Array.
  //
  nums.insert(nums.end(), nums.begin(), nums.end());
  return nums;
}

}

#endif  // CONCATENATION_OF_ARRAY_H_
