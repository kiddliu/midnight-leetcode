#ifndef KTH_SMALLEST_ELEMENT_IN_A_BST_H_
#define KTH_SMALLEST_ELEMENT_IN_A_BST_H_

#include "tree-node.h"

namespace solution {

int kthSmallest(TreeNode* root, int& k) {
  // it's very interesting that changing the signature still counts
  // in-order traverse and decrease k until it's zero
  // Runtime: 15 ms, faster than 92.75% of C++ online submissions for Kth Smallest Element in a BST.
  // Memory Usage: 24.3 MB, less than 33.26% of C++ online submissions for Kth Smallest Element in a BST.
  //
  if (root == nullptr) return 0;

  auto result = kthSmallest(root->left, k);
  return k == 0 ? result : --k == 0 ? root->val : kthSmallest(root->right, k);
}

}

#endif  // !KTH_SMALLEST_ELEMENT_IN_A_BST_H_
