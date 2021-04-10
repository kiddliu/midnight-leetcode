#ifndef SYMMETRIC_TREE_H_
#define SYMMETRIC_TREE_H_

#include "tree-node.h"

namespace solution {
  
bool isSymmetric(TreeNode* root) {
  // Brute force
  // Runtime: 4 ms, faster than 75.07% of C++ online submissions for Symmetric Tree.
  // Memory Usage: 16.4 MB, less than 45.87% of C++ online submissions for Symmetric Tree.
  // 
  return isSymmetric(root->left, root->right);
}

bool isSymmetric(TreeNode* left, TreeNode* right) {
  if (left == nullptr && right == nullptr) return true;
  if (left == nullptr || right == nullptr) return false;

  return left->val == right->val
         && isSymmetric(left->left, right->right)
         && isSymmetric(left->right, right->left);
}

}

#endif  // SYMMETRIC_TREE_H_
