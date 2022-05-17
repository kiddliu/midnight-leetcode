#ifndef FIND_A_CORRESPONDING_NODE_OF_A_BINARY_TREE_IN_A_CLONE_OF_THAT_TREE_H_
#define FIND_A_CORRESPONDING_NODE_OF_A_BINARY_TREE_IN_A_CLONE_OF_THAT_TREE_H_

#include "tree-node.h"

namespace solution {

TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned,
                        TreeNode* target) {
  // should be an easy-level problem...
  // Runtime: 562 ms, faster than 84.68% of C++ online submissions for Find a Corresponding Node of a Binary Tree in a Clone of That Tree.
  // Memory Usage: 164.1 MB, less than 22.94% of C++ online submissions for Find a Corresponding Node of a Binary Tree in a Clone of That Tree.
  //
  if (target == original) return cloned;

  if (original->left) {
    auto result = getTargetCopy(original->left, cloned->left, target);
    if (result) return result;
  }

  if (original->right) {
    auto result = getTargetCopy(original->right, cloned->right, target);
    if (result) return result;
  }

  return nullptr;
}

}  // namespace solution

#endif  // !FIND_A_CORRESPONDING_NODE_OF_A_BINARY_TREE_IN_A_CLONE_OF_THAT_TREE_H_
