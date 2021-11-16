// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "node.h"
#include "string-to-integer-atoi.h"
#include "tree-node.h"

#include "largest-divisible-subset.h"

int main() {
  std::vector<int> v{4, 8, 10, 240};
  auto result = solution::largestDivisibleSubset(v);
}
