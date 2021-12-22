#ifndef REORDER_LIST_H_
#define REORDER_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* reverseList(ListNode* head) {
  ListNode *prev = nullptr, *current = head, *n;
  while (current != nullptr) {
    n = current->next;
    current->next = prev;
    prev = current;
    current = n;
  }
  return prev;
}

void reorderList(ListNode* head) {
  // fast/slow ptrs to find the mid, then reverse the sublist, finally do merge
  // Runtime: 32 ms, faster than 95.77% of C++ online submissions for Reorder List.
  // Memory Usage: 17.8 MB, less than 76.71% of C++ online submissions for Reorder List.
  //
  if (head == nullptr || head->next == nullptr || head->next->next == nullptr) return;

  auto p1 = head, p2 = head->next, next = p1;
  while (p2 != nullptr && p2->next != nullptr) {
    p1 = p1->next;
    p2 = p2->next->next;
  }

  p2 = reverseList(p1->next);
  p1->next = nullptr;
  p1 = head;

  while (p2) {
    next = p1->next;
    p1->next = p2;
    p2 = p2->next;
    p1->next->next = next;
    p1 = next;
  }
}

}

#endif  // !REORDER_LIST_H_
