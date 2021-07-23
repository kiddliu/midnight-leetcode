#ifndef INCREASING_ORDER_SEARCH_TREE_H_
#define INCREASING_ORDER_SEARCH_TREE_H_

#include <stack>

#include "tree-node.h"

namespace solution {

TreeNode* increasingBST(TreeNode* root) {
  // direct
  // Runtime: 4 ms, faster than 59.55% of C++ online submissions for Increasing Order Search Tree.
  // Memory Usage: 7.5 MB, less than 99.25% of C++ online submissions for Increasing Order Search Tree.
  //
  std::stack<TreeNode*> s;
  TreeNode* current = root, *result = nullptr, *next = nullptr;

  while (current != nullptr || !s.empty()) {
    while (current != nullptr) {
      s.push(current);
      current = current->left;
    }
  
    current = s.top();
    s.pop();
    if (result == nullptr) {
      result = current;
    } else {
      next->right = current;
    }
    next = current;
    current->left = nullptr;

    current = current->right;
  }
  
  return result;
}

}

#endif  // INCREASING_ORDER_SEARCH_TREE_H_
