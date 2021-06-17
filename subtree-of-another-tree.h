#ifndef SUBTREE_OF_ANOTHER_TREE_H_
#define SUBTREE_OF_ANOTHER_TREE_H_

#include "tree-node.h"

namespace solution {

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
  // brute force
  // Runtime: 16 ms, faster than 94.81% of C++ online submissions for Subtree of Another Tree.
  // Memory Usage: 28.8 MB, less than 84.91% of C++ online submissions for Subtree of Another Tree.
  //
  if (root == subRoot) return true;
  if (isSameTree(root, subRoot)) return true;

  if (root->left != nullptr && isSubtree(root->left, subRoot)) return true;
  if (root->right != nullptr && isSubtree(root->right, subRoot)) return true;
  return false;
}

bool isSameTree(TreeNode* p, TreeNode* q) {
  if (p == nullptr && q == nullptr) return true;
  if (p == nullptr || q == nullptr || p->val != q->val) return false;
  
  return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

}

#endif  // SUBTREE_OF_ANOTHER_TREE_H_
