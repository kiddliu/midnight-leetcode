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

#include "all-paths-from-source-to-target.h"

int main() {
  std::vector<std::vector<int>> v{{4, 3, 1}, { 3, 2, 4 }, {3}, {4}, {}};
  auto result = solution::allPathsSourceTarget(v);

  return 0;
}
