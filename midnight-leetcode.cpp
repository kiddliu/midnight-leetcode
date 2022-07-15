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

#include "max-area-of-island.h"

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
  std::vector<std::vector<int>> v{{ 1, 1, 0, 0, 0 }, { 1, 1, 0, 0, 0 },
                                  { 0, 0, 0, 1, 1 }, { 0, 0, 0, 1, 1 }};
  auto result = solution::maxAreaOfIsland(v);

  return 0;
}
