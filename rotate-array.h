#ifndef ROTATE_ARRAY_H_
#define ROTATE_ARRAY_H_

#include <algorithm>
#include <vector>

namespace solution {

void rotate(std::vector<int>& nums, int k) {
  // smart!
  // Runtime: 51 ms, faster than 36.96% of C++ online submissions for Rotate Array.
  // Memory Usage: 25.1 MB, less than 54.06% of C++ online submissions for Rotate Array.
  //
	k %= nums.size();
  std::reverse(nums.begin(), nums.end());
  std::reverse(nums.begin(), nums.begin() + k);
  std::reverse(nums.begin() + k, nums.end());
}

}

#endif  // !ROTATE_ARRAY_H_
