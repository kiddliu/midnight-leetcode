#ifndef MERGE_TWO_BINARY_TREES_H_
#define MERGE_TWO_BINARY_TREES_H_

#include "tree-node.h"

namespace solution {

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
  // naive
  // Runtime: 32 ms, faster than 84.71% of C++ online submissions for Merge Two Binary Trees.
  // Memory Usage: 32.2 MB, less than 98.45% of C++ online submissions for Merge Two Binary Trees.
  //
  if (root1 == nullptr && root2 == nullptr) return nullptr;
  if (root1 == nullptr) return root2;
  if (root2 == nullptr) return root1;

  root1->val += root2->val;
  root1->left = mergeTrees(root1->left, root2->left);
  root2->right = mergeTrees(root1->right, root2->right);
  return root1;
}

}

#endif  // MERGE_TWO_BINARY_TREES_H_
