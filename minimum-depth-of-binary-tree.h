#ifndef MINIMUM_DEPTH_OF_BINARY_TREE_H_
#define MINIMUM_DEPTH_OF_BINARY_TREE_H_

#include <algorithm>

#include "tree-node.h"

namespace solution {

int minDepth(TreeNode* root) {
  // Brute force
  // Runtime: 232 ms, faster than 45.77% of C++ online submissions for Minimum Depth of Binary Tree.
  // Memory Usage: 144.9 MB, less than 21.88% of C++ online submissions for Minimum Depth of Binary Tree.
  if (root == nullptr) return 0;
  if (root->left == nullptr && root->right == nullptr) return 1;
  if (root->left == nullptr) return minDepth(root->right) + 1;
  if (root->right == nullptr) return minDepth(root->left) + 1;

  return std::min(minDepth(root->left), minDepth(root->right)) + 1;
}

}

#endif  // MINIMUM_DEPTH_OF_BINARY_TREE_H_
