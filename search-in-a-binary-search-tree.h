#ifndef SEARCH_IN_A_BINARY_SEARCH_TREE_H_
#define SEARCH_IN_A_BINARY_SEARCH_TREE_H_

#include "tree-node.h"

namespace solution {

TreeNode* searchBST(TreeNode* root, int val) {
  // DFS by recursive
  // Runtime: 40 ms, faster than 66.17% of C++ online submissions for Search in a Binary Search Tree.
  // Memory Usage: 34.8 MB, less than 64.60% of C++ online submissions for Search in a Binary Search Tree.
  //
  if (root->val == val) return root;

  if (root->val < val && root->left != nullptr)
    return searchBST(root->left, val);
  if (root->val > val && root->right != nullptr)
    return searchBST(root->right, val);
  return nullptr;
}


}

#endif  // SEARCH_IN_A_BINARY_SEARCH_TREE_H_
