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

#include "rotate-list.h"

ListNode* buildList(std::vector<int> v) {
  auto head = new ListNode(), current = head;
  for (auto& n : v) {
    current->next = new ListNode(n);
    current = current->next;
  }
  return head->next;
}

int main() {
  auto head = buildList({0, 1, 2});
  auto result = solution::rotateRight(head, 2);

  return 0;
}
