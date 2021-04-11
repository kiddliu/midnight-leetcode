#ifndef MAXIMUM_DEPTH_OF_BINARY_TREE_H_
#define MAXIMUM_DEPTH_OF_BINARY_TREE_H_

#include <algorithm>

#include "tree-node.h"


namespace solution {

int maxDepth(TreeNode* root) {
  // Brute force
  // Runtime: 4 ms, faster than 91.79% of C++ online submissions for Maximum Depth of Binary Tree.
  // Memory Usage: 18.9 MB, less than 49.41% of C++ online submissions for Maximum Depth of Binary Tree.
  //
  if (root == nullptr) return 0;
  if (root->left == nullptr && root->right == nullptr) return 1;

  return std::max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

}

#endif  // MAXIMUM_DEPTH_OF_BINARY_TREE_H_
