#ifndef REMOVE_LINKED_LIST_ELEMENTS_H_
#define REMOVE_LINKED_LIST_ELEMENTS_H_

#include "list-node.h"

namespace solution {

ListNode* removeElements(ListNode* head, int val) {
  // Double pointers
  // Runtime: 16 ms, faster than 96.33% of C++ online submissions for Remove Linked List Elements.
  // Memory Usage: 15 MB, less than 74.91% of C++ online submissions for Remove Linked List Elements.
  //
  if (head == nullptr) return head;
  while (head->val == val) {
    head = head->next;
    if (head == nullptr) return head;
  }
  
  auto current = head, next = current->next;
  while (next != nullptr) {
    if (next->val == val) {
      while (next->next != nullptr && next->next->val == val) {
        next = next->next;
      }
      current->next = next->next;
    }
    current = current->next;
    if (current == nullptr) break;
    next = current->next;
  }

  return head;

  // Should prefer dummy heads for deleting those node
}

}

#endif  // REMOVE_LINKED_LIST_ELEMENTS_H_
