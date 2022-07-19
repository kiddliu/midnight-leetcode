#ifndef CONTAINS_DUPLICATE_III_H_
#define CONTAINS_DUPLICATE_III_H_

#include <algorithm>
#include <set>
#include <vector>

namespace solution {

bool containsNearbyAlmostDuplicate(std::vector<int>& nums, int k, int t) {
  // sliding window...
  // some questions is all about the type conversion and it does not make any sense to lower the pass rate
  // Runtime: 59 ms, faster than 54.51% of C++ online submissions for Contains Duplicate III.
  // Memory Usage: 18.8 MB, less than 28.41% of C++ online submissions for Contains Duplicate III.
  //
  int size = nums.size();
  std::set<int64_t> window;  // whenever there's a duplicate, it's done

  for (auto i{0}; i < size; ++i) {
    if (i > k) window.erase(nums[i - k - 1]);

    auto lower = window.lower_bound(static_cast<int64_t>(nums[i]) - t);
    if (lower != window.end() && *lower - nums[i] <= t) return true;

    window.insert(nums[i]);
  }
  return false;
}

}

#endif  // CONTAINS_DUPLICATE_III_H_
