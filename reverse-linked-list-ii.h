#ifndef REVERSE_LINKED_LIST_II_H_
#define REVERSE_LINKED_LIST_II_H_

#include "list-node.h"

namespace solution {

ListNode* reverseBetween(ListNode* head, int left, int right) {
  // one run...
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Linked List II.
  // Memory Usage: 7.6 MB, less than 17.74% of C++ online submissions for Reverse Linked List II.
  //
  if (left == right) return head;

  auto index {1};
  auto current{head}, previous{head};

  while (index < left) {
    previous = current;
    current = current->next, ++index;
  }

  auto reversed{current}, tail{previous}, tail_reversed{current};
  current = current->next, ++index;
  reversed->next = nullptr;

  while (index <= right) {
    auto node{current};
    current = current->next, ++index;
    node->next = reversed;
    reversed = node;
  }

  if (left != 1) tail->next = reversed;
  tail_reversed->next = current;

  return left == 1 ? reversed : head;
}

}

#endif  // REVERSE_LINKED_LIST_II_H_
