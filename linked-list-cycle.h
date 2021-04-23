#ifndef LINKED_LIST_CYCLE_H_
#define LINKED_LIST_CYCLE_H_

#include <limits>

#include "list-node.h"

namespace solution {

bool hasCycle(ListNode *head) {
  // Leave marks if visited
  // Runtime: 8 ms, faster than 96.12% of C++ online submissions for Linked List Cycle.
  // Memory Usage: 8.1 MB, less than 13.39% of C++ online submissions for Linked List Cycle.
  //
  if (head == nullptr) return false;

  do {
    if (head->val == std::numeric_limits<int>::max()) return true;

    head->val = std::numeric_limits<int>::max();
    head = head->next;
  } while (head != nullptr);

  return false;
}

}

#endif  // LINKED_LIST_CYCLE_H_
