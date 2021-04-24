// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <vector>

#include "min-stack.h"

int main() {
  // std::vector<int> v{2, 2, 1};
  // std::cout << std::boolalpha << solution::singleNumber(v);

  solution::MinStack minStack{};
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);
  assert(minStack.getMin() == -3);  // return -3
  minStack.pop();
  assert(minStack.top() == 0);      // return 0
  assert(minStack.getMin() == -2);  // return -2
}
