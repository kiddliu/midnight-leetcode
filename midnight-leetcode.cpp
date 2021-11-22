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

#include "delete-node-in-a-bst.h"

int main() {
  auto root = new TreeNode(5, new TreeNode(3, new TreeNode(2), new TreeNode(4)),
                           new TreeNode(6, nullptr, new TreeNode(7)));
  auto result = solution::deleteNode(root, 5);

  return 0;
}
