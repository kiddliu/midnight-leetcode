#ifndef LOWEST_COMMON_ANCESTOR_OF_A_BINARY_TREE_H_
#define LOWEST_COMMON_ANCESTOR_OF_A_BINARY_TREE_H_

#include <unordered_set>

#include "tree-node.h"

namespace solution {

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  // i was on the right track...
  // the algorithm described in the wikipedia is well thought but not for the competition
  // Runtime: 24 ms, faster than 54.17% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.
  // Memory Usage: 14.2 MB, less than 85.91% of C++ online submissions for Lowest Common Ancestor of a Binary Tree.
  //
  if (root == nullptr || root == p || root == q) return root;
  auto left = lowestCommonAncestor(root->left, p, q);
  auto right = lowestCommonAncestor(root->right, p, q);
  return !left ? right : !right ? left : root;
}

}  // namespace solution

#endif  // !LOWEST_COMMON_ANCESTOR_OF_A_BINARY_TREE_H_
