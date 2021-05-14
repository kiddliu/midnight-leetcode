#ifndef IMPLEMENT_STACK_USING_QUEUES_H_
#define IMPLEMENT_STACK_USING_QUEUES_H_

#include <queue>

namespace solution {

// 2 queues
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement Stack using Queues.
// Memory Usage: 6.8 MB, less than 86.11% of C++ online submissions for Implement Stack using Queues.
//
class MyStack {
 public:
  /** Initialize your data structure here. */
  MyStack() : q1(std::queue<int>{}), q2(std::queue<int>{}) {}

  /** Push element x onto stack. */
  void push(int x) { 
    q2.push(x);
  }

  /** Removes the element on top of the stack and returns that element. */
  int pop() {
    if (empty()) {
      throw 0;
    }

    if (!q2.empty()) {
      return pop_internal(q2, q1);
    } else {
      return pop_internal(q1, q2);
    }
  }

  /** Get the top element. */
  int top() {
    if (!q2.empty()) {
      return q2.back();
    } else {
      return q1.back();
    }
  }

  /** Returns whether the stack is empty. */
  bool empty() {
    return q1.empty() && q2.empty();
  }

 private:
  std::queue<int> q1;
  std::queue<int> q2;

  int pop_internal(std::queue<int>& source, std::queue<int>& target) {
    while (source.size() > 1) {
      target.push(source.front());
      source.pop();
    }

    auto result = source.front();
    source.pop();
    return result;
  }
};

}

#endif  // IMPLEMENT_STACK_USING_QUEUES_H_
