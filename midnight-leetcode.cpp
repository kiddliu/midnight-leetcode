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

#include "furthest-building-you-can-reach.h"

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
  std::vector<int> v{4, 12, 2, 7, 3, 18, 20, 3, 19};
  auto result = solution::furthestBuilding(v, 10, 2);

  return 0;
}
