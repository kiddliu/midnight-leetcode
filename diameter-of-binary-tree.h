#ifndef DIAMETER_OF_BINARY_TREE_H_
#define DIAMETER_OF_BINARY_TREE_H_

#include <algorithm>

#include "tree-node.h"

namespace solution {

int diameterOfBinaryTree(TreeNode* root) {
  // naive
  // Runtime: 12 ms, faster than 53.65% of C++ online submissions for Diameter of Binary Tree.
  // Memory Usage: 20.3 MB, less than 63.00% of C++ online submissions for Diameter of Binary Tree.
  //
  int diameter = 0;
  depthOfBinaryTree(root, diameter);
  return diameter;
}

int depthOfBinaryTree(TreeNode* root, int& diameter) {
  if (root == nullptr) return 0;

  auto left{0}, right{0};
  if (root->left) left = depthOfBinaryTree(root->left, diameter);
  if (root->right) right = depthOfBinaryTree(root->right, diameter);
  diameter = std::max(diameter, left + right);

  return std::max(left, right) + 1;
}
  
}



#endif  // DIAMETER_OF_BINARY_TREE_H_
