#ifndef UNIQUE_BINARY_SEARCH_TREES_II_H_
#define UNIQUE_BINARY_SEARCH_TREES_II_H_

#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<TreeNode*> generateTree(int begin, int end) {
  if (begin > end) return {nullptr};
  if (begin == end) return {new TreeNode(begin)};

  std::vector<TreeNode*> result;
  for (auto i{begin}; i <= end; ++i) {
    for (auto& left : generateTree(1, i - 1)) {
      for (auto& right : generateTree(i + 1, end)) {
        auto node = new TreeNode(i);
        node->left = left;
        node->right = right;

        result.push_back(node);
      }
    }
  }

  return result;
}

std::vector<TreeNode*> generateTrees(int n) {
  // classic DP...
  // Runtime: 22 ms, faster than 56.21% of C++ online submissions for Unique Binary Search Trees II.
  // Memory Usage: 15.9 MB, less than 65.27% of C++ online submissions for Unique Binary Search Trees II.
  //
  return generateTree(1, n);
}

}

#endif  // !UNIQUE_BINARY_SEARCH_TREES_II_H_
