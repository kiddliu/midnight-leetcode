#ifndef LEAF_SIMILAR_TREES_H_
#define LEAF_SIMILAR_TREES_H_

#include <stack>
#include <vector>

#include "tree-node.h"

namespace solution {

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
  // tried iterative, but failed
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Leaf-Similar Trees.
  // Memory Usage: 12.6 MB, less than 97.31% of C++ online submissions for Leaf-Similar Trees.
  //
  std::vector<int> v1, v2;
  leafs(root1, v1), leafs(root2, v2);
  return v1 == v2;
}

void leafs(TreeNode* node, std::vector<int>& v) {
  if (node->left == nullptr && node->right == nullptr) {
    v.push_back(node->val);
    return;
  }

  if (node->left) leafs(node->left, v);
  if (node->right) leafs(node->right, v);
}

}

#endif  // LEAF_SIMILAR_TREES_H_
