#ifndef LINKED_LIST_CYCLE_II_H_
#define LINKED_LIST_CYCLE_II_H_

#include "list-node.h"

namespace solution {

ListNode *detectCycle(ListNode *head) {
  // two ptrs
  // Runtime: 7 ms, faster than 86.59% of C++ online submissions for Linked List Cycle II.
  // Memory Usage: 7.4 MB, less than 99.44% of C++ online submissions for Linked List Cycle II.
  //
  if (head == nullptr || head->next == nullptr) return nullptr;

  auto fast = head, slow = head, entry = head;
  do {
    slow = slow->next;
    fast = fast->next;
    if (fast == nullptr) return nullptr;
    fast = fast->next;
  } while (fast && slow && fast != slow);

  if (fast != slow) return nullptr;

  while (slow != entry) {
    slow = slow->next;
    entry = entry->next;
  }

  return entry;
}

}

#endif  // !LINKED_LIST_CYCLE_II_H_
