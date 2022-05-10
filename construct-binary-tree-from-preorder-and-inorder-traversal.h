#ifndef CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H_
#define CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H_

#include <vector>

#include "tree-node.h"

namespace solution {

TreeNode* build(std::vector<int>& preorder, std::vector<int>& inorder, int stop,
                int& i, int& p) {
  if (p >= preorder.size()) return nullptr;
  if (inorder[i] == stop) {
    i++;
    return nullptr;
  }
  auto node = new TreeNode(preorder[p++]);
  node->left = build(preorder, inorder, node->val, i, p);
  node->right = build(preorder, inorder, stop, i, p);
  return node;
}

TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder) {
  // smart usage of stop
  // Runtime: 15 ms, faster than 90.24% of C++ online submissions for Construct Binary Tree from Preorder and Inorder Traversal.
  // Memory Usage: 25.9 MB, less than 93.20% of C++ online submissions for Construct Binary Tree from Preorder and Inorder Traversal.
  //
  auto i{0}, p{0};
  return build(preorder, inorder, INT_MIN, i, p);
}

}  // namespace solution

#endif  // !CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H_
