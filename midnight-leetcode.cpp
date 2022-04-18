// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "list-node.h"
#include "node2.h"
#include "tree-node.h"

#include "kth-smallest-element-in-a-bst.h"

ListNode* buildList(std::vector<int> v) {
  auto head = new ListNode(), current = head;
  for (auto& n : v) {
    current->next = new ListNode(n);
    current = current->next;
  }
  return head->next;
}

int main() {
  auto root = new TreeNode(5, new TreeNode(3, new TreeNode(2, new TreeNode(1), nullptr),
                                           new TreeNode(4)), new TreeNode(6));
  auto result = solution::kthSmallest(root, 3);

  return 0;
}
