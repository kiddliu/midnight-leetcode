#ifndef SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_H_
#define SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_H_

#include "tree-node.h"

namespace solution {

int sumRootToLeaf(TreeNode* root, int last = 0) {
  // use left == right to determine if it's a leaf
  // Runtime: 4 ms, faster than 86.47% of C++ online submissions for Sum of Root To Leaf Binary Numbers.
  // Memory Usage: 16.5 MB, less than 93.94% of C++ online submissions for Sum of Root To Leaf Binary Numbers.
  //
  auto base{last * 2 + root->val}, result{0};
  if (root->left == root->right) return base;

  if (root->left != nullptr) result += sumRootToLeaf(root->left, base);
  if (root->right != nullptr) result += sumRootToLeaf(root->right, base);
  return result;
}

}

#endif  // SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_H_
