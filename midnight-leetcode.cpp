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

#include "populating-next-right-pointers-in-each-node.h"

ListNode* buildList(std::vector<int> v) {
  auto head = new ListNode(), current = head;
  for (auto& n : v) {
    current->next = new ListNode(n);
    current = current->next;
  }
  return head->next;
}

int main() {
  auto root = new Node(1, new Node(2, new Node(4), new Node(5), nullptr),
                       new Node(3, new Node(6), new Node(7), nullptr), nullptr);
  solution::connect(root);

  return 0;
}
