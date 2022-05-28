#ifndef SUM_ROOT_TO_LEAF_NUMBERS_H_
#define SUM_ROOT_TO_LEAF_NUMBERS_H_

#include <queue>

#include "tree-node.h"

namespace solution {

int sumNumbers(TreeNode* root) {
  // iterative...is slower than recursive? interesting...
  // Runtime: 7 ms, faster than 20.24% of C++ online submissions for Sum Root to Leaf Numbers.
  // Memory Usage: 9.3 MB, less than 19.44% of C++ online submissions for Sum Root to Leaf Numbers.
  //
  auto result{0};
  
  std::queue<TreeNode*> q;
  q.push(root);

  while (q.size()) {
    auto& node = q.front();
    q.pop();

    if (node->left == nullptr && node->right == nullptr) {
      result += node->val;
    } else {
      if (node->left) {
        node->left->val += node->val * 10;
        q.push(node->left);
      } 
      if (node->right) {
        node->right->val += node->val * 10;
        q.push(node->right);
      }
    }
  }

  return result;
}

}

#endif  // !SUM_ROOT_TO_LEAF_NUMBERS_H_
