#ifndef COUNT_COMPLETE_TREE_NODES_H_
#define COUNT_COMPLETE_TREE_NODES_H_

#include "tree-node.h"

namespace solution {

int countNodes(TreeNode* root) {
  // if the heights of subtrees are the same, it's full
  // Runtime: 43 ms, faster than 72.69% of C++ online submissions for Count Complete Tree Nodes.
  // Memory Usage: 30.9 MB, less than 20.45% of C++ online submissions for Count Complete Tree Nodes.
  //
  if (root == nullptr) return 0;
  auto left{root}, right{root};
  auto h{0};

  while (right) {
    left = left->left;
    right = right->right;
    ++h;
  }

  return left ? 1 + countNodes(root->left) + countNodes(root->right) : (1 << h) - 1;
}

}  // namespace solution

#endif  // !COUNT_COMPLETE_TREE_NODES_H_
