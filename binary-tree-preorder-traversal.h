#ifndef BINARY_TREE_PREORDER_TRAVERSAL_H_
#define BINARY_TREE_PREORDER_TRAVERSAL_H_

#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<int> preorderTraversal(TreeNode* root) {
  // Recursive
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Preorder Traversal.
  // Memory Usage: 10.1 MB, less than 7.63% of C++ online submissions for Binary Tree Preorder Traversal.
  //
  std::vector<int> result{};
  if (root == nullptr) return result;

  result.push_back(root->val);
  auto left = preorderTraversal(root->left);
  result.insert(result.end(), left.begin(), left.end());
  auto right = preorderTraversal(root->right);
  result.insert(result.end(), right.begin(), right.end());
  return result;
}

}

#endif  // BINARY_TREE_PREORDER_TRAVERSAL_H_
