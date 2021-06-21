#ifndef N_ARY_TREE_POSTORDER_TRAVERSAL_H_
#define N_ARY_TREE_POSTORDER_TRAVERSAL_H_

#include <vector>

#include "node.h"

namespace solution {

std::vector<int> postorder(Node* root) {
  // recursive
  // Runtime: 20 ms, faster than 82.17% of C++ online submissions for N-ary Tree Postorder Traversal.
  // Memory Usage: 11.3 MB, less than 32.15% of C++ online submissions for N-ary Tree Postorder Traversal.
  //
  std::vector<int> v;
  if (root != nullptr) {
    preorderImpl(root, v);
  }
  return v;
}

void preorderImpl(Node* root, std::vector<int>& v) {
  for (const auto& i : root->children) {
    preorderImpl(i, v);
  }
  v.push_back(root->val);
}

}

#endif  // N_ARY_TREE_POSTORDER_TRAVERSAL_H_
