#ifndef SECOND_MINIMUM_NODE_IN_A_BINARY_TREE_H_
#define SECOND_MINIMUM_NODE_IN_A_BINARY_TREE_H_

#include <algorithm>

#include "tree-node.h"

namespace solution {

int findSecondMinimumValue(TreeNode* root) {
  // not optimized
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Second Minimum Node In a Binary Tree.
  // Memory Usage: 7 MB, less than 63.15% of C++ online submissions for Second Minimum Node In a Binary Tree.
  //
  if (root->left == nullptr && root->right == nullptr) return -1;

  auto l = findSecondMinimumValue(root->left, root->val),
       r = findSecondMinimumValue(root->right, root->val), m = std::max(l, r);

  if (m == root->val) return -1;
  if (l == root->val || r == root->val) return m;
  return std::min(l, r);
}

int findSecondMinimumValue(TreeNode* root, int& val) {
  if (root->val > val || root->left == nullptr && root->right == nullptr)
    return root->val;

  auto l = findSecondMinimumValue(root->left, val),
       r = findSecondMinimumValue(root->right, val), m = std::max(l, r);

  if (m == val) return val;
  if (l == root->val || r == root->val) return m;
  return std::min(l, r);
}

}  // namespace solution

#endif  // SECOND_MINIMUM_NODE_IN_A_BINARY_TREE_H_
