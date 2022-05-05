#ifndef BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_H_
#define BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_H_

#include <algorithm>
#include <deque>
#include <iterator>
#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {
  // with deque
  // Runtime: 3 ms, faster than 75.91% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.
  // Memory Usage: 12.1 MB, less than 46.98% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.
  //
  std::vector<std::vector<int>> result;
  if (root == nullptr) return result;

  std::deque<TreeNode*> deque;
  deque.push_back(root);
  auto reversed{false};

  while (!deque.empty()) {
    std::vector<int> v;
    if (reversed) {
      std::transform(deque.crbegin(), deque.crend(), std::back_inserter(v),
                     [](const TreeNode* node) { return node->val; });
    } else {
      std::transform(deque.cbegin(), deque.cend(), std::back_inserter(v),
                     [](const TreeNode* node) { return node->val; });
    }
    result.push_back(v);

    auto size = deque.size();
    reversed = !reversed;

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

#endif  // !BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_H_
