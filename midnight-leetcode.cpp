// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "node.h"
#include "tree-node.h"

#include "degree-of-an-array.h"

int main() {
  std::vector<int> v{1, 2, 2, 3, 1};
  solution::findShortestSubArray(v);
}
