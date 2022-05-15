#ifndef DEEPEST_LEAVES_SUM_H_
#define DEEPEST_LEAVES_SUM_H_

#include <deque>
#include <numeric>

#include "tree-node.h"

namespace solution {

int deepestLeavesSum(TreeNode* root) {
  // BFS
  // Runtime: 111 ms, faster than 79.20% of C++ online submissions for Deepest Leaves Sum.
  // Memory Usage: 61.8 MB, less than 27.92% of C++ online submissions for Deepest Leaves Sum.
  //
  std::deque<TreeNode*> deque, temp;
  deque.push_back(root);

  while (deque.size()) {
    for (auto& node : deque) {
      if (node->left) temp.push_back(node->left);
      if (node->right) temp.push_back(node->right);
    }

    if (temp.empty()) break;
    deque = std::move(temp);
  }

  auto result{0};
  for (auto& node : deque) {
    result += node->val;
  }

  return result;
}

}  // namespace solution

#endif  // !DEEPEST_LEAVES_SUM_H_
