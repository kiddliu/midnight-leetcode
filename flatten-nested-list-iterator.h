#ifndef FLATTEN_NESTED_LIST_ITERATOR_H_
#define FLATTEN_NESTED_LIST_ITERATOR_H_

#include <stack>
#include <vector>

class NestedInteger {
  public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;
 
    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;
 
    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const std::vector<NestedInteger> &getList() const;
};

/// <summary>
/// Runtime: 16 ms, faster than 77.26% of C++ online submissions for Flatten Nested List Iterator.
/// Memory Usage: 12.9 MB, less than 85.41% of C++ online submissions for Flatten Nested List Iterator.
/// </summary>
class NestedIterator {
 public:
  NestedIterator(std::vector<NestedInteger> &nestedList) {
    begins_.push(nestedList.cbegin());
    ends_.push(nestedList.cend());
  }

  int next() { hasNext();
    return (begins_.top()++)->getInteger();
  }

  bool hasNext() {
    while (!begins_.empty()) {
      if (begins_.top() == ends_.top()) {
        begins_.pop(), ends_.pop();
      } else {
        auto& x = begins_.top();
        if (x->isInteger()) return true;

        begins_.top()++;
        begins_.push(x->getList().begin());
        ends_.push(x->getList().end());
      }
    }
    return false;
  }

 private:
  std::stack<std::vector<NestedInteger>::const_iterator> begins_, ends_;
};

#endif  // !FLATTEN_NESTED_LIST_ITERATOR_H_
