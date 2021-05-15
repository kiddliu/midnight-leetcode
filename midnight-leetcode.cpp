// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "tree-node.h"

#include "summary-ranges.h"

int main() {
  std::vector<int> v1{0, 2, 3, 4, 6, 8, 9};
  std::vector<std::string> v2{"0", "2->4", "6", "8->9"};
  assert(solution::summaryRanges(v1) == v2);
}
