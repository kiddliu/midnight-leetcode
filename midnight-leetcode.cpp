// midnight-leetcode.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//

#include <iostream>

#include "list-node.h"
#include "remove-duplicates-from-sorted-list.h"

int main() { 
  auto *node = new ListNode(1),
    *node2 = new ListNode(1),
    *node3 = new ListNode(1),
    *node4 = new ListNode(3),
    *node5 = new ListNode(3);
  node->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;
  std::cout << std::boolalpha << solution::deleteDuplicates(node);
}
