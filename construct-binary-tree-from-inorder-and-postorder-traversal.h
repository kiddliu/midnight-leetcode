#ifndef CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H_
#define CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H_

#include <vector>

#include "tree-node.h"

namespace solution {

TreeNode* buildTree(std::vector<int>& inorder, int ibegin, int iend,
                    std::vector<int>& postorder, int pbegin, int pend) {
  auto root = new TreeNode(postorder[pend - 1]);

  auto root_index =
      std::find(inorder.cbegin() + ibegin, inorder.cbegin() + iend, root->val) -
      inorder.cbegin();
  if (root_index > ibegin) {
    auto length = root_index - ibegin;
    root->left = length == 1 ? new TreeNode(inorder[ibegin])
                             : buildTree(inorder, ibegin, root_index, postorder,
                                         pbegin, pbegin + length);
  }
  if (root_index < iend - 1) {
    auto length = iend - 1 - root_index;
    root->right = length == 1
                      ? new TreeNode(inorder[root_index + 1])
                      : buildTree(inorder, root_index + 1, iend, postorder,
                                  pend - length - 1, pend - 1);
  }

  return root;
}

TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>& postorder) {
  // length always hold
  // Runtime: 16 ms, faster than 76.48% of C++ online submissions for Construct Binary Tree from Inorder and Postorder Traversal.
  // Memory Usage: 26.1 MB, less than 62.12% of C++ online submissions for Construct Binary Tree from Inorder and Postorder Traversal.
  //
  if (inorder.size() == 1) return new TreeNode(inorder[0]);

  return buildTree(inorder, 0, inorder.size(), postorder, 0, postorder.size());
}

}  // namespace solution

#endif  // CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H_
