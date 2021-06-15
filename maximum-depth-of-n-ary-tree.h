#ifndef MAXIMUM_DEPTH_OF_N_ARY_TREE_H_
#define MAXIMUM_DEPTH_OF_N_ARY_TREE_H_

#include <queue>

#include "node.h"

namespace solution {

int maxDepth(Node* root) {
  // BFS
  // Runtime: 16 ms, faster than 66.19% of C++ online submissions for Maximum Depth of N-ary Tree.
  // Memory Usage: 10.8 MB, less than 66.15% of C++ online submissions for Maximum Depth of N-ary Tree.
  //
  if (root == nullptr) return 0;
  if (root->children.size() == 0) return 1;

  auto r{0};
  std::queue<Node*> q, t;
  q.push(root);

  while (!q.empty()) {
    auto e = q.front();
    q.pop();

    for (auto& n : e->children) {
      t.push(n);
    }

    if (q.empty() && !t.empty()) {
      ++r;
      q = std::move(t);
    }
  }

  return r;
}

}

#endif  // MAXIMUM_DEPTH_OF_N_ARY_TREE_H_
