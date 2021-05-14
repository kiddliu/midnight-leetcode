// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <vector>

#include "list-node.h"
#include "tree-node.h"

#include "implement-stack-using-queues.h"

int main() {
  solution::MyStack* myStack = new solution::MyStack();
  myStack->push(1);
  myStack->push(2);
  assert(myStack->top() == 2);    // return 2
  assert(myStack->pop() == 2);    // return 2
  assert(myStack->empty() == false);  // return False
}
