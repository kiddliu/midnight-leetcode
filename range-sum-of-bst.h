#ifndef RANGE_SUM_OF_BST_H_
#define RANGE_SUM_OF_BST_H_

#include <stack>

#include "tree-node.h"

namespace solution {

int rangeSumBST(TreeNode* root, int low, int high) {
  // direct
  // Runtime: 128 ms, faster than 42.77% of C++ online submissions for Range Sum of BST.
  // Memory Usage: 64.8 MB, less than 15.65% of C++ online submissions for Range Sum of BST.
  //
  std::stack<TreeNode*> s;
  auto current = root;
  while (current != nullptr) {
    s.push(current);
    current = current->right;
  }
  if (s.top()->val < low) return 0;

  s = std::stack<TreeNode*>{};
  current = root;

  while (current != nullptr) {
    s.push(current);
    current = current->left;
  }
  if (s.top()->val > high) return 0;

  auto result{0};
  s = std::stack<TreeNode*>{};
  s.push(root);

  while (!s.empty()) {
    current = s.top();
    s.pop();

    if (current->val >= low && current->val <= high) {
      result += current->val;
    } 

    if (current->val > low && current->left != nullptr) s.push(current->left);
    if (current->val < high && current->right != nullptr)
      s.push(current->right);
  }
  return result;
}

}

#endif  // RANGE_SUM_OF_BST_H_
