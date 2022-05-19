#ifndef PATH_SUM_II_H_
#define PATH_SUM_II_H_

#include <queue>
#include <vector>

#include "tree-node.h"

namespace solution {

void dfs(TreeNode* root, int targetSum, std::vector<std::vector<int>>& result,
         std::vector<int>& v) {
  if (!root->left && !root->right) {
    if (root->val == targetSum) {
      result.push_back(v);
      result.back().push_back(targetSum);
    }
    return;
  }
  auto next = v;
  next.push_back(root->val);

  if (root->left) dfs(root->left, targetSum - root->val, result, next);
  if (root->right) dfs(root->right, targetSum - root->val, result, next);
}

std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum) {
  // DFS...
  // Runtime: 16 ms, faster than 58.81% of C++ online submissions for Path Sum II.
  // Memory Usage: 32 MB, less than 44.41% of C++ online submissions for Path Sum II.
  //
  std::vector<std::vector<int>> result;
  if (root == nullptr) return result;

  std::vector<int> v;
  dfs(root, targetSum, result, v);

  return result;
}

}  // namespace solution

#endif  // PATH_SUM_II_H_
