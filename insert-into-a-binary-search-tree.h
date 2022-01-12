#ifndef INSERT_INTO_A_BINARY_SEARCH_TREE_H_
#define INSERT_INTO_A_BINARY_SEARCH_TREE_H_

#include "tree-node.h"

namespace solution {

TreeNode* insertIntoBST(TreeNode* root, int val) {
  // recursive
  // Runtime: 158 ms, faster than 12.38% of C++ online submissions for Insert into a Binary Search Tree.
  // Memory Usage: 56.9 MB, less than 49.59% of C++ online submissions for Insert into a Binary Search Tree.
  //
  if (root == nullptr) return new TreeNode(val);

  if (val < root->val) {
    root->left = insertIntoBST(root->left, val);
  } else {
    root->right = insertIntoBST(root->right, val);
  }
  return root;
}

}

#endif  // !INSERT_INTO_A_BINARY_SEARCH_TREE_H_
