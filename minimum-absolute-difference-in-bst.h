#ifndef MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_H_
#define MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_H_

#include <algorithm>
#include <stack>
#include <vector>

#include "tree-node.h"

namespace solution {

int getMinimumDifference(TreeNode* root) {
  // iterative
  // Runtime: 12 ms, faster than 94.27% of C++ online submissions for Minimum Absolute Difference in BST.
  // Memory Usage: 25.7 MB, less than 5.25% of C++ online submissions for Minimum Absolute Difference in BST.
  //
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

#endif  // MINIMUM_ABSOLUTE_DIFFERENCE_IN_BST_H_
