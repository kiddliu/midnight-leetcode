#ifndef REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
#define REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

#include "list-node.h"

namespace solution {

ListNode* removeNthFromEnd(ListNode* head, int n) {
  // 2 pointers w/ double pointers
  // Runtime: 4 ms, faster than 78.91% of C++ online submissions for Remove Nth Node From End of List.
  // Memory Usage: 10.7 MB, less than 31.47% of C++ online submissions for Remove Nth Node From End of List.
  //
  auto p1 = &head;
  auto p2 = head;

	for (auto i = 0; i < n; ++i) {
    p2 = p2->next;
  }
  
  while (p2) {
    p1 = &(*p1)->next;
    p2 = p2->next;
  }
  *p1 = (*p1)->next;
  return head;
}

}

#endif  // REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
