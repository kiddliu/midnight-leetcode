#ifndef LOWEST_COMMON_ANCESTOR_OF_A_BINARY_SEARCH_TREE_H_
#define LOWEST_COMMON_ANCESTOR_OF_A_BINARY_SEARCH_TREE_H_

#include "tree-node.h"

namespace solution {

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  // Recursive
  // Runtime: 28 ms, faster than 73.09% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
  // Memory Usage: 23.1 MB, less than 98.03% of C++ online submissions for Lowest Common Ancestor of a Binary Search Tree.
  //
  if (p == root || q == root) return root;

  if (p->val < root->val && q->val < root->val) {
    return lowestCommonAncestor(root->left, p, q);
  } else if (p->val > root->val && q->val > root->val) {
    return lowestCommonAncestor(root->right, p, q);
  }

  return root;
}

}

#endif  // LOWEST_COMMON_ANCESTOR_OF_A_BINARY_SEARCH_TREE_H_
