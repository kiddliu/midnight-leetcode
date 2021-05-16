#ifndef IMPLEMENT_QUEUE_USING_STACKS_H_
#define IMPLEMENT_QUEUE_USING_STACKS_H_

#include <stack>

// Brute force
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement Queue using Stacks.
// Memory Usage: 7.1 MB, less than 17.23% of C++ online submissions for Implement Queue using Stacks.
//
namespace solution {

class MyQueue {
 public:
  /** Initialize your data structure here. */
  MyQueue() : s1_(std::stack<int>{}), s2_(std::stack<int>{}) {}

  /** Push element x to the back of queue. */
  void push(int x) {
    if (empty()) {
      s2_.push(x);
    } else {
      s1_.push(x);
    }
  }

  /** Removes the element from in front of queue and returns that element. */
  int pop() {
    if (s2_.empty()) {
      while (!s1_.empty()) {
        s2_.push(s1_.top());
        s1_.pop();
      }
    }

    auto result = s2_.top();
    s2_.pop();
    return result;
  }

  /** Get the front element. */
  int peek() {
    if (s2_.empty()) {
      while (!s1_.empty()) {
        s2_.push(s1_.top());
        s1_.pop();
      }
    }

    return s2_.top();
  }

  bool empty() {
    return s1_.empty() && s2_.empty();
  }

 private:
  std::stack<int> s1_;
  std::stack<int> s2_;
};

}

#endif  // IMPLEMENT_QUEUE_USING_STACKS_H_
