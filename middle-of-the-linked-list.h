#ifndef MIDDLE_OF_THE_LINKED_LIST_H_
#define MIDDLE_OF_THE_LINKED_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* middleNode(ListNode* head) {
  // fast and slower ptr
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
  // Memory Usage: 6.7 MB, less than 18.40% of C++ online submissions for Middle of the Linked List.
  //
  auto p1 = head, p2 = head;
  while (p2 != nullptr && p2->next != nullptr) {
    p1 = p1->next;
    p2 = p2->next->next;
  }
  return p1;
}

}

#endif  // MIDDLE_OF_THE_LINKED_LIST_H_
