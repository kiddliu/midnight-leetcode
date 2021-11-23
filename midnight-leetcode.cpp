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

#include "3sum-closest.h"

int main() {
  std::vector<int> v{-1, 2, 1, -4};
  auto result = solution::threeSumClosest(v, 0);

  return 0;
}
