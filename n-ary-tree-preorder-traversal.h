#ifndef N_ARY_TREE_PREORDER_TRAVERSAL_H_
#define N_ARY_TREE_PREORDER_TRAVERSAL_H_

#include <algorithm>
#include <vector>

#include "node.h"

namespace solution {

std::vector<int> preorder(Node* root) {
  // recursive
  // Runtime: 24 ms, faster than 29.40% of C++ online submissions for N-ary Tree Preorder Traversal.
  // Memory Usage: 11.3 MB, less than 27.69% of C++ online submissions for N-ary Tree Preorder Traversal.
  //
  std::vector<int> v;
  if (root != nullptr) {
    preorderImpl(root, v);
  }
  return v;
}

void preorderImpl(Node* root, std::vector<int>& v) {
  v.push_back(root->val);
  for (const auto& i : root->children) {
    preorderImpl(i, v);
  }
}

}

#endif  // N_ARY_TREE_PREORDER_TRAVERSAL_H_
