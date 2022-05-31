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

#include "check-if-a-string-contains-all-binary-codes-of-size-k.h"

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
  std::vector<std::vector<char>> v{
      {{ 'X', 'O', 'X', 'O', 'X', 'O', 'O', 'O', 'X', 'O' },
       { 'X', 'O', 'O', 'X', 'X', 'X', 'O', 'O', 'O', 'X' },
       { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'X' },
       { 'O', 'O', 'O', 'O', 'O', 'O', 'X', 'O', 'O', 'X' },
       { 'O', 'O', 'X', 'X', 'O', 'X', 'X', 'O', 'O', 'O' },
       { 'X', 'O', 'O', 'X', 'X', 'X', 'O', 'X', 'X', 'O' },
       { 'X', 'O', 'X', 'O', 'O', 'X', 'X', 'O', 'X', 'O' },
       { 'X', 'X', 'O', 'X', 'X', 'O', 'X', 'O', 'O', 'X' },
       { 'O', 'O', 'O', 'O', 'X', 'O', 'X', 'O', 'X', 'O' },
       { 'X', 'X', 'O', 'X', 'X', 'X', 'X', 'O', 'O', 'O' }}};
  solution::hasAllCodes("00110", 2);

  return 0;
}
