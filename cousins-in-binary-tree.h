#ifndef COUSINS_IN_BINARY_TREE_H_
#define COUSINS_IN_BINARY_TREE_H_

#include <vector>

#include "tree-node.h"

namespace solution {

bool isCousins(TreeNode* root, int x, int y) {
  // i like my own idea
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Cousins in Binary Tree.
  // Memory Usage: 10.8 MB, less than 98.29% of C++ online submissions for Cousins in Binary Tree.
  //
  if (root->val == x || root->val == y) return false;

  std::vector<TreeNode*> v, parent;
  parent.reserve(2);
  v.push_back(root);

  while (!v.empty()) {
    parent.clear();
    auto size = v.size();

    for (size_t i = 0; i < size; ++i) {
      if (v[i]->left != nullptr) {
        v.push_back(v[i]->left);
        if (v[i]->left->val == x || v[i]->left->val == y)
          parent.push_back(v[i]);
      }
      if (v[i]->right != nullptr) {
        v.push_back(v[i]->right);
        if (v[i]->right->val == x || v[i]->right->val == y)
          parent.push_back(v[i]);
      }

      if (parent.size() == 2) return parent[0] != parent[1];
    }

    if (parent.size() == 1) return false;
    if (parent.size() == 2) return parent[0] != parent[1];
  
    v.erase(v.begin(), v.begin() + size);
  }

  return false;
}

}

#endif  // COUSINS_IN_BINARY_TREE_H_
