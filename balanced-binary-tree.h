#ifndef BALANCED_BINARY_TREE_H_
#define BALANCED_BINARY_TREE_H_

#include <algorithm>

#include "tree-node.h"

namespace solution {

bool isBalanced(TreeNode* root) {
  // Brute force
  // Runtime: 16 ms, faster than 20.87% of C++ online submissions for Balanced Binary Tree.
  // Memory Usage: 20.9 MB, less than 74.77% of C++ online submissions for Balanced Binary Tree.
  //
  if (root == nullptr) return true;
  if (root->left == nullptr && root->right == nullptr) return true;

  return std::abs(depth(root->left) - depth(root->right)) < 2;
}

int depth(TreeNode* node) {
  if (node == nullptr) return 0;
  if (node->left == nullptr && node->right == nullptr) return 1;

  return std::max(depth(node->left), depth(node->right)) + 1;
}

}

#endif  // BALANCED_BINARY_TREE_H_
