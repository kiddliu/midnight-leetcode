// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <vector>

#include "list-node.h"

#include "intersection-of-two-linked-lists.h"

int main() {
  ListNode *node = new ListNode(1);
  std::cout << std::boolalpha << solution::getIntersectionNode(node, node);

  //solution::MinStack minStack{};
  //minStack.push(-2);
  //minStack.push(0);
  //minStack.push(-3);
  //assert(minStack.getMin() == -3);  // return -3
  //minStack.pop();
  //assert(minStack.top() == 0);      // return 0
  //assert(minStack.getMin() == -2);  // return -2
}
