#ifndef FLATTEN_BINARY_TREE_TO_LINKED_LIST_H_
#define FLATTEN_BINARY_TREE_TO_LINKED_LIST_H_

#include "tree-node.h"

namespace solution {

void flatten(TreeNode* root) {
  // recursive...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Flatten Binary Tree to Linked List.
  // Memory Usage: 12.7 MB, less than 80.02% of C++ online submissions for Flatten Binary Tree to Linked List.
  //
  if (root == nullptr) return;

  if (root->left) flatten(root->left);
  if (root->right) flatten(root->right);

  if (root->left) {
    auto tail{root->left};
    while (tail->right) {
      tail = tail->right;
    }
    tail->right = root->right;
    root->right = root->left;
    root->left = nullptr;
  }
}

}

#endif  // !FLATTEN_BINARY_TREE_TO_LINKED_LIST_H_
