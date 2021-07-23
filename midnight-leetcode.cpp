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

#include "increasing-order-search-tree.h"

int main() {
  auto node = new TreeNode(
      5,
      new TreeNode(3, new TreeNode(2, new TreeNode(1), nullptr),
                   new TreeNode(4)),
      new TreeNode(6, nullptr,
                   new TreeNode(8, new TreeNode(7), new TreeNode(9))));
  solution::increasingBST(node); 
}
