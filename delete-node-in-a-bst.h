#ifndef DELETE_NODE_IN_A_BST_H_
#define DELETE_NODE_IN_A_BST_H_

#include "tree-node.h"

namespace solution {

TreeNode* deleteNode(TreeNode* root, int key) {
  // find the smallest number in the right child tree 
  // or the biggest number in the left child tree would hold the BST
  // Runtime: 24 ms, faster than 97.26% of C++ online submissions for Delete Node in a BST.
  // Memory Usage: 32.7 MB, less than 30.07% of C++ online submissions for Delete Node in a BST.\
  //
  if (root != nullptr) {
    if (root->val < key) {
      root->right = deleteNode(root->right, key);
    } else if (root->val > key) {
      root->left = deleteNode(root->left, key);
    } else if (root->right == nullptr) {
      return root->left;
    } else {
      auto current = root->right, prev = root;
      while (current->left) {
        prev = current;
        current = current->left;
      }
      root->val = current->val;
      if (current->right) {
        if (prev == root) {
          prev->right = current->right;
        } else {
          prev->left = current->right;
        }
      } else {
        delete current;
        if (prev == root) {
          prev->right = nullptr;
        } else {
          prev->left = nullptr;
        }
      }
    }
  }

  return root;
}

}

#endif  // DELETE_NODE_IN_A_BST_H_
