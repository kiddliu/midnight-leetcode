#ifndef INVERT_BINARY_TREE_H_
#define INVERT_BINARY_TREE_H_

#include <algorithm>

#include "tree-node.h"

namespace solution {

TreeNode* invertTree(TreeNode* root) {
  // Recursive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Invert Binary Tree.
  // Memory Usage: 9.7 MB, less than 32.21% of C++ online submissions for Invert Binary Tree.
  // 
  if (root == nullptr) return root;

  std::swap(root->left, root->right);
  invertTree(root->left);
  invertTree(root->right);
  return root;
}

}

#endif  // INVERT_BINARY_TREE_H_
