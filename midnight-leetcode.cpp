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

#include "binary-trees-with-factors.h"

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
  //std::vector<std::vector<int>> v{{1, 4, 7, 11, 15},
  //                                {2, 5, 8, 12, 19},
  //                                {3, 6, 9, 16, 22},
  //                                {10, 13, 14, 17, 24},
  //                                {18, 21, 23, 26, 30}};
  //auto result = solution::diffWaysToCompute("2-1-1");

  std::vector<int> v{18, 3, 6, 2};
  auto result = solution::numFactoredBinaryTrees(v);

  return 0;
}
