#ifndef HOUSE_ROBBER_III_H_
#define HOUSE_ROBBER_III_H_

#include <algorithm>
#include <unordered_map>

#include "tree-node.h"

namespace solution {

int rob(TreeNode* root, bool include_root, std::unordered_map<TreeNode*, int>& memo) {
  if (root == nullptr) return 0;

  if (include_root) {
    if (memo.count(root)) return memo[root];

    memo[root] =
        std::max(root->val + rob(root->left, false, memo) +
                     rob(root->right, false, memo),
                 rob(root->left, true, memo) + rob(root->right, true, memo));
    return memo[root];
  } else {
    return rob(root->left, true, memo) + rob(root->right, true, memo);
  }
}

int rob(TreeNode* root) {
  // i think just memo the true scenario would be suffient,
  // since the false one can be composed with 2 true ones
  // Runtime: 24 ms, faster than 31.88% of C++ online submissions for House Robber III.
  // Memory Usage: 25.5 MB, less than 31.29% of C++ online submissions for House Robber III.
  //
  std::unordered_map<TreeNode*, int> memo;

  return rob(root, true, memo);
}

}

#endif  // HOUSE_ROBBER_III_H_
