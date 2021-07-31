#ifndef UNIVALUED_BINARY_TREE_H_
#define UNIVALUED_BINARY_TREE_H_

#include "tree-node.h"

namespace solution {

bool isUnivalTree(TreeNode* root, int val = -1) {
  // direct
  // Runtime: 3 ms, faster than 54.39% of C++ online submissions for Univalued Binary Tree.
  // Memory Usage: 9.9 MB, less than 76.28% of C++ online submissions for Univalued Binary Tree.
  //
  if (root == nullptr) return true;
  if (val == -1) val = root->val;
  
  return root->val == val && isUnivalTree(root->left, val) && isUnivalTree(root->right, val);
}

}

#endif  // UNIVALUED_BINARY_TREE_H_
