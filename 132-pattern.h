#ifndef _132_PATTERN_H_
#define _132_PATTERN_H_

#include <stack>
#include <vector>

namespace solution {

bool find132pattern(std::vector<int>& nums) {
  // with ranges
  // Runtime: 214 ms, faster than 11.45% of C++ online submissions for 132 Pattern.
  // Memory Usage: 36.8 MB, less than 99.72% of C++ online submissions for 132 Pattern.
  //
  //int min = nums.front(), max = min, size = nums.size();
  //std::vector<std::pair<int, int>> ranges;

  //for (size_t i{1}; i < size; ++i) {
  //  if (nums[i] >= max) {
  //    ranges.clear();
  //    ranges.push_back({min, max});
  //  } else if (nums[i] <= min) {
  //    min = nums[i];
  //  } else {
  //    for (auto& range : ranges) {
  //      if (nums[i] > range.first && nums[i] < range.second) return true;

  //      if (nums[i] > range.second) range.second = nums[i];
  //    }
  //    if (min != nums[i]) ranges.push_back({min, nums[i]});
  //  }
  //}

  //return false;

  // with stack...
  // Runtime: 69 ms, faster than 91.41% of C++ online submissions for 132 Pattern.
  // Memory Usage: 38.3 MB, less than 53.46% of C++ online submissions for 132 Pattern.
  //
  auto s3{INT_MIN};
  std::stack<int> stack;

  for (int i = nums.size() - 1; i >= 0; --i) {
    if (nums[i] < s3) return true;

    while (!stack.empty() && stack.top() < nums[i]) {
      s3 = stack.top(), stack.pop();
    }

    stack.push(nums[i]);
  }

  return false;
}

}

#endif  // !_132_PATTERN_H_
