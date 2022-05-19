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

#include "path-sum-ii.h"

ListNode* buildList(std::vector<int> v) {
  auto head = new ListNode(), current = head;
  for (auto& n : v) {
    current->next = new ListNode(n);
    current = current->next;
  }
  return head->next;
}

TreeNode* buildTree(std::string s) { return nullptr; }

int main() {
  auto root = new TreeNode(-2, nullptr, new TreeNode(-3));
  //root->left = new TreeNode(
  //    4, new TreeNode(11, new TreeNode(7), new TreeNode(2)), nullptr);
  //root->right = new TreeNode(8, new TreeNode(13),
  //                           new TreeNode(4, new TreeNode(5), new TreeNode(1)));
  auto result = solution::pathSum(root, -5);

  return 0;
}
