#ifndef SUM_OF_LEFT_LEAVES_H_
#define SUM_OF_LEFT_LEAVES_H_

#include "tree-node.h"

namespace solution {

int sumOfLeftLeaves(TreeNode* root) {
  // recursive
  // Runtime: 4 ms
  // Memory Usage : 13.4 MB
  //
  auto result{0};
  if (root->left == nullptr && root->right == nullptr) return result;

  if (root->left != nullptr) {
    if (root->left->left == nullptr && root->left->right == nullptr) {
      result += root->left->val;
    } else {
      result += sumOfLeftLeaves(root->left);
    }
  }
  if (root->right != nullptr) {
    result += sumOfLeftLeaves(root->right);
  }

  return result;
}

}

#endif  // SUM_OF_LEFT_LEAVES_H_
