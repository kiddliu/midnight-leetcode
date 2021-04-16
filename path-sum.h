#ifndef PATH_SUM_H_
#define PATH_SUM_H_

#include "tree-node.h"

namespace solution {

bool hasPathSum(TreeNode* root, int targetSum) {
  // Depth first search
  // Runtime: 12 ms, faster than 52.92% of C++ online submissions for Path Sum.
  // Memory Usage: 21.3 MB, less than 60.65% of C++ online submissions for Path Sum.
  //
  if (root == nullptr) return false;
  if (root->val == targetSum && root->left == nullptr && root->right == nullptr)
    return true;

  return (root->left != nullptr &&
          hasPathSum(root->left, targetSum - root->val)) ||
         (root->right != nullptr &&
          hasPathSum(root->right, targetSum - root->val));
}

}  // namespace solution

#endif  // PATH_SUM_H_
