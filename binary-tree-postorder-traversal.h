#ifndef BINARY_TREE_POSTORDER_TRAVERSAL_H_
#define BINARY_TREE_POSTORDER_TRAVERSAL_H_

#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<int> postorderTraversal(TreeNode* root) {
  // Recursive
  // Runtime: 4 ms, faster than 45.29% of C++ online submissions for Binary Tree Postorder Traversal.
  // Memory Usage: 9.8 MB, less than 9.48% of C++ online submissions for Binary Tree Postorder Traversal.
  //
  std::vector<int> result{};
  if (root == nullptr) return result;

  auto left = postorderTraversal(root->left);
  result.insert(result.end(), left.begin(), left.end());
  auto right = postorderTraversal(root->right);
  result.insert(result.end(), right.begin(), right.end());
  result.push_back(root->val);
  return result;
}

}

#endif  // BINARY_TREE_POSTORDER_TRAVERSAL_H_
