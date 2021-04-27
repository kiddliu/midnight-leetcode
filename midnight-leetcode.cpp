// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <vector>

#include "list-node.h"

#include "excel-sheet-column-title.h"

int main() {
  std::vector<int> v{1, 3, 4, 4};
  assert(solution::convertToTitle(701) == "ZY");
  assert(solution::convertToTitle(1) == "A");
  assert(solution::convertToTitle(28) == "AB");
  assert(solution::convertToTitle(2147483647) == "FXSHRXW");

  //solution::MinStack minStack{};
  //minStack.push(-2);
  //minStack.push(0);
  //minStack.push(-3);
  //assert(minStack.getMin() == -3);  // return -3
  //minStack.pop();
  //assert(minStack.top() == 0);      // return 0
  //assert(minStack.getMin() == -2);  // return -2
}
