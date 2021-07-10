#ifndef MINIMUM_DISTANCE_BETWEEN_BST_NODES_H_
#define MINIMUM_DISTANCE_BETWEEN_BST_NODES_H_

#include <algorithm>
#include <stack>
#include <vector>

#include "tree-node.h"

namespace solution {

int minDiffInBST(TreeNode* root) {
  std::stack<TreeNode*> s;
  std::vector<int> v;
  auto current = root;

  while (current != nullptr || !s.empty()) {
    while (current != nullptr) {
      s.push(current);
      current = current->left;
    }

    current = s.top();
    s.pop();
    v.push_back(current->val);

    current = current->right;
  }

  for (size_t i = 0; i < v.size() - 1; ++i) {
    v[i] = v[i + 1] - v[i];
  }
  return *std::min_element(v.cbegin(), v.cend() - 1);
}

}

#endif  // MINIMUM_DISTANCE_BETWEEN_BST_NODES_H_
