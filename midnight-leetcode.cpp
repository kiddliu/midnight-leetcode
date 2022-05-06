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

#include "remove-all-adjacent-duplicates-in-string-ii.h"

ListNode* buildList(std::vector<int> v) {
  auto head = new ListNode(), current = head;
  for (auto& n : v) {
    current->next = new ListNode(n);
    current = current->next;
  }
  return head->next;
}

int main() {
  auto root = new TreeNode(3, new TreeNode(9),
                           new TreeNode(20, new TreeNode(15), new TreeNode(7)));
  auto result = solution::removeDuplicates("pbbcggttciiippooaais", 2);

  return 0;
}
