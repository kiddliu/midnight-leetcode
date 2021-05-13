#ifndef REVERSE_LINKED_LIST_H_
#define REVERSE_LINKED_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* reverseList(ListNode* head) {
  // Iterative
  // Runtime: 8 ms, faster than 58.27% of C++ online submissions for Reverse Linked List.
  // Memory Usage: 8.4 MB, less than 39.43% of C++ online submissions for Reverse Linked List.
  //
  if (head == nullptr || head->next == nullptr) return head;

  auto reversed = head;
  head = head->next;
  reversed->next = nullptr;

  while (head != nullptr) {
    auto current = head;
    head = head->next;
    current->next = reversed;
    reversed = current;
  }

  return reversed;
}

}

#endif  // REVERSE_LINKED_LIST_H_
