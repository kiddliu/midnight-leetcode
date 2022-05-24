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

#include "flatten-binary-tree-to-linked-list.h"

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
  auto root = new TreeNode(1);
  root->left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
  root->right = new TreeNode(5, nullptr, new TreeNode(6));
  solution::flatten(root);

  return 0;
}
