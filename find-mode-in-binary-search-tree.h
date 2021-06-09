#ifndef FIND_MODE_IN_BINARY_SEARCH_TREE_H_
#define FIND_MODE_IN_BINARY_SEARCH_TREE_H_

#include <iterator>
#include <map>
#include <queue>
#include <unordered_map>

#include "tree-node.h"

namespace solution {

std::vector<int> findMode(TreeNode* root) {
  // naive solution, it takes much more time than expected
  // can use BFS + in order to find the number of modes, then determine who's the most
  // Runtime: 40 ms, faster than 7.71% of C++ online submissions for Find Mode in Binary Search Tree.
  // Memory Usage: 27 MB, less than 7.50% of C++ online submissions for Find Mode in Binary Search Tree.
  std::unordered_map<int, int> m;
  std::queue<TreeNode*> q;
  q.push(root);

  while (!q.empty()) {
    auto n = q.front();

    if (n->left != nullptr) q.push(n->left);
    if (n->right != nullptr) q.push(n->right);
    q.pop();

    if (m.find(n->val) != m.end()) {
      m[n->val] += 1;
    } else {
      m.insert({n->val, 1});
    }
  }

  std::multimap<int, int, std::greater<int>> mm;
  for (const auto& p : m) {
    mm.insert({p.second, p.first});
  }
  auto ps = mm.equal_range((*mm.cbegin()).first);
  std::vector<int> v;
  for (auto i = ps.first; i != ps.second; std::advance(i, 1)) {
    v.push_back(i->second);
  }
  return v;
}

}

#endif  // FIND_MODE_IN_BINARY_SEARCH_TREE_H_
