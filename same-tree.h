#ifndef SAME_TREE_H_
#define SAME_TREE_H_

#include "tree-node.h"

namespace solution {
 
bool isSameTree(TreeNode* p, TreeNode* q) {
  // Brute force
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Same Tree.
  // Memory Usage: 10.1 MB, less than 26.71% of C++ online submissions for Same Tree.
  //
  if (p == nullptr && q == nullptr) return true;
  if (p == nullptr || q == nullptr) return false;

  return p->val == q->val
          && isSameTree(p->left, q->left)
          && isSameTree(p->right, q->right);
  }
}


#endif  // SAME_TREE_H_
