#ifndef KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_
#define KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_

#include <queue>
#include <vector>

namespace solution {

int findKthLargest(std::vector<int>& nums, int k) {
  // with priority queue
  // Runtime: 7 ms, faster than 90.80% of C++ online submissions for Kth Largest Element in an Array.
  // Memory Usage: 10.2 MB, less than 21.96% of C++ online submissions for Kth Largest Element in an Array.
  //
  std::priority_queue queue(nums.cbegin(), nums.cend());

  while (--k) {
    queue.pop();
  }
  return queue.top();
}

}  // namespace solution

#endif  // !KTH_LARGEST_ELEMENT_IN_AN_ARRAY_H_
