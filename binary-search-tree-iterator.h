#ifndef BINARY_SEARCH_TREE_ITERATOR_H_
#define BINARY_SEARCH_TREE_ITERATOR_H_

#include <stack>

#include "tree-node.h"

/// <summary>
/// Runtime: 41 ms, faster than 43.70% of C++ online submissions for Binary Search Tree Iterator.
/// Memory Usage: 24.2 MB, less than 56.50% of C++ online submissions for Binary Search Tree Iterator.
/// </summary>
class BSTIterator {
 public:
  BSTIterator(TreeNode* root) { moveToNext(root); }

  int next() { return !stack_.empty(); }

  bool hasNext() {
    auto node = stack_.top();
    stack_.pop();

    moveToNext(node->right);
    return node->val;
  }

 private:
  std::stack<TreeNode*> stack_;

  void moveToNext(TreeNode* n) {
    auto node = n;
    while (node) {
      stack_.push(node);
      node = node->left;
    }
  }
};

#endif  // !BINARY_SEARCH_TREE_ITERATOR_H_
