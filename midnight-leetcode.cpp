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

#include "3sum.h"

int main() {
  std::vector<int> v{-1, 0, 1,   2,  -1, -4, 3, 2, 8,
                     4,  0, -10, -3, -4, -7, 1, 1, 2};
  auto result = solution::threeSum(v);
}
