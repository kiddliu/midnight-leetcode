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

#include "min-cost-climbing-stairs.h"

int main() {
  std::vector<int> v{1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
  solution::minCostClimbingStairs(v);
}
