// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "tree-node.h"

#include "next-greater-element-i.h"

int main() {
  std::vector<int> v1{4, 1, 2}, v2{1, 3, 4, 2};
  solution::nextGreaterElement(v1, v2); 
}
