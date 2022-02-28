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

#include "search-a-2d-matrix.h"

ListNode* buildList(std::vector<int> v) {
  auto head = new ListNode(), current = head;
  for (auto& n : v) {
    current->next = new ListNode(n);
    current = current->next;
  }
  return head->next;
}

int main() {
  std::vector<std::vector<int>> v{
      {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  auto result = solution::searchMatrix(v, 13);

  return 0;
}
