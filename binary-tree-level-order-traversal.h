#ifndef BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_
#define BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_

#include <algorithm>
#include <deque>
#include <iterator>
#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<std::vector<int>> levelOrder(TreeNode* root) {
  // with single deque
  // Runtime: 6 ms, faster than 50.59% of C++ online submissions for Binary Tree Level Order Traversal.
  // Memory Usage: 12.6 MB, less than 62.90% of C++ online submissions for Binary Tree Level Order Traversal.
  //
  std::vector<std::vector<int>> result;
  if (root == nullptr) return result;

  std::deque<TreeNode*> deque;
  deque.push_back(root);

  while (!deque.empty()) {
    std::vector<int> v;
    std::transform(deque.cbegin(), deque.cend(), std::back_inserter(v),
                   [](const TreeNode* node) { return node->val; });
    result.push_back(v);

    auto size = deque.size();

    for (auto i{0}; i < size; ++i) {
      auto node = deque[i];
      if (node->left) deque.push_back(node->left);
      if (node->right) deque.push_back(node->right);
    }

    while (size--) {
      deque.pop_front();
    }
  }
  return result;
}

}

#endif  // !BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H_
