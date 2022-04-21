#ifndef VALIDATE_BINARY_SEARCH_TREE_H_
#define VALIDATE_BINARY_SEARCH_TREE_H_

#include <climits>

#include "tree-node.h"

namespace solution {

bool isValidBST(TreeNode* root, TreeNode* lower = nullptr, TreeNode* upper = nullptr) {
  // edge cases...
  // Runtime: 11 ms, faster than 84.80% of C++ online submissions for Validate Binary Search Tree.
  // Memory Usage: 21.5 MB, less than 98.89% of C++ online submissions for Validate Binary Search Tree.
  //
  if (root == nullptr) return true;
  if (lower && root->val <= lower->val || upper && root->val >= upper->val) return false;
  return isValidBST(root->left, lower, root) &&
         isValidBST(root->right, root, upper);
}

}

#endif  // VALIDATE_BINARY_SEARCH_TREE_H_
