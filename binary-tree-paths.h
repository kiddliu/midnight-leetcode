#ifndef BINARY_TREE_PATHS_H_
#define BINARY_TREE_PATHS_H_

#include <algorithm>
#include <string>
#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<std::string> binaryTreePaths(TreeNode* root) {
  // Recursive
  // Runtime: 8 ms, faster than 22.75% of C++ online submissions for Binary Tree Paths.
  // Memory Usage: 13.4 MB, less than 30.53% of C++ online submissions for Binary Tree Paths.
  //
  std::vector<std::string> result{};
  if (root->left == nullptr && root->right == nullptr) {
    result.push_back(std::to_string(root->val));
    return result;
  }

  auto append = [&root, &result](const std::string& s) {
    result.push_back(std::to_string(root->val) + "->" + s);
  };
  
  if (root->left) {
    auto left = binaryTreePaths(root->left);
    std::for_each(left.cbegin(), left.cend(), append);
  }
  if (root->right) {
    auto right = binaryTreePaths(root->right);
    std::for_each(right.cbegin(), right.cend(), append);
  }

  return result;
}

}

#endif  // BINARY_TREE_PATHS_H_
