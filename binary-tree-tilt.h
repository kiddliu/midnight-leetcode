#ifndef BINARY_TREE_TILT_H_
#define BINARY_TREE_TILT_H_

#include <cmath>
#include "tree-node.h"

namespace solution {

int findTilt(TreeNode* root) {
  // direct
  // Runtime: 12 ms, faster than 91.50% of C++ online submissions for Binary Tree Tilt.
  // Memory Usage: 23.7 MB, less than 72.10% of C++ online submissions for Binary Tree Tilt.
  //
  if (root == nullptr) return 0;
  if (root->left == nullptr && root->right == nullptr) return 0;

  auto left{0}, right{0}, tilt{0};
  if (root->left != nullptr) left = treeSum(root->left, tilt);
  if (root->right != nullptr) right = treeSum(root->right, tilt);
  return tilt + std::abs(left - right);
}

int treeSum(TreeNode* node, int& tilt) {
  if (node->left == nullptr && node->right == nullptr) return node->val;

  auto left{0}, right{0};
  if (node->left != nullptr) left = treeSum(node->left, tilt);
  if (node->right != nullptr) right = treeSum(node->right, tilt);
  tilt += std::abs(left - right);
  return left + right;
}

}

#endif  // BINARY_TREE_TILT_H_
