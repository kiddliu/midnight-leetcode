#ifndef LINKED_LIST_RANDOM_NODE_H_
#define LINKED_LIST_RANDOM_NODE_H_

#include <random>
#include "list-node.h"

namespace solution {

/// <summary>
/// 
/// Runtime: 32 ms, faster than 17.62% of C++ online submissions for Linked List Random Node.
/// Memory Usage: 16.7 MB, less than 21.97% of C++ online submissions for Linked List Random Node.
/// </summary>
class Solution {
 public:
  Solution(ListNode* head) : head_(head) {
    auto p{head};
    auto count{0};
    while (p->next) {
      p = p->next, ++count;
    }

    std::random_device seed;
    generator_ = std::mt19937{seed()};
    distribution_ =
        std::uniform_int_distribution<std::mt19937::result_type>(0, count);
  }

  int getRandom() {
    auto offset { distribution_(generator_) };
    auto p{head_};
    while (offset > 0) {
      --offset, p = p->next;
    }
    return p->val;
  }

 private:
  ListNode* head_;
  std::mt19937 generator_; 
  std::uniform_int_distribution<std::mt19937::result_type> distribution_;
};

}  // namespace solution

#endif  // !LINKED_LIST_RANDOM_NODE_H_
