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

#include "sum-root-to-leaf-numbers.h"

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
  auto root = new TreeNode(4);
  root->left = new TreeNode(9, new TreeNode(5), new TreeNode(1));
  root->right = new TreeNode(0);
  auto result = solution::sumNumbers(root);

  return 0;
}
