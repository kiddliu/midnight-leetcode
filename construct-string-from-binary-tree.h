#ifndef CONSTRUCT_STRING_FROM_BINARY_TREE_H_
#define CONSTRUCT_STRING_FROM_BINARY_TREE_H_

#include <string>

#include "tree-node.h"

namespace solution {

std::string tree2str(TreeNode* root) {
  // naive
  // Runtime: 8 ms, faster than 99.16% of C++ online submissions for Construct String from Binary Tree.
  // Memory Usage: 53.8 MB, less than 34.51% of C++ online submissions for Construct String from Binary Tree.
  std::string s;
  if (root == nullptr) return s;

  s.append(std::to_string(root->val));
  if (root->left == nullptr && root->right == nullptr) return s;
  s.append("(" + tree2str(root->left) + ")");
  if (root->right) s.append("(" + tree2str(root->right) + ")");
  return s;
}

}

#endif  // CONSTRUCT_STRING_FROM_BINARY_TREE_H_
