#ifndef TWO_SUM_IV_INPUT_IS_A_BST_H_
#define TWO_SUM_IV_INPUT_IS_A_BST_H_

#include <queue>
#include <unordered_set>

#include "tree-node.h"

namespace solution {

bool findTarget(TreeNode* root, int k) {
  std::unordered_set<int> s;
  std::queue<TreeNode*> q;
  q.push(root);

  while (!q.empty()) {
    auto size = q.size();
    for (size_t i = 0; i < size; i++) {
      auto e = q.front();
      q.pop();
      s.emplace(e->val);

      if (e->left != nullptr) q.push(e->left);
      if (e->right != nullptr) q.push(e->right);
    }
  }

  for (auto& i : s) {
    if (k - i != i && s.count(k - i) == 1) {
      return true;
    }
  }
  return false;
}


}

#endif  // TWO_SUM_IV_INPUT_IS_A_BST_H_
