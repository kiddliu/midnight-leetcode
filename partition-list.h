#ifndef PARTITION_LIST_H_
#define PARTITION_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* partition(ListNode* head, int x) {
  // two ptrs...
  // Runtime: 3 ms, faster than 95.20% of C++ online submissions for Partition List.
  // Memory Usage: 10.1 MB, less than 95.17% of C++ online submissions for Partition List.
  //
  if (x > 101 || x < -101) return head;

  auto h1{new ListNode()}, h2{new ListNode()}, p1{h1}, p2{h2};

  while (head) {
    if (head->val < x) {
      p1->next = head;
      p1 = p1->next;
    } else {
      p2->next = head;
      p2 = p2->next;
    }

    head = head->next;
  }

  p2->next = nullptr;
  p1->next = h2->next;

  return h1->next;
}

}

#endif  // !PARTITION_LIST_H_
