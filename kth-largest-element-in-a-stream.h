#ifndef KTH_LARGEST_ELEMENT_IN_A_STREAM_H_
#define KTH_LARGEST_ELEMENT_IN_A_STREAM_H_

#include <queue>
#include <vector>

namespace solution {

// priority queue rocks!!!
// Runtime: 36 ms, faster than 47.71% of C++ online submissions for Kth Largest Element in a Stream.
// Memory Usage: 20 MB, less than 19.49% of C++ online submissions for Kth Largest Element in a Stream.
//
class KthLargest {
 public:
  KthLargest(int k, std::vector<int>& nums) : k_(k) {
    for (const auto& n : nums) {
      queue_.push(n);
      if (queue_.size() > k_) queue_.pop();
    }
  }

  int add(int val) {
    queue_.push(val);
    queue_.pop();
    return queue_.top();
  }

 private:
  int k_;
  std::priority_queue<int, std::vector<int>, std::greater<int>> queue_;
};

}

#endif  // KTH_LARGEST_ELEMENT_IN_A_STREAM_H_
