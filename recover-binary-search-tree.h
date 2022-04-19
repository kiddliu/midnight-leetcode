#ifndef RECOVER_BINARY_SEARCH_TREE_H_
#define RECOVER_BINARY_SEARCH_TREE_H_

#include <algorithm>

#include "tree-node.h"

namespace solution {

TreeNode* inorderTraversal(TreeNode* root, TreeNode* last, TreeNode** p) {
  if (root->left) last = inorderTraversal(root->left, last, p);

  if (last != nullptr && last->val > root->val) {
    if (p[0] == nullptr) {
      p[0] = last;
    }
    p[1] = root;   
  }
  last = root;
  if (root->right) {
    last = inorderTraversal(root->right, last, p);
  }
  return last;
}

void recoverTree(TreeNode* root) {
  // constant space, tracking the 2 anomalies of 2 cases
  // Runtime: 27 ms, faster than 91.61% of C++ online submissions for Recover Binary Search Tree.
  // Memory Usage: 57.9 MB, less than 70.41% of C++ online submissions for Recover Binary Search Tree.
  //
  TreeNode* last = nullptr;
  TreeNode *p[2] = {};

  inorderTraversal(root, last, p);
  std::swap(p[0]->val, p[1]->val);
}

}

#endif  // !RECOVER_BINARY_SEARCH_TREE_H_
