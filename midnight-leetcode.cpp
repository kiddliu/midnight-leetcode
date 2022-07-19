// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

#include "contains-duplicate-iii.h"
#include "list-node.h"
#include "node2.h"
#include "tree-node.h"

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
      std::vector<int> v{1,2,3,1};
  auto result = solution::containsNearbyAlmostDuplicate(v, 3, 0);

  return 0;
}
