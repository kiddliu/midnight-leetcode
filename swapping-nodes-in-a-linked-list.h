#ifndef SWAPPING_NODES_IN_A_LINKED_LIST_H_
#define SWAPPING_NODES_IN_A_LINKED_LIST_H_

#include <algorithm>

#include "list-node.h"

namespace solution {

ListNode* swapNodes(ListNode* head, int k) {
  // two ptrs...
  // Runtime: 775 ms, faster than 72.36% of C++ online submissions for Swapping Nodes in a Linked List.
  // Memory Usage: 180.2 MB, less than 57.49% of C++ online submissions for Swapping Nodes in a Linked List.
  //
  auto p1{head}, p2{head}, first{head};

  while (k != 1) {
    --k, p1 = p1->next;
  }

  first = p1;
  while (p1->next != nullptr) {
    p1 = p1->next, p2 = p2->next;
  }
  std::swap(first->val, p2->val);

  return head;
}

}


#endif  // SWAPPING_NODES_IN_A_LINKED_LIST_H_
