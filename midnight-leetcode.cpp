// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <vector>

#include "list-node.h"
#include "tree-node.h"

#include "binary-tree-inorder-traversal.h"

int main() {
  auto node =
      new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3), nullptr));
  solution::inorderTraversal(node);
}
