#ifndef AVERAGE_OF_LEVELS_IN_BINARY_TREE_H_
#define AVERAGE_OF_LEVELS_IN_BINARY_TREE_H_

#include <queue>
#include <vector>

#include "tree-node.h"

namespace solution {

std::vector<double> averageOfLevels(TreeNode* root) {
  // bfs
  // Runtime: 8 ms, faster than 97.52% of C++ online submissions for Average of Levels in Binary Tree.
  // Memory Usage: 22.3 MB, less than 92.15% of C++ online submissions for Average of Levels in Binary Tree.
  //
  std::vector<double> v;
  std::queue<TreeNode*> q;
  q.push(root);
  
  while (!q.empty()) {
    double sum{0};
    auto size = q.size();
    for (size_t i = 0; i < size; i++) {
      auto e = q.front();
      q.pop();
      sum += e->val;

      if (e->left != nullptr) q.push(e->left);
      if (e->right != nullptr) q.push(e->right);
    }
    v.push_back(sum / size);
  }
  return v;
}

}


#endif  // AVERAGE_OF_LEVELS_IN_BINARY_TREE_H_
