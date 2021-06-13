// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "tree-node.h"

#include "minimum-absolute-difference-in-bst.h"

int main() {
  auto n = new TreeNode(543,
                        new TreeNode(384, nullptr, new TreeNode(445)),
                        new TreeNode(652, nullptr, new TreeNode(699)));
  return solution::getMinimumDifference(n);
}
