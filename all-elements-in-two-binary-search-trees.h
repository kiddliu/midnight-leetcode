#ifndef ALL_ELEMENTS_IN_TWO_BINARY_SEARCH_TREES_H_
#define ALL_ELEMENTS_IN_TWO_BINARY_SEARCH_TREES_H_

#include <algorithm>
#include <deque>
#include <vector>

#include "tree-node.h";

namespace solution {

std::vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
  // why...
  // Runtime: 183 ms, faster than 44.99% of C++ online submissions for All Elements in Two Binary Search Trees.
  // Memory Usage: 86.4 MB, less than 39.65% of C++ online submissions for All Elements in Two Binary Search Trees.
  //
  std::vector<int> result;
  std::deque<TreeNode*> deque;
  if (root1) deque.push_back(root1);
  if (root2) deque.push_back(root2);

  while (!deque.empty()) {
    auto& element = deque.front();

    if (element->left) deque.push_back(element->left);
    if (element->right) deque.push_back(element->right);

    deque.pop_front();
  }


  std::sort(result.begin(), result.end());
  return result;
}

}

#endif  // !ALL_ELEMENTS_IN_TWO_BINARY_SEARCH_TREES_H_
