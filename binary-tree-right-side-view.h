#ifndef BINARY_TREE_RIGHT_SIDE_VIEW_H_
#define BINARY_TREE_RIGHT_SIDE_VIEW_H_

#include <deque>
#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<int> rightSideView(TreeNode* root) {
  // BFS...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Right Side View.
  // Memory Usage: 12.1 MB, less than 19.99% of C++ online submissions for Binary Tree Right Side View.
  //
	std::vector<int> result;
  if (root == nullptr) return result;

	std::deque<TreeNode*> deque;
  deque.push_back(root);

	while (auto size = deque.size()) {
    result.push_back(deque.back()->val);

    while (size--) {
      auto& node = deque.front();

      if (node->left) deque.push_back(node->left);
      if (node->right) deque.push_back(node->right);
      deque.pop_front();
    }
  }

	return result;
}

}

#endif  // !BINARY_TREE_RIGHT_SIDE_VIEW_H_
