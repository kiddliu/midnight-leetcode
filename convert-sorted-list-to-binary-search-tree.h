#ifndef CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE_H_
#define CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE_H_

#include "list-node.h"
#include "tree-node.h"

namespace solution {

TreeNode* insert(ListNode* begin, ListNode* end = nullptr) {
  if (begin == end) return nullptr;
  if (begin->next == end) return new TreeNode(begin->val);

  auto p1{begin}, p2{begin};
  while (p2 != end && p2->next != end) {
    p1 = p1->next;
    p2 = p2->next->next;
  }

  auto result = new TreeNode(p1->val);
  result->left = insert(begin, p1);
  result->right = insert(p1->next, end);

  return result;
}

TreeNode* sortedListToBST(ListNode* head) {
  // divide and conquer, with 2 ptrs to get mid
  // Runtime: 26 ms, faster than 83.61% of C++ online submissions for Convert Sorted List to Binary Search Tree.
  // Memory Usage: 28.3 MB, less than 61.20% of C++ online submissions for Convert Sorted List to Binary Search Tree.
  //
  return insert(head);
}

}

#endif  // !CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE_H_
