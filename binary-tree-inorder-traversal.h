#ifndef BINARY_TREE_INORDER_TRAVERSAL_H_
#define BINARY_TREE_INORDER_TRAVERSAL_H_

#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<int> inorderTraversal(TreeNode* root) {
  // Recursive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
  // Memory Usage: 9.8 MB, less than 8.49% of C++ online submissions for Binary Tree Inorder Traversal.
  // 
  std::vector<int> result{};
  if (root == nullptr) return result;

  auto left = inorderTraversal(root->left);
  result.insert(result.end(), left.begin(), left.end());
  result.push_back(root->val);
  auto right = inorderTraversal(root->right);
  result.insert(result.end(), right.begin(), right.end());
  return result;
}

}

#endif  // BINARY_TREE_INORDER_TRAVERSAL_H_
