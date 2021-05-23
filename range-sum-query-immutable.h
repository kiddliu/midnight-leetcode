#ifndef RANGE_SUM_QUERY_IMMUTABLE_H_
#define RANGE_SUM_QUERY_IMMUTABLE_H_

#include <vector>

namespace solution {

// should use caching
// Runtime: 452 ms, faster than 6.78% of C++ online submissions for Range Sum Query - Immutable.
// Memory Usage: 17 MB, less than 69.58% of C++ online submissions for Range Sum Query - Immutable.
//
class NumArray {
 public:
  NumArray(std::vector<int>& nums) : nums_(nums) {}

  int sumRange(int left, int right) {
    auto result{0};
    for (int index = left; left <= right; ++left) {
      result += nums_[left];
    }
    return result;
  }

 private:
  std::vector<int>& nums_;
};

}

#endif  // RANGE_SUM_QUERY_IMMUTABLE_H_
