#ifndef MIN_STACK_H_
#define MIN_STACK_H_

#include <algorithm>
#include <stack>
#include <utility>

namespace solution {

// Save min along with the new element 
// Runtime: 20 ms, faster than 81.31% of C++ online submissions for Min Stack.
// Memory Usage: 16.3 MB, less than 55.09% of C++ online submissions for Min Stack.
//
class MinStack {
 public:
  MinStack() : stack_(std::stack<std::pair<int, int>>{}) {}

  void push(int val) {
    if (stack_.empty()) {
      stack_.push({val, val});
    } else {
      stack_.push({val, std::min(val, stack_.top().second)});
    }
  }

  void pop() {
    return stack_.pop();
  }

  int top() { 
    return stack_.top().first;
  }

  int getMin() { 
    return stack_.top().second;
  }

 private:
  std::stack<std::pair<int, int>> stack_;
};

}


#endif  // MIN_STACK_H_
